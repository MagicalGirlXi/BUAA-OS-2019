#include<stdio.h>

int fibo(){
    
}

int main(){
    int var;
    scanf("%d", &var);
    long long int a, b;
    a = 1;
    b = 0;
    for (int i = 0;i < var;i++)
    {
        printf("%lld ", a);
        a = a + b;
        b = a - b;
        
    }
    return 0;
}
