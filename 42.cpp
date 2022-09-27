#include <iostream>

using namespace std;

int sign(double n);

int main(){
    double noumber;
    cout<<"Write a number please"<<endl;
    cin>>noumber;
    cout<<sign(noumber);
}

int sign(double n){
    if(n>0){
        return 1;
    }
    if(n==0){
        return 0;
    }
    return -1;
}