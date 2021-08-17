//GAME SHOW
#include<stdio.h>
#include<stdlib.h>
#define x 100

int main()
{
	int c, i, maior=0;
	scanf("%d", &c);
	int v[c], soma[c], aux[c];
	
	for(i=0; i<c; i++)
	{
		scanf("%d", &v[i]);
		aux[i] = 0;
		if(i==0)
		{
			aux[i] += x+v[i];
		}
		else
		{
			aux[i] = aux[i-1]+v[i];
		}
		
		if(aux[i]>maior)
		{
			maior = aux[i];
		}
	}
	printf("%d", maior);
	
}
