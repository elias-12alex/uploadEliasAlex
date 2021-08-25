#include <stdio.h>
#include <math.h>
#include <time.h>
#include<string.h> //adicionado para não ter erros nas strings   
#include <stdlib.h>

#define N 12 //Aumentei o tamanho para não dar problema ao delimitar entre 3 e 9 o tamanho da matriz do jogo posteriormente.

void gerar_campo(char matriz[][N], int n){ //Função cria uma matriz para o sistema com varias flags para verificar a existência das bombas

	int i,j; //linha é i, coluna é j
	int bombas = 0.2*n*n;

	srand(time(NULL)); //faz o sorteio das bombas
	for (i=0; i<n; i++){
        for(j=0; j<n; j++){
            matriz[i][j] = '?';}
    }
    while(bombas != 0){
        i = rand () % n;
        j = rand () % n;

        if(matriz[i][j] == '?'){ // -2 -> area safe
             matriz[i][j] = '*'; //valor atribuido as bombas
            --bombas;}
    }
}

int n_bombas(int l, int c, char M[][N], int n){ //função para comparar a matriz e delimitar o tamanho correto
    int aux = 0; //inicializei o contador de bombas
    int i,j;
    char matriz[N+2][N+2];

    for(i=0;i<n+2;i++){
        for(j=0;j<n+2;j++){
            matriz[i][j] = '?';
        }
    }
    for(i=0; i<n; i++){
        for(j=0;j<n;j++){
            matriz[i+1][j+1] = M[i][j];
        }
    }
    for(i=l; i<(l+3); i++){
        for(j = c;j<(c+3);j++){
            if(matriz[i][j]=='*')
                aux ++;
        }
    }
    return aux;
}

void imprime_mat(char M[][N], int n){ //função para imprimir a matriz com ?(interrogações)
    int i,j;
    printf("\n");
/*entrada da matriz */
    for (i=0; i<n; i++){
        printf("%d | ", i+1);
        for(j=0; j<n; j++){
            printf(" %c ", M[i][j]);
        }printf("\n");
    }
    printf("   ");
    for(int i=1; i<=n; i++)
        printf("---");

    printf("\n     ");
    for(i=1; i<=n; i++)
        printf("%d  ", i);
}


int coordenada_Valida(int i, int j){ //apenas verifica se as coordenadas linha e coluna são válidas, ou seja, estão dentro da matriz
    int n;
    if (i<0 || i > n || j<0 || j>n)
        return 1;
    else
        return 0;
    }


void main(){ //Função principal

    printf("\n\t---------------------BEM VINDO AO CAMPO MINADO---------------------\n"); // Tela de início do programa
    int  num, l, c; //variáveis de entrada para tamanho da matriz quadrada, para linha e para coluna
    printf("\nDigite o tamanho da matriz quadrada desejada: ");
    scanf("%d", &num);
    while(num < 3 || num > 9){ //verifica se o valor indicado pelo usuário para o tamanho da matriz é válido, delimitando entre 3 e 9
        printf("\nEntrada Invalida\n");
        printf("\nDigite o tamanho da matriz quadrada desejada: ");
        scanf("%d", &num);
    }

    char campo[12][12];
    char matriz[12][12];
    int gameover = 0;
	int num_jogadas = 0;
	int bombas = 0.2*num*num;
    gerar_campo(matriz, num);

    for(int i=0; i<num; i++)
		for(int j=0; j<num; j++)
			campo[i][j] = '?';

while(gameover==0){
    imprime_mat(campo, num); //imprime a matriz inicial escolhida pelo usuário
    printf("\n\nDigite a linha e a coluna desejada: ");
    scanf("%d %d", &l, &c); //usuário escolhe linha e coluna

    while(coordenada_Valida(l, c) || campo[l-1][c-1]!='?'){ //verifica se usuário escolheu coordenada válida, caso contrário pede uma nova entrada
        printf("\nEntrada invalida\nDigite a linha e a coluna desejada: ");
        scanf("%d %d", &l, &c);}

    num_jogadas++; //dar sequencia as jogadas

    if(matriz[l-1][c-1]=='*'){ //verifica se o usuário escolhe coordenada que contém bomba, caso tenha escolhido perdeu o jogo
        printf("\nVOCE PERDEU! FIM DO JOGO.\n");
            int i,j;
            for(i=0; i<num; i++)
                for(j=0; j<num; j++)
                    if(matriz[i][j]=='*')
                        campo[i][j] = '*';
            imprime_mat(campo,num);
            gameover = 1;
    }else if(num_jogadas==((num*num)-bombas)){ //caso o número de jogadas termine sem que tenha escolhido uma coordenada com bombas, usuário venceu o jogo
            campo[l-1][c-1] = n_bombas(l-1,c-1,matriz,num)+'0'; //verifica se só sobraram as bombas serem escolhidas, ou seja, se não for escolhida nenhuma o usuário venceu o jogo
            printf("\nPARABENS! VOCE VENCEU!\n");
            for(int i=0; i<num; i++)
                for(int j=0; j<num; j++)
                    if(matriz[i][j] =='*')
                        campo[i][j] = '*';
            imprime_mat(campo,num);
            gameover = 1;
        }
        else{
            campo[l-1][c-1] = n_bombas(l-1,c-1,matriz,num)+'0';
        }
    }
}

