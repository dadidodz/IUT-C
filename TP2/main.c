#include <stdio.h>
#define TAILLE_TABLEAU 5

void main(){
	int t [TAILLE_TABLEAU];
	int compteur;
	for (compteur=0 ; compteur < TAILLE_TABLEAU; compteur++){
		t[compteur] = compteur+1;
	}
	for (compteur=0; compteur < TAILLE_TABLEAU; compteur++){
		printf("t[%d] : %d\n", compteur, t[compteur]);
	}
	int tailleInt = sizeof(int);
	int tailleFloat = sizeof(float);
	int tailleDouble = sizeof(double);
	int tailleLong = sizeof(long);
	int tailleShort = sizeof(short);
	printf("Taille, en octets, en mémoire d'un int : %d\nTaille, en octets, en mémoire d'un float : %d\nTaille, en octets, en mémoire d'un double : %d\nTaille, en octets, en mémoire d'un long : %d\nTaille, en octets, en mémoire d'un short : %d\nTaille, en octets, en mémoire de la taille du tableau : %d\n", 
		tailleInt, tailleFloat, tailleDouble, tailleLong, tailleShort, TAILLE_TABLEAU);
	for (compteur=0; compteur<TAILLE_TABLEAU; compteur++){
		printf("Adresse t[%d] : %p\n", compteur, &t[compteur]);
	}
	long t2 [TAILLE_TABLEAU];
	for (compteur=0; compteur < TAILLE_TABLEAU; compteur++){
		t2[compteur] = compteur + 1;
	}
	for (compteur=0; compteur < TAILLE_TABLEAU; compteur++){
		printf("Adresse t2[%d] : %p\n", compteur, &t2[compteur]);
	}
	int a=2;
	int b=0;
	printf("Adresse de a : %p\n", &a);
	printf("Adresse de b : %p\n", &b);
	int* p=&a;
	int tailleP = sizeof(p);
	printf("Taille de p : %d\n", tailleP);
	int taillePointeurLong = sizeof(long*);
	int taillePointeurShort = sizeof(short*);
	printf("Taille pointeur long : %d\n", taillePointeurLong);
	printf("Taille pointeur short : %d\n", taillePointeurShort);
	printf("Adresse de p : %p\n", &p);
	printf("Valeur référencée par p : %d\n", *p);
	*p = 4;
	printf("Valeur référencée par p : %d\n", a);
	//printf("Adresse de TAILLE_TABLEAU : %p\n", &TAILLE_TABLEAU);
	printf("Adresse de t : %p\n", &t);
	printf("Valeur de t : %p\n", t);
	printf("Valeur référencée par t : %d (première case du tableau t)\n", *t);
	p = t;
	printf("Valeur de p : %p\n", p);
	printf("Valeur référencée par p : %d\n", *p);
	p = p + 1;
	printf("Valeur de p : %p\n", p);
	printf("Valeur référencée par p : %d\n", *p);
	long* p2 = t2;
	printf("Valeur de p2 : %p\n", p2);
	p2 = p2 + 1;
	printf("Valeur de p2 : %p\n", p2);
	p2 = p2 + 2;
	printf("Valeur de p2 : %p\n", p2);
	*p2 = 10;
	printf("Valeur de t2[3] : %d\n", t2[3]);
	p2[-3] = 18;
	p2[-2] = 19;
	p2[-1] = 20;
	p2[0] = 21;
	p2[1] = 22;
	for (compteur = 0;compteur < TAILLE_TABLEAU; compteur++){
		printf("t2[%d] : %d\n", compteur, t2[compteur]);
	}
}
