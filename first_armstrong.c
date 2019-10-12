#include <stdio.h>
int main(int argc, char const *argv[])
{
	printf("Roll no 190231077\n");
	int num,arm,i;
	for(i=1;i<100;++i){
		num = i/10;
		arm = i%10;
		if(i==((num*num*num)+(arm*arm*arm)))
			printf("%d ",i );
	}
	printf("\n");
	return 0;
}