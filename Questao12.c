#include <stdio.h>

// Esse algoritmo tem como ideia realizar o cálculo do Calibre de Margem de Estabilidade de um foguete acadêmico
// A estabilidade é importante para se ter um voo seguro e mais controlado
// E tal cálculo é feito a partir de uma relação da posição do Centro de Pressão, Centro de Gravidade e Diâmetro máximo do tubo do foguete
void estabilidade (float a, float b, float c) {
    float v = (a-b)/c;
    if (v>=1.5) {
        printf("Calibre de Estabilidade: %f \n", v);
        printf("Estavel \n");
    } else if (v>=1 && v<1.5) {
        printf("Calibre de Estabilidade: %f \n", v);
        printf("Pouco Estavel \n");
    } else if (v<1) {
        printf("Calibre de Estabilidade: %f \n", v);
        printf("Nao Estavel \n");
    }
}

int main (void) {
    float CP, CG, D;
    void (*Calculo_Estabilidade) (float, float, float) = &estabilidade;
    printf("Quais a posicao do Centro de Pressao? ");
    scanf("%f", &CP); 
    printf("Quais a posicao do Centro de Gravidade? ");
    scanf("%f", &CG); 
    printf("Quais a posicao do Diametro maximo do corpo do foguete? ");
    scanf("%f", &D);
    (*Calculo_Estabilidade) (CP, CG, D);
    return 0;
}
