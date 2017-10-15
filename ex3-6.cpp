#include<iostream.h>
#include<math.h>
void main()
{
	int r,s,l,k,pi=3;
	cin>>r>>k;
	s=pi*r*r;
	l=2*pi*r;
	switch(k)
	{
	case 1:cout<<s<<endl;break;
	case 2:cout<<l<<endl;break;
	case 3:cout<<s<<","<<l<<endl;break;
	default:cout<<"error"<<endl;
	}
}
