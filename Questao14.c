#include <stdio.h>   // biblioteca para se ter acesso ao 'printf'
#include <stdlib.h>  // biblioteca para se ter acesso ao 'qsort'

    // função necessária para o funcionamento da função 'qsort'
int comparador(const void *a, const void *b){
    // os ponteiros passados como parâmetros da função são convertidos para ponteiros para inteiros e têm seu valor acessado, 
    // fazendo com que uma subtração seja feita entre os valores e a função comparador possa retornar um número igual, maior ou menor
    // que zero
    return (*(int*)a - *(int*)b);
}

int main(){
    int n,i; //'n' irá guardar o número de elementos enquanto que 'i' será o indice do 'for'
    float *vetor; //ponteiro que irá apontar para o endereço do vetor a ser ordenado
    printf("Quantos elementos terao? "); //sera pedido a quantidade de elementos que o vetor a ser ordenado terá
    scanf("%d", &n); //irá guardar a quantidade de elementos dentro da variável 'n'
    // aloca na memória um bloco de n elementos em ponto flutuante e guarda o endereço do primeiro byte 
    // alocado dentro da variável vetor
    vetor = (float*) malloc(n*sizeof(float));
    printf("Quais sao os elementos? \n"); // sera pedido quais elementos irão compor o vetor a ser ordenado
    for(i=0;i<n;i++){ //usando a ferramenta de repetição 'for' será armazenado esses elementos no vetor
        scanf("%f", &vetor[i]);
    }
    // função que ordena de forma crescente os elementos. Para isso, ela usa como parâmentros:
    // o vetor a ser ordenado, o número e o tamanho dos elementos que este contém e a função comparador
    qsort(vetor,n,sizeof(float),comparador);
    printf("Vetor ordenado de forma crescente: \n"); //irá mostrar o vetor ordenado 
    for(i=0;i<n;i++){ //mais uma vez a ferramenta de repetição sendo usada para, agora, mostrar os valores ordenados do vetor
        printf("%.1f \n", vetor[i]); 
    }
    //liberação da mémória que foi alocada pela função 'malloc'
    free(vetor);
    return 0;
}
