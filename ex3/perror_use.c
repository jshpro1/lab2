#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <errno.h>

// my_perror 함수를 선언
void my_perror(const char *message) {
     fprintf(stderr, "%s: %s\n", message, strerror(errno));
     }

int main(int argc, char *argv[]) {
	FILE *f;

	if (argc < 2) {
		printf("Usage: %s nofilename\n", argv[0]);
		exit(1);
	}

	if ((f = fopen(argv[1], "r")) == NULL) {
		my_perror("fopen");
		exit(1);
	}

	printf("파일 \"%s\"를 열었습니다.\n", argv[1]);

	fclose(f);
	return 0; 
}
