#include <stdio.h>

int bas, alt, ar;

main() {
	printf("Digite o valor de sua base: ");
	scanf("%d",&bas);
	printf("\nDigite o valor de sua altura: ");
	scanf("%d",&alt);
	ar = (bas * alt) / 2;
	printf("\nSua area e igual a: %d", ar);
}