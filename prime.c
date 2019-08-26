#include<stdio.h>
int main(int argc, char const *argv[])
{
	int inp,cpy,temp=0,sema=0;
	printf("Enter a number: ");
	scanf("%d",&inp);
	cpy=inp;
	for(int i=2;i<cpy/2;++i){
		if(cpy%2==0){
			printf("The given number is not prime\n");
			sema=1;			
			break;
		}
	}
	if (sema==0)
	{
			printf("The given number is prime\n");
	}
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