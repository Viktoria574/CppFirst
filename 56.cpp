//32
#include <iostream>

using namespace std;
int main(){
    string st, newst;
    cout<<"Enter a number please"<<endl;
    cin>>st;
    for(int i=0; i<=st.length(); i++){
        if (char(st[i])!='5' and char(st[i])!='0'){
            newst+=st[i];
        }
    }
    cout<<newst;
}