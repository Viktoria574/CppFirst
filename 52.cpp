#include<iostream>
#include <math.h>

using namespace std;

int magic(int n);

int main(){
    int a, i;
    cout<<"Write a number please"<<endl;
    cin>>a;
    if (a==1){
        cout<<":(((((";
    }
    else{
       for (i=2; i<a+1; i++){
        if (magic(i)==1){
            cout<<i<<" ";
        }
    } 
    }
}

int magic(int n){
    int j;
    for (j=2; j<pow(n, 0.5)+1; j++){
        if(n%j==0){
            return 0;
        }
    }
    return 1;
}