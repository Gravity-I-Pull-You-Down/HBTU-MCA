#include<stdio.h>

int main(int argc, char const *argv[])
{
	int inp,arr[10];
	scanf("%d",&inp);
	for(int i=0;i<10;++i){
		arr[i]=0;
	}
	while(inp>0){
		++arr[inp%10];
		inp/=10;
	}

	for(int i=0;i<10;++i){
		if(arr[i]!=0)
			printf("%d apperas %d times \n",i,arr[i]);
	}
	return 0;
}