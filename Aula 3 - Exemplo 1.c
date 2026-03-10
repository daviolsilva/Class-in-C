#include <stdio.h>

main() {
	float num1, num2;
	printf("Digite o primeiro numero: ");
	scanf("%f",&num1);
	printf("\nDigite o segundo numero: ");
	scanf("%f",&num2);
	if (num1>num2) {
		printf("O numero %.2f e maior!!!!!!! UHUL EBAA", num1);
	}
	else if (num2 > num1) {
		printf("O numero %.2f e maior!!!!!!! UUUU UUUUU", num2);
	}
	else {
		printf("Sao a mesma coisa :D");
	}
}