#include<stdio.h>
void main()
{
	int t, l, b, n, s;
	scanf("%d", &t);
	while(t>0)
	{
		int a;
		scanf("%d%d", &l, &b);
		if(b<l)
			a=b;
		else
			a=l;
			for(int i=1; i<=a; i++)
			{
				if(l%i==0 && b%i==0)
					s = i;
			}
		printf("%d\n", s);
		t--;
	}
}