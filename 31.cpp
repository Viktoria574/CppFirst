#include <iostream>

using namespace std;

#include <cmath>
int main()
{
    float m, S, n, p, r;
    cout<<"Write S, n, p"<<endl;
    cin>>S>>p>>n;
    r=p/100;
    if (r!=0 and n!=0){
        cout<<(S*r*pow(1+r, n))/(12*(pow(1+r, n)-1));
    }
    if (r==0){
        cout<<S/(n*12);
    }
    if (n==0){
        cout<<"Ошибка";
    }

    return 0;
}
