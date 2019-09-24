#include <stdio.h>
int main(int argc, char const *argv[])
{
	int inp,sum=0;
	scanf("%d",&inp);
	for(int i=1;i<=inp;i+=2){
		sum+=+i;
	}
	printf("%d\n",sum );
	return 0;
}