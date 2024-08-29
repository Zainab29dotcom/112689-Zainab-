#include<iostream.h>
#include<conio.h>
void value(int i );
void main()
{
	clrscr();
	int n;
	cout<<"enter a number";
	cin>>n;
	value(n);
	getch();
}
void value (int i)
{
	int p,s;
	p=i-1;
	s=i+1;
	cout<<"precessor is"<<p<<endl;
	cout<<" successor is"<<s;
}