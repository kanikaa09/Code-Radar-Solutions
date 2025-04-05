#include<stdio.h>
int main(){
    int a,b;
    printf("Two integers: ");
    scanf("%d %d" ,&a,&b);
    a=a^b;
    b=a^b;
    a=a^b;
    printf(a,b);
    return 0;
}
