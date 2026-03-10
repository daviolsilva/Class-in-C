#include <stdio.h>

int main() {
	float media,num1,num2;
	printf("Digite o seu primeiro numero: ");
	scanf("%f",&num1);
	printf("\n Digite o seu segundo numero: ");
	scanf("%f",&num2);
	media = (num1 + num2) / 2;
	printf("\n Aqui esta a sua media: %.2f", media);
}