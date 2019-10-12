#include <stdio.h>
int main(int argc, char const *argv[])
{
	printf("Roll no 190231077\n");
	int i,inp,temp=0,cpy;

	printf("Enter a number :\n");
	scanf("%d",&inp);
	cpy=inp;
	for(int i=0;i<3;++i){
		int cat = inp%10;
		temp=temp+(cat*cat*cat);
		inp/=10;
	}
	if (temp==cpy)
	{
		printf("The given number is Armstrong\n");
	}
	else
		printf("The given number is not Armstrong\n");
	
	return 0;
}