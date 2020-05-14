#include<stdio.h>
int prime(int n,int m)
{
    if(m==1)
    {
        return 1;
    }
    else
    {
        if(n%m==0)
        {
            return 0;
        }
        else
        {
            return prime(n,m-1);
        }
    }
}
int main()
{
    int num;
    printf("Enter a number:  ");
    scanf("%d",&num);
    if(prime(num,num/2)==1)
    {
        printf("Its a prime number");
    }
    else
    {
        printf("Its not a prime number");
    }
}
