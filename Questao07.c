p = mat + 1; // Válida, pois o ponteiro 'p' irá apontar para o proximo indice do vetor
p = mat++; // Inválida, pois esse tipo de incremento não funciona em vetores
p = ++mat; // Inválida, pois esse tipo de incremento não funciona em vetores 
x = (*mat)++; // Válida, pois dessa forma está acessando o conteúdo do vetor
