#include <iostream>
#include <cmath>
#include <algorithm>
#include <cstring>
#include <clocale>
#include <conio.h>
#include <vector>
#include <iterator>
#include <string>
#include <cstdlib>
#include <ctime>

using namespace std;

short foundZ(short x, short y){
    return 3*pow(x, 2)+x*y+2*pow(y, 2)-x-4*y;
}
int mutation(int o){
    o=rand()%5+1;
    return o;
}
float sori(float mini, float x){
    float p;
    if (mini==0){
        mini=1;
    }
    if(x==0){
        x=1;
    }
    if (x>0){
        p=abs(mini/x);
    }
    else{
        p=mini/x;
    }
    return p;
}

int main(){
    int m=0, counter=0, leni=0, dop, leni1, p=1;
    float mini=1000000, maxi=-1111;
    float A[4][21];
    vector <float> X;
    vector <float> Y;
    vector <string> Minim;
    vector <string> Maxim;
    // Вводим нужные гены
    for (float i=-10;i<=10; i++){
        counter+=1;
        A[0][m]=i;
        A[1][m]=i+1;
        m+=1;
    }
    //Нахождене z и минимума
    for (int v=0; v<=5; v++){  
        for(int l=0; l<=20; l++){
            A[2][l]=(foundZ(A[0][l], A[1][l]));
            if (mini>A[2][l]){
                mini=A[2][l];
            }
            if (maxi<A[2][l]){
                maxi=A[2][l];
            }
        }
        //присваивание коэфиценты годности и отбор лучших ген и выбор одного минимального
        for(int l=0; l<=20; l++){
            A[3][l]=(sori(mini, A[2][l]));
            if (A[3][l]>0.2){
                X.push_back(A[0][l]);
                Y.push_back(A[1][l]);
            }
            if (A[3][l]==1){
                Minim.push_back(to_string(int(A[0][l]))+" "+to_string(int(A[1][l]))+" "+to_string(int(A[2][l]))+" ");
            }
            if (A[3][l]>1000){
                Maxim.push_back(to_string(int(A[0][l]))+" "+to_string(int(A[1][l]))+" "+to_string(int(A[2][l]))+" ");
            }
        }
        leni=X.size()+1;
        dop=0;
        leni1=leni+mutation(p);
        while (dop!=leni1){
            A[0][dop]=X[dop];
            A[1][dop]=Y[leni-dop];
            dop+=1;
        }
    }
    cout<<"Extremum is ";
    cout<<Minim[0]<<endl;
}