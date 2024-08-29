#include<iostream.h>
#include<conio.h>
void shape(int n,char c );
void main()
{
	clrscr();
	int num;
	char ch;
	cout<<"enter a number";
	cin>>num;
	cout<<"enter a character";
	cin>>ch;
	shape(num,ch);
	getch();
}
void shape(int n,char c)
{
	int i,j;
	for(i=1;i<=n;i++)
	{
		cout<<endl;
		for(j=1;j<=n;j++)
	cout<<c;
}
}