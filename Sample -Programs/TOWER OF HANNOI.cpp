#include<stdio.h>
void TOH(int,char,char,char);
int main()
{
	int n;
	printf("Enter the number of disks= ");
	scanf("%d",&n);
	printf("\nThe following are the steps involved for implementing TOWER OF HANNOI\n");
	TOH(n,'A','C','B');
}
void TOH(int x,char S,char D,char AUX)
{
	if(x==1)
	{
	printf("Moving disk %d from %c to %c\n",x,S,D);
	return;
}
else
TOH(x-1,S,AUX,D);
printf("Moving disk %d from %c to %c\n",x,S,D);
TOH(x-1,AUX,D,S);
}

