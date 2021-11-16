#include <stdio.h>

int main () {
int i=3,j=5;
int *p, *q;
double v1 = 0, v2 = 0, v3 = 0, v4 = 0;
p = &i; //p acessou o endereço de i
q = &j; //q acessou o endereço de j
v1 = p == &i;
v2 = *p - *q; // -2
v3 = **&p;
v4 = 3 - *p/(*q) + 7;
printf("%f \n", v1); //retorna verdadeiro, já que 'p' está apontando, de fato, para a variável 'i'
printf("%f \n", v2); //retorna '-2', já que está realizando a operação de subtração dentre o conteúdo de 'i' e 'j' por meio dos ponteiros 'p' e 'q'
printf("%f \n", v3); //retorna '3', já que está acessando o conteúdo do endereço que 'p' está relacionado, no caso o inteiro 'i'
printf("%f \n", v4); //retorna 10, já que na divisão entre os conteúdos que 'p' e 'q' estão relacionados resultará em 0.6 e isso para inteiro é igual 0
}
