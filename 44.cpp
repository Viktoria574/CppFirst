#include <iostream>

using namespace std;
int main(){
    int i=0;
    while(i<16){
        if (i<9){
            if (i%2==0){
                cout<<string(8, '*')<<string(50, '_')<<endl;
            }
            else{
                cout<<string(8, '*')<<string(50, '&')<<endl;
            }
        }
        else{
            if (i%2==0){
                cout<<string(58, '_')<<endl;
            }
            else{
                cout<<string(58, '&')<<endl;
            }
        }
        i+=1;
    }
}