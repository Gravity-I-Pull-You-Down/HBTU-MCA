#include <stdio.h>
int main(int argc, char const *argv[])
{
	int i;
	for(i=3;i<=100;++i){
		if(i%2==0){
			printf("%d is even \n",i );
		}
		else
			printf("%d is odd \n",i );
	}
	return 0;
}