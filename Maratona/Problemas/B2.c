//BATALHA NAVAL
#include<stdio.h>
#include<stdlib.h>

int main()
{
	int n, i, j;
	int matriz[10][10];
	for(i=0; i<10; i++)
	{
		for(j=0; j<10; j++)
		{
			matriz[i][j] = 0;
		}
	}
	
	scanf("%d", &n);
	int d, l, r, c, cont=0;
	for(i=0; i<n; i++)
	{
		scanf("%d %d %d %d", &d, &l, &r, &c);
		switch(d)
		{
			case 0:
			{	
				if(c+l-1>10)
				{
					cont=1;
				}
				else
				{
					do
					{
						if(matriz[r][c]==0)
						{
							matriz[r][c] = 1;
							c++;						
						}
						else
						{
							cont+=1;
						}
					}while(matriz[r][c+l-1]==0);					
				}		
			}break;
			
			case 1:
			{
				if(r+l-1>10)
				{
					cont=1;
				}
				else
				{
					do
					{
						if(matriz[r][c]==0)
						{
							matriz[r][c] = 1;
							r++;						
						}
						else
						{
							cont+=1;
						}
					}while(matriz[r+l-1][c]==0);					
				}	
			}break;
		}		
	}
	
	if(cont==0)
	{
		puts("Y");
	}
	else 
	{
		puts("N");
	}
	
	return 0;
}
