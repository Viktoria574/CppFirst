#include <iostream>

using namespace std;

#include <cmath>
int main()
{
    double m, S, n, p, r, k;
    cout<<"Write S, n, m"<<endl;
    cin>>S>>n>>m;
    for (p=0.01; p<=100; p+=0.01) {
        r=p/100;
        if (r!=0 and n!=0){
            k=(S*r*pow(1+r, n))/(12*(pow(1+r, n)-1));
            if (int(m)==int(k)){
                p=100;
            }
        }
        if (r==0){
            k=S/(n*12);
            if (k==m){
                p=100;
            }
        }
        if (n==0){
        cout<<"Error";
            
        }
    }
    cout<<k;

    return 0;
}
