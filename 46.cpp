#include <iostream>
#include <vector>

using namespace std;

int transl(char s);
int main(){
    int i;
    string number;
    vector<int> nom;
    cout<<"Write down any roman number"<<endl;
    // cin>>number;
    number="XIC";
    // for (i=0; i<number.length(); i++){
    //     nom.push_back(transl(number[i]));
    //     // cout<<transl(number[i])<<endl;
    // }

    for (char letter : number){
        nom.push_back(transl(letter));
    }

    // if (nom[0]>=nom[1]{
        // sumi
    // }

}

int transl(char s){
    if (s==('I')){
        return 1;
    }
    if (s==(char)'V'){
        return 5;
    }
    if (s==(char)'X'){
        return 10;
    }
    if (s==(char)'L'){
        return 50;
    }
    if (s==(char)'C'){
        return 100;
    }
    if (s==(char)'D'){
        return 500;
    }
    if (s==(char)'M'){
        return 1000;
    }
}