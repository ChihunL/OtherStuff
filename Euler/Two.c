#include <stdio.h>

int main(void)
{
	long index, fibNum, evenTotal;
	index=0;
	fibNum=1;
	long temp;
	evenTotal=0;
	while(fibNum<4000000)
	{
		temp = fibNum;
		fibNum+=index;
		index = temp;
		if(fibNum%2==0)
		{
			evenTotal+=fibNum;
		}
	}
	printf("%ld \n", evenTotal);
	
}

