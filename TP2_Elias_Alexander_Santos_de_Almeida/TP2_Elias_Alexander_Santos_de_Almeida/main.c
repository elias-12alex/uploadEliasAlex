#include <stdio.h>
#include <stdlib.h>
#include<stdbool.h>
#include "TorreDeHanoi.h"

int main(){
    Pino** pinos;
    int m, n, origem, num_jogadas = 0, destino;

    bool sec = false;
    while(sec == false){
        printf("Insira a quantidade de pinos: [3..5] ");
        scanf("%d",&n);
        if(n>=3 && n<=5)
            sec = true;
        else
            printf("Entrada invalida\n");
    }
    sec = false;
    while(sec == false){
        printf("Insira a quantidade de discos: [3..5] ");
        scanf("%d",&m);
        if(m>=3 && m<=5)
            sec = true;
        else
            printf("Entrada invalida\n");
    }

    pinos = criarPinos(n);
    for(int i = 0; i<n; i++)
        pinos[i] = criarPino();
    for(int j = 0; j<m; j++){
        Disco *d = criarDisco(m-j);
        push(pinos[0],d);
    }
    imprimir(pinos,n,m);

    while(check(pinos,n,m)==0){
        printf("Insira os pinos de origem e de destino: ");
        scanf("%d %d",&origem, &destino);
        if((destino>=1 && destino<=n)&&(origem>=1 && origem<=n)){
            num_jogadas = num_jogadas + moverDisco(pinos,origem,destino);
            imprimir(pinos,n,m);
        }
        else{
            printf("Entrada invalida\n");
            imprimir(pinos,n,m);
        }
    }

    printf("\nPARABENS VOCE CONSEGUIU\n");
    printf("TOTAL DE JOGADAS: %d\n",num_jogadas);
    excluirPinos(pinos,n);


}
