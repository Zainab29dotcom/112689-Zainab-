#include<iostream.h>
#include<conio.h>
void cal(int n )
{
	int c=0,i;
	for(i=2;i<n;i++)
	{
		if(n%i==0)
		c=1;
	}
	if(n%2==0 &&c==0)
	cout<<n<<"is prime even";
else if(n%2!=0&& c==0)
	cout<<n<<"is prime odd";
else	if(n%2==0 && c!=0)
	cout<<n<<"is even not prime";
else	if(n%2!=0)
	cout<<n<<"is odd not prime";
	else
	cout<<n<<"is not prime";
}
void main()
{
	int n;
cout<<"enter 1st number ";
	cin>>n;
	cout<<"nature of the number"<<endl;
	cout<<".................................\n";
	cal(n);
	getch();
}
