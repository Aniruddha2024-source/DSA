#include<stdio.h>

int fibo(int n)
{
    if(n==0)
     return 0;
    
    if(n==1)
     return 1;

    int ans = fibo(n-1) + fibo(n-2);
    
    return ans;
}

int main()
{
    int num;
    printf("Enter the mum:");
    scanf("%d", &num);

    printf("Fibonacci series is : ");
    for(int i=0;i<num;i++) {
        printf("%d\n", fibo(i));
    }
    

    
    
}