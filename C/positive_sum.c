#include <stddef.h>

int positive_sum(const int *valores, size_t contador) {
  
  int armazenador = 0;
  
  for(int i = 0; i < contador; i++)
    
    if(valores[i] > 0) armazenador += valores[i];
  
  return armazenador;
}
