#include <stdio.h>
int main(int argc, char const *argv[])
{
	printf("Roll no 190231077\n");
	long int inp,dec=0,pacman=1;
	scanf("%ld",&inp);
	while(inp>0){
		dec =dec+pacman*(inp%10);
		inp/=10;
		pacman*=2;
	}
	printf("%d\n",dec );
	return 0;
}