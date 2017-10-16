#include  <stdio.h>

int isMultiple(int n);

int main(void)
{
	
	for(int index = 5; index<1000; index +=5)
	{
		if(isMultiple(index)==1)
		{
			printf("%i, ", index);	
		}
	}
	printf("\n");
	
}

int isMultiple(int n)
{
	if(n%3==0)
	{
		return 1;
	}
	return 0;
} 
