#include <stdio.h>

int Convert2Negative(int num)
{
		num=255-num;
	
		return num;
}

int PrintImage(int num)
{
	
					
					num=Convert2Negative(num);
					return num;
		
}

int main()
{
	int i,d,j,x,ai[256*256],ai2[256*256];
	scanf("%d",&d);
	if(d==0)
		return 0;
	for(i=0;i<d*d;i++)
		{
					scanf("%d",&ai[i]);
			
		}
		
	for(i=0;i<d*d;i++)
		{	
					ai2[i]=PrintImage(ai[i]);			
		}
	j=0,x=1;
	for(i=0;i<d*d;i++)
		{
			if(i==x*d)
				{
					printf("\n");
					x++;
					j++;
					if(j==d)
						break;
				
				}
			printf("%d ",ai2[i]);
		}	
		
}
