#include<iostream.h>
#include<conio.h>
void swap(int x,int y );
void main()
{
	clrscr();
	int n, m;
	cout<<"enter two numbers";
	cin>>n>>m;
	cout<<"values before swapping"<<n<<"and"<<m<<endl;
	cout<<"swap the values"<<endl;
	swap(n,m);
	cout<<"values after swapping";
	cout<<endl<<"n="<<n;
	cout<<endl<<"m="<<m;
	
	getch();
}
void swap (int x,int y)
{
	int t;
	t=x;
	x=y;
	y=t;

}