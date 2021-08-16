#include <stdio.h>
    
   int main () {
       
    int x, y ,z;
    printf(" Digitar numero: ");
    scanf("%d", &x);
    printf("Digitar numero: ");
    scanf("%d", &y);
    printf("Digitar numero: ");
    scanf("%d",&z);
       
    if (x > y)                                           
    if (y> z) 
    printf("%d %d %d", x, y ,z);       
    else                                             
    if (x> z) 
    printf("%d %d %d", x, z, y);   
    else 
    printf("%d %d %d", z, x, y);         
    else                                                 
    if (y > z)                                       
    if (x > z) 
    printf("%d %d %d", y, x, z);   
    else 
    printf("%d %d %d", y, z, x);         
    else 
    printf("%d %d %d", z, y ,x); 
    
    return 0;
}