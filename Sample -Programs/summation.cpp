#include <stdio.h>

int main()
{
    int n,s=0,c=1;
    printf("enter a number = ");
    scanf("%d",&n);
    while(c<=n)
    {
    	s=s+c;
    	c++;
	}
	printf("The sum of %d is : %d",n,s);
}

