#include <stdio.h>

main () {
	float n1, n2, med;
	printf("Digite seu primeiro numero: ");
	scanf("%f",&n1);
	printf("\nDigite o seu segundo numero: ");
	scanf("%f",&n2);
	med = (n1+n2) / 2;
	printf("\nSua media e igual a: %.2f", med);
if (med>=5) {
		printf("\nAprovado!");
}
else {
	printf("\nReprovado seu vagabundo!");
}
}