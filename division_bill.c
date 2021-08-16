#include <stdio.h>

int main (){ 
    
    int carlos_valor, andre_valor;
    float felipe_valor, total_valor;
    float carlos_valorf, andre_valorf;
    
    scanf("%f", &total_valor);
    
    carlos_valor = total_valor/3;
    andre_valor = carlos_valor;
    felipe_valor = total_valor - (carlos_valor + andre_valor);
    
    carlos_valorf = (float)carlos_valor;
    andre_valorf = (float)andre_valor;
    
    printf("Andre: %.2f, Carlos: %.2f e Felipe: %.2f", andre_valorf, carlos_valorf, felipe_valor);
    
    return 0;
    
} 
