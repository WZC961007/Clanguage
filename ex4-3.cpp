#include<iostream>
using namespace std;
int main(){
  int num,temp;
 cout<<"ÇëÊäÈë³õÊ¼Êı£º";
  cin>>num;
  if (num==1) {
    cout<<"End"<<endl;
  }else{
   while (num!=1) {
    if (num%2!=0) {
     temp = num;
     num = num * 3 + 1;
      cout<<temp<<"*"<<"3+1"<<"="<<num<<endl;
     }
    if (num==1) {
    break;
   }
    temp=num;
    num/=2;
    cout<<temp<<"/2"<<"="<<num<<endl;
   }
       cout<<"End"<<endl;
   }
  return 0;
  }