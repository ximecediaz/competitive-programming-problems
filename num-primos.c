#include <stdio.h>

int main(){
	
    int N;
	scanf("%d", &N);
    int i,j,aux=0;
    int band;
	int numPrimos =0;
    for(j=2; j<N; j++){
        band=0;
        for(i=1;i<N;i++){
            if(j%i==0){
                band++;
                }
        }
        if(band==2){
            numPrimos++;
        }

    }
	
	int primos[numPrimos];
	
	for(j=2; j<N; j++){
        band=0;
        for(i=1;i<N;i++){
            if(j%i==0){
                band++;
                }
        }
        if(band==2){
            primos[aux]=j;
            printf("%d\n", primos[aux]);
            aux++;
        }

    }
	
}
