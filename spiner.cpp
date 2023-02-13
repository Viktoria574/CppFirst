#include <iostream>

using namespace std;

int spin(int a, int b, int c, int i){
    if (a+b*i<c){
        return spin(a, b, c, i+1);
    }
    else{
        return i-1;
    }
}

int main(){
    int a, b, c, t, counter=1;
    cout<<"Enter A B C"<<endl;
    cin>>a>>b>>c;
    cout<<"Answer "<<spin(a, b, c, 1);
}