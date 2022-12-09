#include <stdio.h>

long long int aval_boodan(long long int arr[],long long int digit)
{
	long long int i,j,counter;
	for(i=0;i<digit;i++)
		{
			if(arr[i]==0)
				return 1;
			if(arr[i]==1)
				return 1;
			if(arr[i]==2)
				continue;
			if(arr[i]%2==0)
				return 1;
			else
				{
					counter=0;
					for(j=3;j<=arr[i]/2;j++)
								{
									if(arr[i]%j==0)
										counter++;
								}
					if(counter==0)
						continue;			
					else 
						return 1;
				}	
		}
	return 0;	
}

int main()
{
	unsigned long long int num,numz,loop1,loop2,j,i,digit=0,leov,counter,arr[30001],save,answer=0;
	scanf("%llu",&num);
	
	if(num==1||num==2||num==0)
        return 0; 
	if(num>2)
		{
			printf("2");
			for(loop1=3;loop1<=num;loop1++)
				{
					numz=loop1;
					digit=0;
	for(j=0;numz!=0;j++)
		{
			numz/=10;
			digit++;
		}
					
					
					if(loop1%2==0)
						continue;
					else	
						{
							counter=0;
							for(loop2=3;loop2<=loop1/2;loop2++)
								{
									if(loop1%loop2==0)
										counter++;
									else
										continue;
								}
						answer=0;
							if(counter==0)
								{
									save=loop1;	 
									for(i=0;save!=0;i++)
										{
											leov=save%10;
											save/=10;
											arr[i]=leov;
										}	
									answer=aval_boodan(arr,digit);	
										
								}
							else 
								continue;	
							if(answer==0)
										{
											if(num==loop1)
											return 0;
											else
											printf(" %llu",loop1);
										}
									else
										continue;	
								
						}	
				}
}}
