#include <stdio.h>
#include <stdlib.h>
#include "TorreDeHanoi.h"

struct disco{
    Disco *next; //ponteiro para o proximo disco
    char tamDisco; //tamanho do disco
};

struct pino{
    Disco *topo; //ponteiro para o topo da pilha
    char numDiscos; //quantidade de discos
};

Pino** criarPinos(int n){
    Pino** vecPinos;
    vecPinos = (Pino*)malloc(n*sizeof(Pino));
    return vecPinos;
}

int num_Discos(Pino *p){   //informa o numero de disco presentes no pino.
    if(p == NULL)
        return 0;
    else
        return (p->numDiscos-'0');
}

int check(Pino **pinos, int numPinos, int numDiscos){ //percorrer todos os pinos(menos o 1º) e verifica, algum está completo.
    for(int i = 1; i<numPinos; i++)
        if((pinos[i]->numDiscos-'0')==numDiscos)
            return 1;
    return 0;
}

int pinoVazio(Pino *pino){   //verificar se o pino está vazio, retorna 1 caso esteja e 0 caso não esteja.
    return (pino->topo == NULL);
}
int tamanhoDisco(Disco *d){   //informa o tamnaho da largura do disco.
    if(d == NULL)
        return 6;
    else
        return (d->tamDisco-'0');
}
int moverDisco(Pino **pinos, int pinoOrigem, int pinoDestino){   //move um disco de um pino de origem para um pino de destino.
    Disco* topo_origem = pinos[pinoOrigem-1]->topo;              //retorna 1 caso o movimento seja valido e 0 se naão for.
    Disco* topo_destino = pinos[pinoDestino-1]->topo;

    if(pinoVazio(pinos[pinoOrigem-1])==1){
        printf("Movimento invalido.\n");
        return 0;
    }
    else if(tamanhoDisco(topo_origem)>tamanhoDisco(topo_destino)){
        printf("Movimento invalido.\n");
        return 0;
    }
    else{
        push(pinos[pinoDestino-1],pop(pinos[pinoOrigem-1]));
        return 1;
    }
}

Pino*  criarPino(){
    Pino* p = (Pino*)malloc(sizeof(Pino));
    p ->topo = NULL;
    p ->numDiscos = 0+'0';
    return p;
}

Disco* criarDisco(int tam){
    Disco* d = (Disco*)malloc(sizeof(Disco));
    d->next = NULL;
    d->tamDisco = tam+'0';
    return d;
}

Disco* pop(Pino *pino){
    if(pino->topo == NULL)
        return NULL;
    Disco* d = pino->topo;
    pino->topo = d->next;
    pino->numDiscos = ((pino->numDiscos-'0')-1)+'0';
    d->next = NULL;
    return d;
}

void push(Pino *pino, Disco *disco){
    if(pino->topo == NULL){
        pino->topo = disco;
        pino->numDiscos = ((pino->numDiscos-'0')+1)+'0';
    }else{
        disco->next = pino->topo;
        pino->topo = disco;
        pino->numDiscos = ((pino->numDiscos-'0')+1)+'0';
    }
}


void excluirPino(Pino *pino){
	Disco* no = pino->topo;
	while (no != NULL) {
		Disco* x = no->next;
		free(no);
		no = x;
	}
	free(pino);
}

void excluirPinos(Pino **pinos, int n){
	int i;
	for(i=0; i<n; i++){
		excluirPino(pinos[i]);
	}
	free(pinos);
}

void imprimir_linha(int m, int tamanho_disco, char meio){
    char *v;
    v = (char*)malloc((m+1)*sizeof(char));
    for(int i = 0; i<m+1; i++){
        if(i<tamanho_disco)
            v[i] = '_';
        else
            v[i] = ' ';
    }

    for(int i = m; i>=0; i--)
        printf("%c",v[i]);
    printf("%c",meio);
    for(int i = 0; i<m+1; i++)
        printf("%c",v[i]);
    printf("\n");

}

void imprimir(Pino **pinos, int numPinos, int numDiscos){   //imprime todos os Pinos
    for(int i = 0; i<numPinos; i++){
        printf("\n");
        Disco *d = pinos[i]->topo;
        for(int l = 0; l<(numDiscos-(num_Discos(pinos[i])));l++)
            imprimir_linha(numDiscos,0,'|');
        for(int j = 0; j<(num_Discos(pinos[i])); j++){
            imprimir_linha(numDiscos,(d->tamDisco)-'0','|');
            d=d->next;
        }
        imprimir_linha(numDiscos,numDiscos+1,'|');
        printf("\n");
        imprimir_linha(numDiscos,0,(i+1)+'0');
        printf("\n");
    }
}

