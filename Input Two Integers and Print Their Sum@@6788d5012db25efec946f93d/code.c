#include<stdio.h>
int main(){
    float a,b;
    printf("enter two numbers: ");
    scanf("%.2f %.2f" ,&a,&b);
    printf("sum: %.2f\n" ,a+b);
    return 0;
}