#include <stdio.h>
int main(int argc, char const *argv[])
{
	printf("Roll no 190231077\n");
	int i;
	printf("Even \t ODD \n");
	for(i=2;i<=100;++i){
		if(i%2==0){
			printf("%d\t",i );
		}
		else
			printf("%d\n",i );
	}
	return 0;
}