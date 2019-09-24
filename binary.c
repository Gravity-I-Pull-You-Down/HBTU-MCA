#include <stdio.h>
int main(int argc, char const *argv[])
{
	long int inp,dec=0,pacman=1;
	scanf("%d",&inp);
	while(inp>0){
		dec += pacman*(inp%10);
		inp/=10;
		pacman*=2;
	}
	printf("%d\n",dec );
	return 0;
}