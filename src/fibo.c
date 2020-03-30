#include<stdio.h>

int printFibo(int n){
	int a = 0;
	int b = 1;
	{
		int i;
		for(i=1; i<=n; i++)
		{
			int temp = b; 
			printf("%d ",b);
			b = a + b;
			a = temp;
		}
	}
	return;
}

int main(){
<<<<<<< HEAD
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
=======
	int var;
	scanf("%d", &var);
	printFibo(var);
	return 0;
>>>>>>> 68b37f0628b63ea0ce201e281b187dc1d316e962
}
