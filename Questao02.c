#include <stdio.h>

int main () {
int i=5, *p;
p = &i;
printf("%x %d %d %d %d \n", p,*p+2,**&p,3 **p,**&p+4);
// na questão em específico retorna: 4004 7 15 5 9
// na execução no QT retorna: 0061FE1C 7 15 5 9
}
