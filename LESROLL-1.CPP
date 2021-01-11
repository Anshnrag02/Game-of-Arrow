#include<iostream.h>
#include<conio.h>
#include<dos.h>
#include<iomanip.h>
#include<stdlib.h>
#include<stdio.h>

void loading(void);
void game(int, int ,int &);
void intro(void);

struct wrong
{
	int r;
	int c;
	int no;
};
char name[40];
int score;

void main()
{
int overflag = 1;

while(overflag==1)
{
	loading();
	cout<<"**************************************************************"<<endl;
	cout<<"WELCOME TO THE 'GAME OF ARROWS' !!"<<endl;
	cout<<"PLEASE ENTER YOUR NAME : "<<endl;
	gets(name);
	clrscr();
	cout<<endl;
		cout<<"DO YOU WANT TO GO THROUGH THE TUTORIAL TO THIS GAME?\n";
		cout<<"'y' or 'Y' for YES and 'n' or 'N'for no.\n";
		char t;
		cin>>t;
		if(t=='y'||t=='Y')
			intro();
	cout<<"\nPRESS ENTER TO CONTINUE\n";
	getch();
	clrscr();
	int flag=1;
	int u1=5,d1=4;
	score =2;
	while(score>=0&&score<10)
	{
		loading();
		game(u1,d1,flag);
		if(flag==1)
	       {	u1++;
			d1++;
			score++
			;score++;
	       }
		else
			score--;

	}
	if(score<0)
		{
			cout<<"GAME OVER, YOU LOSE"<<endl;
			cout<<"STATUS:-"<<endl;
			cout<<"NAME -"<<name<<endl;
			cout<<"FINAL SCORE = "<<score;
		}
	else
		{
			cout<<"YOU WIN"<<endl;
			cout<<"STATUS:-"<<endl;
			cout<<"NAME -"<<name<<endl;
			cout<<"FINAL SCORE = "<<score;
		}

		cout<<"\nPRESS ENTER TO CONINUE\n";
	getch();
	char o;
	cout<<endl<<"DO YOU WANT TO PLAY AGAIN?"<<endl;
	cout<<"ENTER y FOR YES AND n FOR NO"<<endl;
	cin>>o;
	overflag =(o=='y'||o=='Y')?1:0;
}
getch();
clrscr();
}

  void loading(void)
{
	for(int i=1;i<=8;i++)
	{
		clrscr();
		cout<<"\nLoading"<<endl;
		cout<<"-/";
		delay(150);
		clrscr();
		cout<<"\nLoading"<<endl;
		cout<<"\\-";
		delay(150);
		clrscr();
		cout<<endl;
		 }
}
  void game(int u, int d, int &flag)
{

		randomize();

		wrong a1, a2;

		a1.r=random(u)+1;
		a1.c=random(4);
		a1.no=random(9)+1;

		a2.r=random(d)+1;
		a2.c=random(4);
		a2.no=random(9)+1;

		a2.no=(a1.no==a2.no)?(random(9)+1):a2.no;
	for(int time=20;time>=0;time--)
	{
		cout<<"\nSCORE = "<<score<<endl;
		for(int i=1;i<=u;i++)
		{
			for(int m=0;m<=4;m++)
			{
				if(a1.r==i&&a1.c==m)
					cout<<setw(i+m)<<a1.no;
				else
					cout<<setw(i+m)<<i;
			}
				cout<<endl;

		}
		for(int j=d;j>=1;j--)
		{
			for(int n=0;n<=4;n++)
			{
				if(a2.r==j&&a2.c==n)
					cout<<setw(j+n)<<a2.no;
				else
					cout<<setw(j+n)<<j;
					}
				cout<<endl;
		}
		cout<<"TIME REMAINING : "<<time<<" SECONDS\n";
		delay(1000);
		clrscr();
	}
		clrscr();
		cout<<"PLEASE ENTER THE ANSWER. "<<endl;

		int ans;

		cin>>ans;
			if(ans==a1.no+a2.no)
			       {flag=1;cout<<"CORRECT\n";}
			else
				{flag=0;cout<<"WRONG\n";}
				cout<<"\nPRESS ENTER TO CONINUE\n";
	getch();
	clrscr();
}

void intro(void)
{
	clrscr();
	cout<<"\nHello "<<name<<","<<endl;
	cout<<"In this Game, You will be provided";
	cout<<" with a patterm of numbers.\n";
	cout<<"\nPRESS ENTER TO CONINUE\n";
	getch();
	clrscr();
	cout<<"\nLike this-\n";
	{	for(int i=1;i<=9;i++)
	{
		for(int m=0;m<=4;m++)
			{
				cout<<setw(i+m)<<i;
			}
			cout<<endl;

	}
	for(int j=8;j>=1;j--)
	{
		for(int n=0;n<=4;n++)
			cout<<setw(j+n)<<j;
			cout<<endl;
	}}
	cout<<"\nPRESS ENTER TO CONINUE\n";
	getch();
	cout<<"But there will be two numbers which will\n";
	cout<<"not follow that pattern.\n";
	cout<<"\nPRESS ENTER TO CONINUE\n";
	getch();
	clrscr();
	cout<<"For Example, look at this one-\n";

		for(int i=1;i<=9;i++)
	{
		for(int m=0;m<=4;m++)
			{
				if(i==4&&m==2)
					cout<<setw(i+m)<<7;
				else
					cout<<setw(i+m)<<i;
			}
			cout<<endl;

	}
	for(int j=8;j>=1;j--)
	{
		for(int n=0;n<=4;n++)
			{
			if(j==6&&n==3)
				cout<<setw(j+n)<<3;
			else
				cout<<setw(j+n)<<j;
			}
			cout<<endl;
	}
	cout<<"\nPRESS ENTER TO CONINUE\n";
	getch();
	cout<<"For instance, look in the 4th row from top\n";
	cout<<"you will find an odd 7 there\n";

	cout<<"Also, look at the 6th row from the bottom \n";
	cout<<"You will find an odd 3 there";
	cout<<"\nPRESS ENTER TO CONINUE\n";
	getch();
	clrscr();
	cout<<"\n That is what you have to do .\n";
	cout<<"Just spot the wrong numbers\n";
	cout<<"And take their sum, that will be your answer.";
	cout<<"\nPRESS ENTER TO CONINUE\n";
	getch();
	clrscr();

	cout<<"\nA Correct Answer gives you a score of +2\n";
	cout<<"And An Incorrect Answer Grants you -1\n";
	cout<<"\nPRESS ENTER TO CONINUE\n";
	getch();
	clrscr();

	cout<<"\nScore 10 to win the game\n";
	cout<<"And if your score reaches less than Zero , your game is over\n";
	cout<<"\nPRESS ENTER TO CONINUE\n";
	getch();
	clrscr();

	cout<<"\nAnd one Last Thing,\n";
	cout<<"You will get only 20 secnds to look at the Pattern\n";
	cout<<"Now ,Go";

}











