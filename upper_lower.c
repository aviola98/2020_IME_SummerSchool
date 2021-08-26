#include <stdio.h>

int main () {
    
    char letra;
    int tipo;
    scanf (" %c", &letra);


    while (letra!='0') {

    if (letra>='a' && letra <= 'z')
    tipo = 1;
    else if (letra >='A' && letra <= 'Z')
    tipo = 2;
    else 
    tipo = -1;
    
} 
    printf ("%d", tipo);
    
    return 0;
}



