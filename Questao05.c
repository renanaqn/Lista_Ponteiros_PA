int main(void){
  float vet[5] = {1.1,2.2,3.3,4.4,5.5};
  float *f;
  int i;
  f = vet;
  printf("\n contador/valor/valor/endereco/endereco \n");
  for(i = 0 ; i <= 4 ; i++){
  printf("\ni = %d ",i); // Irá mostrar o indice atual do 'for'
  printf("vet[%d] = %.1f",i, vet[i]); // Irá mostrar o conteudo do indice atual com 1 casa decimal de precisão após a virgula
  printf("*(f + %d) = %.1f",i, *(f+i)); // Irá mostrar a relação do ponteiro "andando" pelo endereço, apontando o conteudo do indice atual a partir do indice inicial
  printf(" &vet[%d] = %X",i, &vet[i]); // Irá mostrar o endereço do indice atual
  printf("(f + %d) = %X",i, f+i); // Irá mostrar a relação do ponteiro "andando" pelo endereço, apontando o endereço do indice atual a partir do indice inicial
  }
}
