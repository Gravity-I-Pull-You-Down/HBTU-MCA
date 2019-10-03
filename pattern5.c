#include <stdio.h>
int main(int argc, char const *argv[])
{
	int i,j,k;
	scanf("%d",&k);
	for (int i = 1; i <=k ; ++i)
	{
		for (int j = k; j >=i; --j)
		{
			printf("%d",j );
		}
		printf("\n");
	}
	return 0;
}