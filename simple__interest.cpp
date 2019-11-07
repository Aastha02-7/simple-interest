#include<stdio.h>
#include<conio.h>
int main()
{
	int p,r,s,t;
	printf("Enter Principal: ");
	scanf("%d",&p);
	printf("Enter Rate: ");
	scanf("%d",&r);
	printf("Enter Time: ");
	scanf("%d",&t);
	s=(p*r*t)/100;
	printf("Simple interst is %d",s);
	return 0;
}
