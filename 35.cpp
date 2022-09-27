#include <iostream>
#include <fstream>
#include <clocale>

using namespace std;
int main(){
    setlocale(LC_ALL, "Russian");
    
    bool flag;
    int i, j;
    string letr, strok;
    char fron, a;
    const string fileIn="workin.txt";
    const string fileOut="workout.txt";

    cout<<"Write 30 latters please"<<endl;
    cin>>letr;

    ifstream fof(fileIn);
    fof>>strok;
    cout<<strok<<endl;
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
                // cout<<int(strok[j+1])<<endl;
                // cout<<strok;
            }
        }
        
    }
    cout<<strok<<endl;
    
    ofstream fif(fileOut);
    fif<<strok;
    fif.close();
}