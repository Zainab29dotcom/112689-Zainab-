#include<iostream.h>
#include<conio.h>
void factorial(int i );
void main()
{
	clrscr();
	int n;
	cout<<"enter a number";
	cin>>n;
	factorial(n);
	getch();
}
void factorial (int i)
{
	int c,fact=1;
	for(c=1;c<=i;c++)
	fact=fact*c;
	cout<<"factorial of"<<i<<"is"<<fact;
}