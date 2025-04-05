#include<stdio.h>
int main(){
    int a,b;
    printf("enter two numbers: ");
    scanf("%d %d" ,&a,&b);
    printf("value of a=%d and b=%d before swapping",&a,&b);
    a=a^b;
    b=a^b;
    a=a^b;
    printf("value of a=%d and b=%d after swapping",&a,&b);
    return 0;
}
