#include <iostream>
#include <fstream>

using namespace std;
int main(){
    ofstream fof("outfile.txt");
    fof<<"Hello world!";
    fof.close();
    ifstream fum("outfile.txt");
    string s;
    fum>>s;
    cout<<s<<endl;
    if (fum){
        cout<<"File is open!";
    }
    else{
        cout<<"File is close";
    }
    fum.close();
}