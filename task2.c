#include <stdio.h>
#include <stdlib.h>

/* IMPLEMENT ME: Declare your functions here */
int add (int a, int b) { printf("Adding 'a' and 'b'\n"); return a + b; }
int subtract(int a, int b) { printf("Subtracting 'b' from 'a'\n"); return a - b; }
int multiply(int a, int b) { printf("Multiplying 'a' and 'b'\n"); return a * b; }
int divide(int a, int b) {
	if (b == 0) {
		printf("Cannot divide by zero/n");
		return 0;
	}
	printf("Dividing 'a' by 'b'\n");
	return a / b;
} 
int exit_program(int a, int b) { exit(0); }

int main (void) {
	int a = 6, b = 3, result;
	char input;

	int (*operations[])(int, int) = {add, subtract, multiply, divide, exit_program};

	printf("Operand 'a': %d | Operand 'b': %d\n", a, b);
	printf("Specify the operation to perform (0:add | 1: subtract | 2: multiply | 3: divide | 4: exit): ");
	input = getchar();

	result = operations[input - '0'](a, b);
	printf("x = %d\n", result);

	return 0;
}
