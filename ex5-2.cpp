#include<iostream>
using namespace std;
int s(int n)
{
if(n==1)
return 1;
return s(n-1)+n;
}
int sum(int n)
{
if(n==1)
return 1;
return sum(n-1)+s(n);
}
int main()
{
int n = 0;
cin>>n;
cout<<sum(n);
return 0;
}