#include <stdio.h>


int main()
{
	unsigned long long int andis=0,tedad,loop,loop2,loop3,rank,counterrank=0,savenum,num,counteraval=0,digit=0,j;
	scanf("%llu\n ",&tedad);
	
	for(loop=0;loop<tedad;loop++)
		{
			andis=0;
			counterrank=0;
			scanf("%llu",&rank);
			for(num=2;counterrank!=rank;num++)
				{		
					
					if(num==2)
						{
						andis++;
						continue;
						}
					else if(num%2==0)
						continue;
					else{
						counteraval=0;
						for(loop2=3;loop2<=num/2;loop2++)
							{
								if(num%loop2==0)
									counteraval++;
							}}
						if(counteraval==0)
							{
								andis++;
								
								if(andis==2)
									counterrank++;
									
								else if(andis%2==0&&andis!=2)
									continue;
								else{
									counteraval=0;
									for(loop3=3;loop3<=andis/2;loop3++)
										{
											if(andis%loop3==0)
												counteraval++;
										}
										if(counteraval==0)
										{
											counterrank++;
											
										}}
									}
									
								if(counterrank==rank)
											{
												printf("%llu\n",num);
											}
										
										
					}	
				}
		}

