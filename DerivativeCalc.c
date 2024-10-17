#include <stdio.h>
#include <math.h>
void Derivative(int coeff[], int degr, int x) {
	int a = 0;
	int b;
	printf("The derivative of the polynomial is \n");

	for (int i = degr; i > 0; i--) {
		b = coeff[i] * i;
		printf("%dx^%d", b, i - 1);
		a= a + b* pow(x, i - 1);
		
		if (i > 1) {
			printf(" + ");
		}
	}
	
	printf("\nThe value of the derivative at x = %d is %d ! \n", x, a);
}

void main() {
	int degree, x;
	printf("Enter the degree of polynomial \n");
	scanf("%d", &degree);
	
	int coeff[degree + 1];

	for (int i = degree; i >= 0; i--) {
		printf("Coefficient of x^%d? \n", i);
		scanf("%d", &coeff[i]);
	}
	printf("Enter the value at which to evaluate the derivative\n");
	scanf("%d", &x);
	Derivative(coeff, degree, x);
	
}