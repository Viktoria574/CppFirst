#include <iostream>

using namespace std;
int main(){
    bool t, s, L;
    cout<<"Какое время суток? 1 - светло, 0 - темно"<<endl;
    cin>>t;
    cout<<"Шторы 1 - открыты, 0 - закрыты"<<endl;
    cin>>s;
    cout<<"Лампа 1 - горит, 0 - не горит"<<endl;
    cin>>L;
    if ((t==1 and (s==0 and L==0)) or (t==0 and L==0)){
        cout<<"Светло";
    }
    else if ((t==1 and s==0 and L==0) or (t==0 and L==0)) {
        cout<<"Темно";
    }
}