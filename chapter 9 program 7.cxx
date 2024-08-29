#include<iostream.h>
#include<conio.h>
void cal(int a,int b,char c );
void main()
{
	clrscr();
	int x,y;
	char ch;
cout<<"enter 1st number a operater and 2nd number";
	cin>>x>>ch>>y;
	cal(x,y,ch);
	getch();
}
void cal(int a,int b,char c)
{
	switch (c)
	{
	case'+':
	cout<<a<<"+"<<b<<"="<<a+b;
	break;
		case'-':
	cout<<a<<"-"<<b<<"="<<a-b;
	break;
		case'/':
	cout<<a<<"/"<<b<<"="<<a/b;
	break;
	case'*':
	cout<<a<<"*"<<b<<"="<<a*b;
	break;	
	case'%':
	cout<<a<<"%"<<b<<"="<<a%b;
	break;
	defualt:
	cout<<"invalid operator";
	
}
}