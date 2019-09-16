#include <stdio.h>
int main(int argc, char const *argv[])
{
	int v=5,*pv;
	int *a = &v;
	pv = &v;
	printf("%d \n %u \n %u \n",v,pv,a );
	return 0;
}