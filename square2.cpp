#include <stdio.h>
 

int main ()
{
    int i, j, m;
    
  

    scanf("%d", &m);
      i = 0;
    while(i < m)
    {
    	j = 0;  i++;
    	while(j < m)
		{
           	printf("*");
           	j++;
        }
      
        printf("\n");
    }
    return 0;
}
 

