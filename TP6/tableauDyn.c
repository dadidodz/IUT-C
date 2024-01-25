#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>

#define QTE 10

typedef char MON_TYPE;

int main (void)
{
MON_TYPE * tablo ;
tablo = (MON_TYPE *) calloc (sizeof(MON_TYPE), QTE);
if (tablo==NULL) {
	perror("Echec malloc") ;
	exit (EXIT_FAILURE) ;
	}
	printf("Taille du type initial : %d \n",sizeof(MON_TYPE));
	printf("Taille de la variable tablo : %d\n",malloc_usable_size(tablo));
	printf("Adresse de la variable tablo : %p\n",&tablo); /* Le
	compilateur laisse passer a priori cette erreur !!! */
	printf("Adresse du premier élément : %p\n",&tablo[0]);
	printf("Taille d'un élément de tablo : %d\n",sizeof(tablo[0]));
	return (EXIT_SUCCESS) ;
}
