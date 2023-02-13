#include <iostream>
#include <cmath>
using namespace std;

int fact(int n){
    if (n==1){
        return 1;
    }
    else{
        return n*fact(n-1);
    }   
}

int ans(int n, int m){
    int j, pr=0;
    for (j=2; j<=n; j++){
        pr+=pow(-1, j)*(m/fact(j));
    }
    return pr;
}

int main(){
    int n, m;
    cout<<"Enter number of balls"<<endl;
    cin>>n;
    m=fact(n);
    cout<<"Answer "<<m-ans(n, m);
}

