#include <stdio.h>

int main() {

   int counter = 1;
   int x;
   int y = 0;
   int sum = 0;
   
   scanf ("%d", &x);
  
    do {
        
        x = x - counter;
        counter ++;
        y = y+counter;
        
    } while (counter <= x); 
      sum=y;
      if (sum>x){
        
        sum = y-counter+1;
        printf("Somatorio: %d", sum);
    } else {
        
    printf("Somatorio: %d", y);
          
    }   return 0;
}