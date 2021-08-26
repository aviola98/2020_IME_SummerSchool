#include<stdio.h>

int main() {
    
  int i;
  int n;
  float x;
  float resultado=1;

scanf("%d", &n);
scanf("%f", &x);

for(i=0; i<n; i++)
{
resultado*=x; 
}

printf("%f", resultado);

return 0;
}