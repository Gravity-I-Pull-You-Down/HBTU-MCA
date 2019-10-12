#include <stdio.h>
int main(int argc, char const *argv[])
{
	printf("Roll no 190231077\n");
	int prime,i,j,controll=0;
	printf("1 2 ");
	for(i=3;i<=1000;++i){
		for(j=2;j<=i/2;++j){
			if(i%j==0)
				{
					controll=1;
					break;
				}
		}
		if(controll == 0)
			printf("%d ",i);
		controll = 0;
	}
	printf("\n");
	return 0;
}