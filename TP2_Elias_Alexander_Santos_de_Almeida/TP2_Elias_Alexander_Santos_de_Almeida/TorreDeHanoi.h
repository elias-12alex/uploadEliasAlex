#ifndef TORREDEHANOI_H_INCLUDED
#define TORREDEHANOI_H_INCLUDED
#include <stdio.h>
#include <stdlib.h>

typedef struct disco Disco; //definição do Disco

typedef struct pino Pino; //definição do pino

Pino*  criarPino(); //Retorna um pino vazio

Pino** criarPinos(int n); //cria um vetor de ponteiros do tipo Pino

Disco* criarDisco(int tam); //cria um vetor de ponteiros do tipo Pino

Disco* pop(Pino *pino); //Recebe como parâmetro o endereço do pino e desempilha o disco que está em cima no topo

void push(Pino *pino, Disco *disco);    //adiciona o disco em cima no topo da lista

int moverDisco(Pino **pinos, int pinoOrigem, int pinoDestino); //se tiver ok, faz a movimentação dos discos e retorna 1

int check(Pino **pinos, int numPinos, int numDiscos); //verifica se o jogador venceu o jogo

void imprimir(Pino **pinos, int numPinos, int numDiscos); //exibe o jogo

void excluirPino(Pino *pino); //exclui um vetor de pinos.

void excluirPinos(Pino **pinos, int n); //exclui um vetor de ponteiros do tipo Pino

#endif // TORREDEHANOI_H_INCLUDED

