
#include<iostream>
using namespace std;
int fact(int n){
    int f=1;
   for(int i=1;i<=n;i=i+1){
       f=f*i;
   }
       return f;
   }
   bool prime(int n){
       if(n<2){
           return 0;
       }
       for(int i=2;i<n;i++){
           if(n%i==0){
               return 0;
           }
       }
       return 1;
   }
   int sum(int a,int b){
       int ans=a+b;
       return ans;
   }
   
int main(){
    int m,n;
    cout<<"enter m: ";
    cin>>m;
    cout<<"enter n: ";
    cin>>n;
    cout<<fact(m)<<endl;
    cout<<fact(n)<<endl;
    cout<<fact(m-n)<<endl;
    cout<<prime(m)<<endl;
    cout<<prime(n)<<endl;
    cout<<prime(m-n)<<endl;
    cout<<sum(m,n)<<endl;
return 0;
}
