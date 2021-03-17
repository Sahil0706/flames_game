#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>
#include<windows.h>
void delay(int x);
void setcolour(unsigned int color);
int main()
{
	int o;
	system("color 09");
	printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
	char s1[30],s2[30];
	scanf("%s %s",s1,s2);
	printf("_______________________________________________\n");
	printf("The bond between %s and %s is:\n",s1,s2);
	system("color 17");
	int hi,bi;
	char string[9]={'F','L','A','M','E','S'};
	for(hi=9;hi>=0;hi--)
	{
		//delay(hi);
		for(bi=0;bi<=5;bi++)
		{
			printf("%c",string[bi]);
			delay(hi);
		//sleep(hi);
		}
		printf("\r");
		Beep(300,200);
		for(bi=0;bi<=5;bi++)
		{
			printf("\f");
			delay(hi);
		//sleep(hi);
		}
		printf("\r");
		//printf("******\r");
	}
	
	int l1,l2,c[30]={0},s=0;
	l1=strlen(s1);l2=strlen(s2);
	for(int i=0;i<l1;i++)
	{
		for(int j=0;j<l2;j++)
		{
			c[i]=0;
			if(s1[i]==s2[j])
			{
				c[i]=c[i]+1;
				s2[j]='*';
				s1[i]='0';
				j=l2;
			}
		}
		/*if(c[i]==0)
		{
			//printf("%c",s1[i]);
			s=s+1;
		}*/
	}
	for(int j=0;j<l2;j++)
	{
		if(s2[j]!='*')
		{
			//printf("%c",s2[j]);
		}
		else
		{
		s=s+1;
		}
	}
	//printf("\nuncomon char is %d\n",s);
	system("color 07");
	s=s%6;
	if(s==1)
	{
		setcolour(2);
		printf("Friendship");
	}
	if(s==2)
	{
			setcolour(4);
		printf("Love   ");
	}
	if(s==3)
	{
			setcolour(333);
		printf("Affection");
	}
	if(s==4)
	{
			setcolour(28);
		printf("Marriage");
	}
	if(s==5)
	{
		
			setcolour(5);
		printf("Enemy ");
	}
	if(s==0)
	{
			setcolour(6);
		printf("Sibblings");
	}
	setcolour(7);
	printf("\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
	Beep(600,600);
//	system("PAUSE");
	getch();
//	clrscr();
	system("cls");
//	system("start C:\\Users\\Reliance\\Desktop\\pcdesktop\\music\\Musafir.mp3");
	printf("Thanks");
	getch();
	return 0;
}
void delay(int x)
{
	unsigned long int count=3333333,i,j;
	for(i=0;i<x;i++)
	{
		for(j=0;j<count;j++)
		{
			//hehe
		}
	}
}
void setcolour(unsigned int colour)
{
	HANDLE handle=GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(handle,colour);
}
