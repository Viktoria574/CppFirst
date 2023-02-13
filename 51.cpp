#include <iostream>

using namespace std;
int main(){
    int a, b;
    cout<<"Write two numbers"<<endl;
    cin>>a>>b;
    while(a!=0 and b!=0){
        if (a>b){
        a=a%b;
        }
        else{
            b=b%a;
        }
    }
    if(a==0 or b==0){
        cout<<"Not nod";
    }
    else{
        cout<<"NOD:"<<(a+b);
    }
}