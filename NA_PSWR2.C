#include<stdio.h>
#include<string.h>
void main()
{
char st[80],ch,st1[80];
int i=0,c=3,j,a,b;
printf("CREATE PASSWORD \n");
while((ch=getch())!=13)
{
st[i]=ch;
printf("*");
i++;
}
st[i]='\0';
print:
printf("\nENTER PASSWORD TO ENTER IN THE PROGRAM \n");
j=0;
while((ch=getch())!=13)
{
st1[j]=ch;
printf("*");
j++;
}
st1[j]='\0';
if(strcmp(st,st1)==0)
{
printf("\nPASSWORD IS CORRECT \nNOW ENTER TWO NUMBERS FOR SUBTRACTION\n");
scanf("%d%d",&a,&b);
printf("SUBTRACTION = %d",a-b);
}
else
{
c--;
if(c==0)
{
printf("\nALL YOUR CHANCES ARE OVER, GO AND SLEEP \n");
exit(0);
}
else
{
printf("\nYOU HAVE ONLY %d CHANCE LEFT FOR GIVING CORRECT PASSWORD \n",c);
goto print;
}
}
}

