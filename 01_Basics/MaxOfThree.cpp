#include<iostream>
using namespace std;
int main(){
    int a,b,c;
  cout<<"enter a: ";
  cin>>a;
  cout<<"enter b: ";
  cin>>b;
  cout<<"enter c: ";
  cin>>c;
  if (a>=b && a>=c){
      cout<<"greatest is "<<a;
  }
  else if(b>=c && b>=a){
  cout<<"greatest is "<<b;
  }
  else if (c>=a && c>=b){
      cout<<"greatest is "<<c;
  }
return 0;
}
