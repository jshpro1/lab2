#include <stdio.h>

int add(int a, int b);
int subtract(int a, int b);
int multiply(int a, int b);
double divide(int a, int b);

int main() {
      int num1 = 10;
      int num2 = 5;

       printf("덧셈 결과: %d\n", add(num1, num2));
       printf("뺄셈 결과: %d\n", subtract(num1, num2));
       printf("곱셈 결과: %d\n", multiply(num1, num2));
       printf("나눗셈 결과: %.2f\n", divide(num1, num2));
   
       return 0;
}

