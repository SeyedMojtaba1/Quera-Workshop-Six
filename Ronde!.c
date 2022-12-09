#include <stdio.h>
#include <string.h>


int main()
{
	int loop=1,tedad,i;
	scanf("%d\n",&tedad);
	
	char num[9],nummir[9];
	while(loop<=tedad)
		{
			loop++;
			int num0=0,num1=0,num2=0,num3=0,num4=0,num5=0,num6=0,num7=0,num8=0,num9=0;
			scanf("%s",&num);
			for(i=0;i<8;i++)
				{
					switch(num[i])
						{
							case '1': num1++; break;	
							case '2': num2++; break;
							case '3': num3++; break;
							case '4': num4++; break;
							case '5': num5++; break;
							case '6': num6++; break;
							case '7': num7++; break;
							case '8': num8++; break;
							case '9': num9++; break;
							case '0': num0++; break;
						}	
				}
			if(num1>3||num0>3||num2>3||num3>3||num4>3||num5>3||num6>3||num7>3||num8>3||num9>3)
				{
					printf("Ronde!\n");
					continue;
				}
			
			char s0[]="000";
			char s1[]="111";
			char s2[]="222";
			char s3[]="333";
			char s4[]="444";
			char s5[]="555";
			char s6[]="666";
			char s7[]="777";
			char s8[]="888";
			char s9[]="999";
			char* str;
			
			if(str=strstr(num,s0))
				{
					printf("Ronde!\n");
					continue;
				}
			if(str=strstr(num,s1))
				{
					printf("Ronde!\n");
					continue;
				}
			if(str=strstr(num,s2))
				{
					printf("Ronde!\n");
					continue;
				}	
			if(str=strstr(num,s3))
				{
					printf("Ronde!\n");
					continue;
				}	
			if(str=strstr(num,s4))
				{
					printf("Ronde!\n");
					continue;
				}	
			if(str=strstr(num,s5))
				{
					printf("Ronde!\n");
					continue;
				}	
			if(str=strstr(num,s6))
				{
					printf("Ronde!\n");
					continue;
				}	
			if(str=strstr(num,s7))
				{
					printf("Ronde!\n");
					continue;
				}	
			if(str=strstr(num,s8))
				{
					printf("Ronde!\n");
					continue;
				}	
			if(str=strstr(num,s9))
				{
					printf("Ronde!\n");
					continue;
				}	
			int j,counter=0;	
			for(j=7,i=0;i<8,j>=0;j--,i++)
				{
					nummir[j]=num[i];
				}
			for(i=0;i<8;i++)
				{
					if(nummir[i]==num[i])
					counter++;
				}
			if(counter==8)
				{
					printf("Ronde!\n");
					continue;
				}
			else 
				{
					printf("Rond Nist\n");	
					continue;
				}
		}
}
