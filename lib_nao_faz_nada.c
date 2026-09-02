#include <stdio.h>
#include <stdlib.h>

char* pega_flag(){
  FILE* file = fopen("flag.txt", "r");
  if (file == NULL){
    printf("Erro ao abrir o arquivo!\n");
    return NULL;
  }

  char* buffer = "DEU CERTO";
  return buffer;
}