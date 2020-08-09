#include<conio.h>
#include<stdio.h>
int main ()
{
	int n;
	int v[n],i;
	int val[n],j;
	int aux;

	printf("Cuantos valores vas a ordenar: ");
	scanf("%d",&n);
	
	for (i=0;i<=n-1;i++)
	{
		printf ("Ingrese el valor %d : ",i+1);
		scanf ("%d",&v[i]);
    }
    printf("La lista desordenada es: \n");
    
    for (i=0;i<=n-1;i++)
    {
    	printf("%d, ",v[i]);
	}
    
	for (i=1;i<=n-1;i++)
    {   
        for (j=0;j<n-1;j++)
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
	for (i=0;i<=n-1;i++)
	{
		printf("%d, ",v[i]);
	}
	getche();
}
