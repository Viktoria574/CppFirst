#include <iostream>
#include <fstream>
#include <stdlib.h>
#include <string>

using namespace std;
int main(){
    int i, sum, num;
    string line;
    const string fileName="numbers.txt";
    ofstream fif(fileName);
    for (i=0; i<=9; i++){
        cout<<"Enter "<<i+1<<" number"<<endl;
        cin>>num;
        fif<<num<<endl;
    }
    fif.close();

    sum=0;    
    ifstream fof(fileName);
    while (getline(fof, line)){
      cout<<line<<endl;  
      sum+=stoi(line);
    };

    cout<<"Amount:"<<sum<<endl;
    
    fof.close();
}