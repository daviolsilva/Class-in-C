#include <stdio.h>

float ano, dias;

main() {
	printf("Digite o seu ano de nascimento: ");
	scanf("%f",&ano);
	dias = (2026 - ano) * 365;
	printf("\n Sua idade em dias e: %.0f", dias);	
}