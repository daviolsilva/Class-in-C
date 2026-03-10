#include <stdio.h>

int fahrenheit, celsius;

main() {
	printf("Digite o seu valor em F: ");
	scanf("%d",&fahrenheit);
	celsius = (fahrenheit - 32) / 1.8;
	printf("Seu valor F em C e: %d", celsius);
}