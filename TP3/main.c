#include <stdio.h>

void setInt(int newValue, int input);

void setPointerInt(int newValue, int* input);

void main(){
	int a=0;
	setInt(12, a);
	printf("Valeur de a : %d\n", a);
	printf("Adresse de a : %p\n", &a);
	setPointerInt(12, &a);
}

void setInt(int newValue, int input){
	input = newValue;
	printf("Adresse de input : %p\n", &input);
	printf("Adresse de newValue : %p\n", &newValue);
}

void setPointerInt(int newValue, int* input){
	*input = newValue;
	printf("Valeur de input : %d\n", *input);
	printf("Adresse de input : %p\n", &input);
	printf("Valeur de newValue : %d\n", newValue);
	printf("Adresse de newValue : %p\n", &newValue);
}
