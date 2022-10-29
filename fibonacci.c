/*C PROGRAM TO FIND THE FIBONACCI SEQUENCE*/
#include<stdio.h>
int fibonacci(int n);
int main()
{   
    int n,i=0,c;
    printf("Enter the number you want to find the fibonacci series\n");
    scanf("%d",&n);
    printf("FIBONACCI SERIES\n");
    for(c=1;c<=n;c++)
    {   

        printf("%d\n",fibonacci(i));
        i++;
    }
    return(0);
}
int fibonacci(int n)
{   
    if(n==0)
    return(0);
    else if(n==1)
    return(1);
    else
    return(fibonacci(n-1)+fibonacci(n-2));
}