#include <stdio.h>

int num1, num2, div, quo;

main() {
	printf("Digite o seu dividendo: ");
	scanf("%i",&num1);
	printf("\nDigite o seu divisor: ");
	scanf("%i",&num2);
	div = num1 / num2;
	quo = num1 % num2;
	printf("\nSeu resultado e: %i", div);
	printf("\nSeu quociente e: %i", quo);
}