#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main()
{
	int tedad,i,len,j;
	scanf("%d\n",&tedad);
	
	char NameAnime[1000];
	
	for(i=1;i<=tedad;i++)
		{
			gets(NameAnime);
			len	=strlen(NameAnime);				
			for(j=0;j<len;j++)
				{ 
					NameAnime[j]=tolower(NameAnime[j]);
					NameAnime[0]=toupper(NameAnime[0]);
					if(NameAnime[j-1]==' ')	
						NameAnime[j]=toupper(NameAnime[j]);
					
				}
			puts(NameAnime);	
		}
	

	return 0;	
}
