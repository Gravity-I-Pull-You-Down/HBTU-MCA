#include <stdio.h>
int main(int argc, char const *argv[])
{
	int i,j,k,sp,l;
	scanf("%d",&k);
	sp=k-1;
	for(i=0;i<k;++i){
		for(l=0;l<sp;l++)
			printf(" ");
		sp--;
		for(j=0;j<=i;j++)
			printf("* ");
		printf("\n");
	}
	return 0;
}