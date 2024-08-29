#include<iostream.h>
#include<conio.h>
#include<math.h>
void main()
{
double term;
int n;
unsigned long fact(int);
clrscr();
cout<<"Enter the maximum value of den";
cin>>n;
double sum=1;
for(int i=1;i<=n;i++)
{
term=1.0/fact(i);
sum+=term;
}
cout<<"\n\nSum of Series is:"<<sum;
getch();
}
unsigned long fact(int n)
{
unsigned long prod=1;
int i;
for(i=1;i<=n;i++)
prod*=i;
return prod;
}