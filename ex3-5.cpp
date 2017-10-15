#include<iostream.h>
#include<math.h>
void main()
{
	int a,b,c,m,s;
	cin>>a>>b>>c;
	m=(a+b+c)/2;
	s=sqrt(m*(m-a)*(m-b)*(m-c));
	cout<<s<<endl;
}