#include<iostream>
using namespace std;
int main(){
    int n,i,fact=1;
    cout<<"enter n: "<<endl;
    cin>>n;
    for(i=1;i<=n;i=i+1){
       fact=fact*i;
    }
    cout<<"the factorial is: "<<fact;
return 0;
}
