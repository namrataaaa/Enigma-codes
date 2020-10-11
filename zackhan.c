#include<iostream>
using namespace std;
int main()
{
	int t, l, b, n ;
	float s;
	
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
				if(l%i==0 && b%i==0 && l!=b)
					s = i;
				s++;
			}
		printf("%d\n", s);
		t--;
	} return 0;
}
