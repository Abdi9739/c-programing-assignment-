#include <stdio.h>
#include <math.h>
int main()
{
	int quantity,discount;
	float  rate,total;
	printf("enter rate and quantity/n");
	scanf("%d %f",&quantity,&rate);
	if(quantity<999)
	{
	 discount= (quantity*rate*10/100);
}     
  else    
{
discount=0 ;
}
total=(quantity *rate)- discount;
		printf(" total amount paid is %f/n");
	return 0;
}