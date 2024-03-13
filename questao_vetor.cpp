#include <stdio.h>
#include <stdlib.h>
int main(){
	
	int vet[8], vet_positivo[8], vet_negativo[8], ponteiroP=0, ponteiroN=0;
	
	
	for(int i=0; i<8; i++){
		printf("Digite o valor %i: ", i+1);
		scanf("%i",&vet[i]);
	}
	
	
	for(int i=0; i<8; i++){
		if(vet[i]>=0){
			vet_positivo[ponteiroP] = vet[i];
			ponteiroP++;
		}else{
			vet_negativo[ponteiroN] = vet[i];
			ponteiroN++;
		}
	}
	
	printf("\nVALORES POSITIVOS\n");
	
	for(int i=0; i<ponteiroP; i++){
		printf("%3i", vet_positivo[i]);
	}
	
	printf("\nVALORES NEGATIVOS\n");
	
	for(int i=0; i<ponteiroN; i++){
		printf("%3i", vet_negativo[i]);
	}
	
	return 0;
}
