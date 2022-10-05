#include <iostream>
#include <fstream>

using namespace std;
int main(){
    string str, s;
    int per=1, j, first=1;
    ofstream fof("File.txt");
    // fof<<"due238ddh22y";
    cin>>str;
    fof<<str;
    fof.close();
    ifstream fum("File.txt");
    fum>>s;
    for (j=0; j<s.length(); j++){
        if ((int)s[j]<=58 and (int)s[j]>=48){
            if (per==1){
                if(first==1){
                    cout<<s[j];
                    first=0;
                    per=0;
                }
                else{
                   cout<<" "<<s[j];
                per=0; 
                }
            }
            else{
                cout<<s[j];
            }
        }
        else{
            per=1;
        }
    }
    fum.close();
}