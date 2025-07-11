#include<iostream>
using namespace std;
int main(){
    int n,i;
    cout<<"enter n: "<<endl;
    cin>>n;
    for(i=2;i<n;i=i+1){
       if(n%i==0){
           cout<<"not prime"<<endl;
           return 0;
       }
    }
       cout<<"prime"<<endl;
return 0;
}
