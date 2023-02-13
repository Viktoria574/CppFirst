#include <iostream>
#include <math.h>

using namespace std;
int main(){
    float a, b, c, x, D;
    cout<<"Whrite a, b, c"<<endl;
    cin>>a>>b>>c;
    if (a==0){
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
    }
    else{
        D=b*b-4*a*c;
        if (D<0){
            cout<<"No answers";
        }
        else if(D==0){
            cout<<"x="<<-b/(2*a);
        }
        else{
            x=(-b+sqrt(D))/(2*a);
            cout<<"x1="<<-b/(2*a);
            x=(-b-sqrt(D))/(2*a);
            cout<<"x2="<<-b/(2*a);
        }
    }
}