#include <stdio.h>

int main() {
int pulo[3];
int *p;
pulo[0] = 3;
pulo[1] = 5;
pulo[2] = 7;
p = (pulo + 2); // é a unica que retorna o valor do terceiro elemento do vetor
printf("%d \n", *p);
return 0;
}
