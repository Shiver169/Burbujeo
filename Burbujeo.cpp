#include<conio.h>
#include<stdio.h>
int main ()
{
	int v[5];
	int i,j;
	int aux=0;
	
	for (i=0;i<=4;i++)
	{
		printf ("Ingrese el valor %d : ",i+1);
		scanf ("%d",&v[i]);
    }
    printf("La lista desordenada es: \n");
    
    for (i=0;i<=4;i++)
    {
    	printf("%d, ",v[i]);
	}
    
	for (i=0;i<=4;i++)
    {   
        for (j=0;j<=4;j++)
        {
        	if (v[j]>v[j+1])  
    		{   
    			aux=v[j];
    			v[j]=v[j+1];
    			v[j+1]=aux;
			}
		}
	}
	printf("\nLa lista ordenada es: \n");
	for (i=0;i<=4;i++)
	{
		printf("%d, ",v[i]);
	}
	getche();
}
