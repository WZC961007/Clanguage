#include<iostream.h>
void main()
{
int A,B;
cout<<"请输入两个整数:"<<endl;
cin>>A>>B;
while(1)
{
if(B==0)
{
cin>>B;
}
else
break;
}
if(A%B==0)
{
cout<<A<<'/'<<B<<'='<<A/B<<endl;
}
else
{
cout<<A<<'/'<<B<<'='<<A/B<<"……"<<A%B<<endl;
}
}