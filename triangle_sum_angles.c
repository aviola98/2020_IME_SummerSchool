#include <stdio.h>

int main() {

    int a,b,c;

    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);

    if(a + b == 180){
        printf("Yes %d %d %d",a,b,c);
    }else{
        printf("No %d", a+b+c);
    }
    return 0;
}