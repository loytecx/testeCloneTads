#include <stdlib.h>
#include <stdio.h>

int main(){

	int num;

	printf("Digite um número: \n");
	scanf("%i", &num);
	
	if (num % 2 == 0){
		printf("É par...\n");
	}
	else{
		printf("É impar...\n");
	}
	
    return 0;
}