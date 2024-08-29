#include<iostream.h>
#include<conio.h>
void table(int i );
void main()
{
	clrscr();
	int n;
	cout<<"enter a number";
	cin>>n;
	table(n);
	getch();
}
void table (int i)
{
	int c;
	for(c=1;c<=10;c++)
	cout<<i<<"*"<<c<<"="<<i*c<<endl;
}