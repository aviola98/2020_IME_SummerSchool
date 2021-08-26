#include <stdio.h>

int main() {
    int n = 1;
    int x = 1;
    int flag = 0;
    int i = 0;
    
    do {
        if (n>=x){
            x=n;
            scanf("%d", &n);
            i++;
        } else {
            i++;
            flag ++;
            scanf ("%d", &n);
        }   
        } while (n !=0);
        
        if (flag != 0){
            printf ("nao %d", i-1);
        } else {
            printf ("sim %d", i-1);
        }  return 0;
}