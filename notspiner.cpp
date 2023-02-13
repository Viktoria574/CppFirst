#include <iostream>

using namespace std;
int main(){
    int a, b, counter=0, c;
    cout<<"Enter sheet size please"<<endl;
    cin>>a>>b;
    for (int k=1; k<=a; k++){
        for(int m=1; m<=b; m++){
            counter+=(b-m+1)*(a-k+1);
        }
    }
    cout<<"Answer "<<counter;
}