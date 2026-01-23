// equality of two numbers

#include<stdio.h>

int main(){
    int a,b;
    printf("enter two numbers: ");
    scanf("%d %d", &a, &b);
    

    if(a == b)
    printf("number is equal");
    else
    printf("this is not equal");

    return 0;
}