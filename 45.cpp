#include <iostream>
#include <cmath>

using namespace std;
int main(){
    for (float y = 2; y > -2; y-=1/11.0)
{
    for (float x = -7; x < 7; x+=1/11.0)
    {
        if (abs(y - sin(x)) > 1 / 19.0){
            cout<<" ";
        }
        else{
            cout<<"*";
        }
}
cout<<"\n";
}
}