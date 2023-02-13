//38
#include <iostream>
#include <fstream>

using namespace std;

int main(){
    string st, slov;
    int ini=0, unu=0;

    ofstream fi("haha.txt");
    cout<<"Write a string"<<endl;
    cin>>slov;
    fi<<slov;
    fi.close();

    ifstream fof("haha.txt");
    getline(fof, st);
    fof.close();

    for(int i=0; i<=st.length()-1; i++){
        if (char(st[i])==char('(')){
            st[i]=' ';
            ini+=1;
        }
        if (char(st[i])==char(')') and ini>0){
            st[i]=' ';
            ini-=1;
        }
    }
    for(int i=0; i<=st.length()-1; i++){
        if (char(st[i])==char(')')){
            unu+=1;
        }
    }
    if(ini!=0 or unu!=0){
        cout<<"Error";
    }
    else{
        cout<<"It's okay!";
    }
}