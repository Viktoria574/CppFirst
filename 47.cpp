#include <iostream>

using namespace std;

int newi(int j)
{
    if (j==0){
        return 1;
    }
    else{
        return (37*newi(j-1)+3)%64;
    }
}

int main(){
    for (int j=0; j<10; j++){
        cout<<newi(j)<<" ";
    }
}