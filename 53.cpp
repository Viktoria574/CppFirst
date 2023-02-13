#include <iostream>
#include <fstream>

using namespace std;

int main(){
    string st, slov;

    ifstream fof("home.txt");
    getline(fof, st);
    fof.close();
    cout<<"Begining: "<<st<<endl;

    for(int i=0; i<=st.length()-1; i++){
        if (char(st[i])==' '){
            st[i]='.';
        }
    }
    cout<<"Answer: "<<st;
}