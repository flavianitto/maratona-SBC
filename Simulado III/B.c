#include<stdio.h>
#include<string.h>

int main()
{
	int n, i, j, tam, valido, a;
	char linha[128], pilha[128];
	
	scanf("%d", &n);
	char vetor[n];
	
	for(i=0; i<n; i++)
	{
		scanf("%s", linha);
		tam = strlen(linha);
		a=0;
		valido=1;
	
		for(j=0; j<tam&&valido; j++)
		{
			if(linha[j]=='(' || linha[j]=='[')
			{
				pilha[a] = linha[j];
				a++;
			}	
			else
			{
				switch(linha[j])
				{
					case ')':
					{
						if(a>0 && pilha[a-1]=='(')
						{
							a--;	
						} 
						else 
						{
							valido = 0;
						}
					}break;					
										
					case ']':
					{
						if(a>0 && pilha[a-1]=='[')	
						{
							a--;
						}
						else 
						{
							valido = 0;
						}
					}break;					
				}					
			}			
		}
		
		if(valido && a==0)	
		{
			vetor[i] = 1;
		}
		else	
		{
			vetor[i] = 0;	
		}
	}
	
	for(i=0; i<n; i++)
	{
		if(vetor[i]==1)	
		{
			puts("Yes");
		}
		else 
		{
			puts("No");
		}
	}
	
	return 0;
}
