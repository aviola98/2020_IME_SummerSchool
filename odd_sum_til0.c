#include <stdio.h>

int main() {
    int num = 0;
    int sumodd = 0;
    
    
    do { 
    scanf ("%d", &num);
    
    if(num%2!=0){
    
    sumodd += num;
    }
    }while (num!=0);{
    printf ("Soma impares:  %d", sumodd);
    } return 0;
    } 