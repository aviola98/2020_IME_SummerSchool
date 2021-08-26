/*sum of first odd given N */

#include <stdio.h>

int main () {
    
    int n;
    int i;
    int y;
    int soma = 0; 
    
    scanf("%d", &n);
    
    y=n*2;
    
    for(i=1; i <= y ; i+=2){
    
    soma+=i;
    }
    printf ("%d", soma);
      
     return 0;
     
    }   