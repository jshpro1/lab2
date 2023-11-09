#include <stdio.h>
#include <stdlib.h>

void my_assert(int condition, const char *message) {
	if (!condition) {
	            fprintf(stderr, "Assertion failed: %s\n", message);
		    exit(1);
	}
}

int main(int argc, char *argv[]) {
	FILE *f;

	if (argc < 2) {
		printf("Usage: %s file_name\n", argv[0]);
		exit(1);
	}
	my_assert((f = fopen(argv[1], "r")) != NULL, "fopen failed");
		     
      	printf("Open a file \"%s\".\n", argv[1]);

	fclose(f);

	return 0;
}
