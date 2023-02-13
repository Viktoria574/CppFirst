#include <iostream>
#include <sstream>
#include <string>

using namespace std;
int main(){
    int n, m, i=0, numb;
    string s, tus, st;
    cout<<"How many places are free?"<<endl;
    cin>>n;
    cout<<"How many people will be?"<<endl;
    cin>>m;
    s=' ';
    while (m!=0){
        tus=' ';
        if (i!=0){
            while (s[i]!='.'){
                tus+=s[i];
                s[i]=' ';
                i+=1;
            }
            n=stoi(tus);
        }
        if(n%2==0){
            s=s+to_string(n/2)+"."+to_string(n/2-1)+".";
            m-=1;
        }
        else if (n%2==1){
            s=s+to_string(n/2)+"."+to_string(n/2)+".";
            m-=1;
        }
        i+=1;
    }
    numb=s.length();
    cout<<"Answer: "<<s[numb-4]<<" "<<s[numb-2];
}