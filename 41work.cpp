#include <iostream>
#include <fstream>
#include <stdlib.h>
#include <string>
using namespace std;
int main(){
    int i, sumi, a;
    string fileName, numString;
    fileName="numbers.txt";
    ofstream fif(fileName);
    for (i=0; i<=9; i++){
        // cout<<"ВВедите"<<i<<"число"<<endl;
        // cin>>a;
        fif<<rand()<<" ";
    }
    fif.close();
    ifstream fuf(fileName);
    getline(fuf, numString);
    cout<<numString;
    fuf.close();
}