//15
#include <iostream>
#include <fstream>

using namespace std;

string revers(int numb, int a){
    string newi;
    while(numb>0){
        newi=to_string(numb%a)+newi;
        numb=numb/a;
    }
    return newi;
}

int main(){
    string st, slov, b;
    int n, m, a;

    cout<<"How many numbers will be?"<<endl;
    cin>>n;

    ofstream fi("han.txt");
    cout<<"Write "<<n<<" numbers"<<endl;
    while(n>0){
        cin>>m;
        slov+=to_string(m)+'.';
        n-=1;
    }
    fi<<slov;
    fi.close();

    cout<<"Enter system"<<endl;
    cin>>a;

    ifstream fof("han.txt");
    getline(fof, st);

    cout<<"Answer:"<<endl;
    for(int i=0; i<=st.length()-1; i++){
        if(char(st[i])!='.'){
            b=b+st[i];
        }
        else{
            cout<<revers(stoi(b), a)<<" ";
            cout<<stoi(b)<<endl;
            b=' ';
        }
    }
    fof.close();
}