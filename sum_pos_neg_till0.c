#include <stdio.h>

int main() {
    
    int entry= 0;
    int sumpositive = 0;
    int sumnegative = 0;

   printf("Digite a lista: ");
   while(1) {
     scanf("%d", &entry);

     if (entry == 0)
       break;
     else if (entry > 0)
       sumpositive += entry;
     else
       sumnegative += entry;
   }

   printf("Soma numeros positivos: %dSoma numeros negativos: %d", somapositivo, somanegativo);
   
    return 0;
}
