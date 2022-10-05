#include <iostream>
#include <fstream>

using namespace std;
int main(){
    bool flag;
    int i, j;
    string letr, strok;
    char fron, a;
    ofstream fi("work.txt");
    cout<<"Write 30 latters please"<<endl;
    cin>>letr;
    fi<<letr;
    fi.close();

    ifstream fof("work.txt");
    fof>>strok;
    fof.close();

    flag=true;
    while (flag){
        flag=false;
        for(j=0; j<strok.length()-1; j++){
            if ((int)strok[j]>(int)strok[j+1]){
                fron=strok[j];
                strok[j]=strok[j+1];
                strok[j+1]=fron;
                flag=true;
            }
        }
        
    }
    cout<<strok;
}