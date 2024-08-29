#include<iostream.h>
#include<conio.h>
int mul(int a ,int b  );
void main()
{

	int i,x,y,r  ;
	for( i=1;i<=5;i++)
	{
	cout<<"enter two numbers";
	cin>>x>>y;
	r=mul(x,y);
	if(r==1)
	cout<<y<<"is mulyiple of"<<x<<endl;
	else
	cout<<y<<"is not mulyiple"<<x<<endl;
	}
	getch();
}
int mul(int a,int b)
{
	if(b%a==0)
	return 1;
	else
return 0;

}