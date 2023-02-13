#include <iostream>

using namespace std;
int main(){
    int n, counter3, counter4;
    cout<<"Enter a number please"<<endl;
    cin>>n;
    if (n%3==0){
        counter3=n/3;
        counter4=0;
    }
    else if (n%4==0){
        counter3=0;
        counter4=n/4;
    }
    else if(n%3==1){
        counter3=n/3-1;
        counter4=1;
    }
    else{
        counter3=0;
        counter4=0;
    }
    if (n<3){
        cout<<0<<" "<<0;
    }
    else{
        cout<<counter3<<" "<<counter4;
    }
}