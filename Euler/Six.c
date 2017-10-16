#include <stdio.h>

int main(void)
{
	for(int index=1; index<=100; index++)
	{
		int sumOfSquares=0;
		int squareOfSums;
		for(int count=1;count<=index; count++)
		{
			sumOfSquares+=count*count;
			squareOfSums+=count;
		}
		squareOfSums=squareOfSums*squareOfSums;
		int difference=squareOfSums-sumOfSquares;
		printf("%i, ", difference);
	}
	int difference=squareOfSums-sumOfSquares;
        printf("%i, ", difference);

}

