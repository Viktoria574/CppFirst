#include <iostream>

using namespace std;
int main(){
    float b, c, x;
    cout<<"Write b and c"<<endl;
    cin>>b>>c;
    if (b==0 and c==0){
        cout<<"x is any number";
    }
    else if (b==0){
        cout<<"No answers";
    }
    else if(c==0){
        cout<<"x="<<0;
    }
    else{
        cout<<"x="<<-c/b;
    }
    return 0;
}