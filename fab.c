#include <stdio.h>
int main(int argc, char const *argv[])
{
	printf("Roll no 190231077\n");
	int first = 0,second = 1,third=0;
	printf("%d %d ",first,second );
	for(;third<100;){
		third = first +second;
		first = second;
		second = third;
		printf("%d ",third );
	}
	return 0;
}