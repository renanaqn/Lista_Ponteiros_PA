#include <stdio.h>

int main () {
float aloha[10], coisas[10][5], *pf, value = 2.2;
int i=3;
int x;
//aloha[2] = value; //OK, irá ser atribuido o valor de 'value' ao terceiro indice do vetor
//scanf("%f", &aloha); //OK, porém ele salva no primeiro indice
//aloha = value; // Inválido, pois não está especificando em qual indice será salvo no vetor
//printf("%f", aloha); //Inválido, pois não está especificando qual indice será mostrado
//coisas[4][4] = aloha[3]; // OK, pois está atribuindo o valor de do indice 3 do vetor 'aloha' ao indice '4' '4' matriz 'coisas'
//coisas[5] = aloha; // Inválido, pois não está especificando qual valor do indice será salvo na matriz
//pf = value; // Inválido, pois não está sendo usada a sintaxe correta, que seria: *pf = value
//pf = aloha; // Inválido, pois além de não estar usando a sintaxe correta, não está especificando qual indice será atribuido
}
