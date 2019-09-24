#include <stdio.h>
int main(int argc, char const *argv[])
{
	int inp,i,j,rev=0;
	scanf("%d",&inp);
	i=inp%10;
	while(inp>0){
		rev=rev*10 + inp%10;
		inp/=10;
	}
	j=rev%10;
	rev/=10;
	rev=rev*10+i;
	inp=0;
	while(rev>0){
		inp=inp*10 + rev%10;
		rev/=10;
	}
	inp/=10;
	inp=inp*10+j;
	printf("%d\n",inp );
	return 0;
}