#include <stdio.h>
int main(int argc, char const *argv[])
{
	int i,j,k;
	scanf("%d",&k);
	for(i=0;i<k;++i){
		for(j=k-1;j>i;--j)
			printf(" ");
		for(j=0;j<=i;++j)
			printf("*");
		for(j=0;j<i;++j){
			printf("*");
		}
		printf("\n");
	}
	return 0;
}