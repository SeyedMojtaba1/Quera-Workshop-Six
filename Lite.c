#include <stdio.h>

void counter_word(char str[])
	{
		int i=0,Red=0,Yello=0,Green=0;
		for(i=0;i<10;i++)
	    {
	    	switch(str[i])
	    		{
	    			case 'G': Green++;	break;
	    			case 'Y': Yello++;	break;
	    			case 'R': Red++;	break;
	    			default : continue;
				}
	    	
		}
		if(Red>=3)
			printf("nakhor lite");
		else if(Red>=2 && Yello>=2)
			printf("nakhor lite");
		else if(Red==5 || Yello==5)
			printf("nakhor lite");
		else if(Green==0)
			printf("nakhor lite");
		else
			printf("rahat baash");		
	}
	
int main()
{
	char str[10];
	scanf("%s",&str);
	
	counter_word(str);
}	
