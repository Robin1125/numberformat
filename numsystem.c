#include<stdio.h>

int main()
{
	long int i=3,t=3;
	int n,c=0;

	scanf("%d",&n);

	while(c!=n )
	{
		if(t==3 || t==4)
		{
			c++;
			i++;
			t=i;
		}
		else if(t%10 == 3 || t%10 == 4)
			t=t/10;
		else
		{
			i++;
			t=i;
		}
	}
	printf("%d",i-1);

return 0;
}
