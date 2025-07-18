#include<iostream>
using namespace std;

void swap(int &a,int &b){
    int c=a;
    a=b;
    b=c;
}
    int main() {
  int m,n;
  cout<<"enter m: ";
  cin>>m;
  cout<<"enter n: ";
  cin>>n;
  swap(m,n);
  cout<<m<<" "<<n<<" ";
return 0;
}
