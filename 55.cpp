//11
#include <iostream>
#include <math.h>

using namespace std;

int fact(int n){
    if(n==1){
        return 1;
    }
    else{
        return n*fact(n-1);
    }
}

int main(){
    int n, m=2, p=1;
    double sumi;
    cout<<"Enter a number"<<endl;
    cin>>n;
    sumi=fact(n);
    for(int i=1; i<=n-1; i++){
        sumi+=(fact(n-i)/(pow((((1+m)*m)/2+m*p),0.5)));
        p+=m;
        m+=1;
    }
    cout<<"Answer:"<<sumi;
}