#include <stdio.h>
int main(){
    printf("\n COMO CHAR: \n");
    char x[4];
    int i;
    for(i=0;i<3;i++){
        printf("%x ",x+i);
    }
    printf("\n COMO INT: \n");
    int y[4];
    int j;
    for(j=0;j<3;j++){
        printf("%x ",y+j);
    }
    printf("\n COMO FLOAT: \n");
    float z[4];
    int k;
    for(k=0;k<3;k++){
        printf("%x ",z+k);
    }
    printf("\n COMO DOUBLE: \n");
    double a[4];
    int l;
    for(l=0;l<3;l++){
        printf("%x ",a+l);
    }
}
