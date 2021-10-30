#include"stdio.h"
#include"stdlib.h"


int main()
{
    int P, C;
	int card[C], R[2],cont=0;
	int j=2, i=1;

    scanf("%d", &P);

    scanf("%d", &C);

    for(i=1;i<=C;i++)
	{
        scanf("%d\n", &card[i]);
    }
    
    do
	{
	    for(i=1;i<=C;i++)
		{
	        for (j=2;j<=C;j++)
			{
	            if(card[i]+card[j] == P)
				{
	                R[1]=i;
	                R[2]=j;
	                cont++;
	        	}
	    	}
	    }
    }while(cont>0);

    if(cont==1)
	{
        printf("%d %d", R[1], R[2]);
    }
    
    if(cont==0)
	{
        puts("0");
    }
    
    if(cont>1)
	{
        puts("-1");
    }
    
    return 0;
}
