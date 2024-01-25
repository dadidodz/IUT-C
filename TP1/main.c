#include <stdio.h>

int addition(int a, int b);

void soustraction(int a, int b);

void multiplication(int a, int b);

float division(float a, float b);

void main() {
	int resultat = addition(1, 2);
	printf("Le résultat de l'addition est : %d\n", resultat);

	soustraction(2, 1);
	multiplication(2, 2);

	float a;
	float b ;
	printf("Entrez la valeur de a : ");
	scanf("%f", &a);
	printf("Entrez la valeur de b : ");
	scanf("%f", &b);
	float resultat2 = division(a, b);
	printf("Le résultat de la division de %f par %f est : %f\n", a, b, resultat2);
}




