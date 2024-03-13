#include <stdio.h>

int main(){
	
	int matriz[6][3], produto=1;
	
	
	for(int i=0; i<6; i++){
		for(int j=0; j<3; j++){
			printf("Digite o valor da matriz[%i][%i]: ",i,j);
			scanf("%i", &matriz[i][j]);
		}
	}
	
	for(int i=0; i<6; i++){
		produto *= matriz[i][2];
	}
	
	for(int i=0; i<6; i++){
		for(int j=0; j<3; j++){
			printf("%3i", matriz[i][j]);
		}
		printf("\n");
	}
	
	printf("\nO produto da terceira coluna: %i", produto);
	
	
	return 0;
}
