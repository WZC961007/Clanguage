#include <iostream.h>
void main()
{
int a,b,c;
b=1,c=0;
cout<<"please input a";
cin>>a;
while(b>0)
{
	b=a/10;
	a=b;
	c++;
}
switch(c)
{case 1:cout<<"A\n";break;
case 2:cout<<"B\n";break;
case 3:cout<<"C\n";break;
default:cout<<"D\n";break;
}}
