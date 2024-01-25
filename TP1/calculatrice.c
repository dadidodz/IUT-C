#include <stdio.h>

int addition(int a, int b) {
	int resultat = a + b;
	return resultat;
}

void soustraction(int a, int b) {
	int resultat = a - b;
	printf("Le résultat de la soustraction de %d et %d est : %d\n", a, b, resultat);
}

void multiplication(int a, int b) {
	int resultat = a * b;
	printf("Le résultat de la multiplication de %d et %d est : %d\n", a, b, resultat);
}

float division(float a, float b) {
	if(b == 0){
		float resultat = -1;
		printf ("Attention division par 0");
		return resultat;
	}else{
		float resultat = a / b;
		return resultat;
	}
}




