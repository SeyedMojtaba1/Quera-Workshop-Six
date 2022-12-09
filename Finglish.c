#include <stdio.h>

int counter_word(char str[])
{
	int multi=1,i=0,anumb=1,onumb=1,inumb=1,unumb=1,enumb=1;
	for(i=0;i<10;i++)
    {
    	switch(str[i])
    		{
    			case 'a': anumb*=2;	break;
    			case 'e': enumb*=2;	break;
    			case 'o': onumb*=2;	break;
    			case 'u': unumb*=2;	break;
    			case 'i': inumb*=2;  break;
    			default : continue;
			}
    	
	}
	if(anumb>0)
		multi*=anumb;
	if(enumb>0)
		multi*=enumb;
	if(inumb>0)
		multi*=inumb;		
	if(onumb>0)
		multi*=onumb;
	if(unumb>0)
		multi*=unumb;	
	
	return multi;	
}

int main()
{
	int multi;
	
	char str[10];
	scanf("%s",&str);
	
	multi=counter_word(str);
	
	
		printf("%d",multi);
	
}
