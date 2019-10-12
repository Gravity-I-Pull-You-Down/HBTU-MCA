#include <stdio.h>
int main(int argc, char const *argv[])
{
	int i,j,k;
	scanf("%d",&k);
	for (int i = k; i >0; --i)
	{
		for (int j = 0; j < i; ++j)
		{
			printf("%d",i );
		}
		printf("\n");
	}
	return 0;
}