# uploadEliasAlex
Upload de arquivos de programas em C

CAMPO MINADO
Neste trabalho prático, seu objetivo é construir um jogo de campo minado em uma matriz
NxN, dada uma quantidade inteira 0,2*(N*N) de bombas, que deverão ser posicionadas
aleatoriamente na matriz utilizando a função rand() de acordo com uma semente aleatória
usando srand(time(NULL)); da biblioteca <time.h>.

Entradas
1. Entrada inicial: tamanho da matriz quadrada 3 <= N <= 20, sendo N um inteiro. 2.
Entradas sucessivas durante o jogo: dois números inteiros formando um par ordenado
com as coordenadas (linha,coluna) que se deseja pisar no campo minado. Deve-se
verificar que as coordenadas introduzidas pelo usuário estejam dentro do intervalo da
matriz, por exemplo 1 <= l <= N para as linhas e 1 <= c <= N para as colunas.

A entrada se encerra quando o jogo termina, ou seja, quando o jogador completa a matriz
ou quando seleciona um espaço ocupado por uma bomba.

Saída
1. Antes de cada jogada, o programa deve imprimir a matriz do jogo utilizando o
caractere "?" para representar casas ainda não selecionadas e imprimindo o número
de bombas ao redor da casa, nas que já tiverem sido selecionadas.
2. Antes e depois de cada casa, deverá haver um espaçamento.
3. Na lateral esquerda e abaixo da matriz deverá ser impresso um índice com o número
da linha e da coluna, respectivamente. Na lateral, este índice será separado da
matriz com o caractere "|", com espaçamento antes e depois. Abaixo, o índice será
separado da matriz com o caractere"-".
4. No início e ao final da impressão da matriz deve haver uma linha em branco.

Após cada jogada, a matriz deve ser atualizada e impressa novamente.

Caso o jogador insira uma entrada fora do intervalo da matriz, deverá ser impressa a
mensagem “Entrada invalida.” e solicitada nova entrada.

Caso o jogador selecione uma casa que contém uma bomba, deverá imprimir a seguinte
mensagem: "VOCE PERDEU! FIM DO JOGO."
A seguir deve imprimir a matriz do jogo exibindo também a localização de todas as bombas
com o caractere "*".

Caso o jogador selecione todas as casas que não apresentam bombas, deverá exibir a
seguinte mensagem: "PARABENS! VOCE VENCEU!"
Imprime a seguir a matriz do jogo exibindo a localização das bombas com o caractere "*".

Observação
Para esta atividade, deverão ser implementadas duas funções:
- imprime Matriz: deverá receber por parâmetro a matriz a ser impressa e a quantidade
n de linhas e realizar sua impressão conforme as especificações. Usar o protótipo
void imprime_mat(char M[][N], int n)
- número De Bombas: deverá receber as coordenadas correspondentes à linha e coluna
e retornar o número de bombas presentes nas coordenadas vizinhas (i.e., ao redor
da casa selecionada). Também deve receber por parâmetro uma matriz contendo a
solução do jogo e o tamanho da matriz. Usando o protótipo: int n_bombas(int l, int c,
charM[][N], int n)
- Tomar cuidado com a geração e distribuição das bombas no campo minado. O
gerador aleatório não pode repetir coordenadas para a posição das bombas.
