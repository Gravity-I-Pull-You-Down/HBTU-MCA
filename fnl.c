#include <stdio.h>
int main(int argc, char const *argv[])
{
	printf("Roll no 190231077\n");
	int inp;
	scanf("%d",&inp);
	printf("Last = %d \n",inp%10);
	while(inp>=10){
		inp/=10;
	}
	printf("First = %d\n",inp );
	return 0;
}