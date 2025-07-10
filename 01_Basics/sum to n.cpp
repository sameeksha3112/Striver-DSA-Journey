#include<iostream>
using namespace std;
int main(){
    int a,sum=0;
  cout<<"enter a: ";
  cin>>a;
  for (int i=0;i<=a;i++){
      sum+=i;
      cout << "After adding " << i << ", sum is: " << sum << endl;
  }

return 0;
}
