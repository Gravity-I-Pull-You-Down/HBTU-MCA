#include<stdio.h>
#include<string.h>
void main()
{
int i,j,k,a,b,c,l,p;
char st[80],ch,ch1,st1[80],st2[80],st3[80];
print:
printf("CREATE PASSWORD \n");
i=0;
j=0;
c=3;
while((ch=getch())!=13)
{
st[i]=ch;
printf("*");
i++;
}
st[i]='\0';
printf("\nCONFIRM PASSWORD \n");
while((ch=getch())!=13)
{
st1[j]=ch;
printf("*");
j++;
}
st1[j]='\0';
if(strcmp(st,st1)==0)
{
printf("\nCONGRATULATIONS NEW PASSWORD HAS BEEN CREATED \n");

}
else
{
printf("\nPASSWORD DIDN'T MATCH \nPLEASE TRY AGAIN... \n");

goto print;
}
print2:
k=0;
printf("\nENTER PASSWORD TO ENTER IN PROGRAM \n");
while((ch=getch())!=13)
{
st2[k]=ch;
printf("*");
k++;
}
st2[k]='\0';
if(strcmp(st,st2)==0)
{
printf("\nENTER TWO NUMBERS FOR MULTIPLICATION \n");
scanf("%d%d",&a,&b);
printf("\nMULTIPLICATION = %d",a*b);
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
goto print2;
}
}

p=3;
printf("\nDO YOU WANT TO CHANGE THE PASSWORD & CONTINUE AGAIN\nOR YOU WANT TO CONTINUE AGAIN WITH THE OLD PASSWORD\nPRESS N FOR NEW PASSWORD\nPRESS O FOR OLD PASSWORD\nPRESS E FOR EXIT  \n");
ch1=getche();
print3:
l=0;
if(ch1=='N'||ch1=='n')
{
printf("\nENTER THE OLD PASSWORD FOR CONFIRMATION \n");
while((ch=getch())!=13)
{
st3[l]=ch;
printf("*");
l++;
}
st[l]='\0';
if(strcmp(st,st3)==0)
goto print;
else
{
p--;
if(p==0)
{
printf("\nALL YOUR CHANCES ARE OVER, GO AND SLEEP \n");

exit(0);
}
else
{
printf("\nYOU HAVE ONLY %d CHANCE LEFT FOR GIVING CORRECT OLD PASSWORD \n",p);
goto print3;
}
}
}
if(ch1=='o'||ch1=='O')
goto print2;
if(ch1=='e'||ch1=='E')
exit(0);

}
