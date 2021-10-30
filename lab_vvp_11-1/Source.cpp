#include <stdio.h>
int main()
{
	int A, B, temp;
	printf("A = ");
	scanf("%i", &A);
	printf("B = ");
	scanf("%i", &B);
	if (A != B)
	{
		if (A > B)
		{
			B = A;
			printf("A = %i; B = %i", A, B);
		}
		else if (B > A)
		{
			A = B;
			printf("A = %i; B = %i", A, B);
		}
	}
	else if (A == B)
	{
		A = 0;
		B = 0;
		printf("A = %i; B = %i", A, B);
	}

}