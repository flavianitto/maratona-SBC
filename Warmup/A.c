#include<stdio.h>
#include<stdlib.h>

int main()
{
	int c, a, q, r, ans;
	
	scanf("%d", &c);
	scanf("%d", &a);
	
	q = a/(c-1);
	r = a%(c-1);
	
	ans = q;
	if(r>0)
	{
		ans++;
	}
	
	printf("%d\n", ans);
	
	return 0;
}
