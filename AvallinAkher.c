#include <stdio.h>
#include <string.h>

int main()
{
	char str1[60],str2[60];
	scanf("%s\n",&str1);
	scanf("%s",&str2);
	
	int len;
	len=strlen(str2);
	
	if(str1[0]==str2[len-1])
		printf("YES");
	else
		printf("NO");	
}
