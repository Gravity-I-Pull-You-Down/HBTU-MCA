#include <stdio.h>
int main(int argc, char const *argv[])
{
	printf("Roll no 190231077\n");
	int inp,sum=0;
	scanf("%d",&inp);
	for(int i=1;i<=inp;i+=2){
		sum+=+i;
	}
	printf("%d\n",sum );
	return 0;
}