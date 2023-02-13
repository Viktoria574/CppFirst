#include <iostream>

using namespace std;
int main(){
    int a, b;
    cout<<"Write two numbers"<<endl;
    cin>>a>>b;
    while(a!=b and (a!=0 and b!=0)){
        if (a>b){
            a-=b;
        }
        else{
            b-=a;
        }
    }
    if(a==0 or b==0){
        cout<<"Not nod";
    }
    else{
        cout<<"NOD:"<<(a);
    }
}