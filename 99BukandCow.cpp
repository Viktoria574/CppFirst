#include <iostream>
#include <cstdlib>
#include <ctime> 
#include <string.h>
#include <sstream>

using namespace std;

string magick(string a, string b){
    string ans="";
    for(int i=0; i<=3; i++){
        if (char(a[i])==char(b[i])){
            ans+='+';
        }
        else{
            ans+='-';
        }
    }
    return ans; 
}

int proverka(string ans){
    for (int j=0; j<=3; j++){
        if(char(ans[j])==char('-')){
            return 0;
        }
    }
    return 1;
}

int main(){
    int n, m;
    string st;
    srand(time(NULL));
    n=1000+rand()%1001;
    cout<<"Random number: "<<n<<endl;
    cout<<"Enter your number"<<endl;
    cin>>m;
    st=magick(to_string(n), to_string(m));
    cout<<st<<endl;
    while(proverka(st)!=1){
        cout<<"Enter new number"<<endl;
        cin>>m;
        st=magick(to_string(n), to_string(m));
        cout<<st<<endl;
    }
    cout<<"You win!";
}