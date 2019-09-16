#include <stdio.h>
int main(int argc, char const *argv[])
{
	int n,sum=0,i;
	for(i=0;i<11;++i){
		printf("%d\n",i );
		sum = sum+i;
	}
	printf("Sum is :%d\n",sum );
	return 0;
}