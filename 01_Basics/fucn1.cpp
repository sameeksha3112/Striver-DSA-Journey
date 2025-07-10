#include<iostream>
using namespace std;
void printname(string name){
    cout<<"hi "<<name<<endl;
}
int main(){
    string name;
    cout<<"enter name: ";
    cin>>name;
    printname(name);
    
    string name2;
    cout<<"enter name: ";
    cin>>name2;
    printname(name2);
    
return 0;
}
