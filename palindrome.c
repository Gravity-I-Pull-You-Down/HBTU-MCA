#include <stdio.h>
#include<string.h>
int main(int argc, char const *argv[])
{
	char string[50];
	int i =0,j;
	printf("Enter the string\n");
	scanf("%s",&string);
	i=strlen(string)-1;
	for(j=0;i>j;--i,++j){
		if (string[i]!=string[j])
		{printf("String not palindrome\n");
			return 0;
		}
	}
	printf("String is palindrome\n");
	return 0;
}