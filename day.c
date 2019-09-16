#include<stdio.h>
int main(int argc, char const *argv[])
{
	int day;
	printf("Enter a day in number \n");
	scanf("%d",&day);
	switch(day){
		case 1:
		printf("Monday\n");
		break;
		case 2:
		printf("Tuesday\n");
		break;
		case 3:
		printf("wednesday\n");
		break;
		case 4:
		printf("Thursday\n");
		break;
		case 5:
		printf("Friday\n");
		break;
		case 6:
		printf("Saturday\n");
		break;
		case 7:
		printf("Sunday\n");
		break;
		default :
		printf("Error\n");
	}
	return 0;
}