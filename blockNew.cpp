#include <iostream>
#include <vector>

using namespace std;

int main(){
    int a, b,len, pere, j, counter=1, kop=0;
    vector <int> glav={7, 13, 4, 15, 11, 9, 17, 10, 12, 8, 14, 5, 3, 6, 16, 2};
    vector <int> leo={1, 1};
    vector <int> ans;
    len=leo.size();
    a=leo[leo.size()-1];
    b=glav.size();
    while(a<=b){
        if (leo[leo.size()-1]+leo[leo.size()-2]+1<=b){
            leo.push_back(leo[leo.size()-1]+leo[leo.size()-2]+1);
            a=leo[leo.size()-1];
        }
        else{
            a=b+1;
        }
    }
    j=leo.size()-1;
    int i=glav.size()-1;
    while(glav.size()!=0){
        j=leo.size()-1;
        i=glav.size()-1;
        counter=0;
        while(i>=2){
            if (leo[j]-1!=i or leo[j]!=1){
                if (glav[i]<glav[i-1] and glav[i-1]>glav[i-2]){
                    pere=glav[i];
                    glav[i]=glav[i-1];
                    glav[i-1]=pere;
                    counter+=1;
                }
                else if(glav[i-2]>glav[i-1] and glav[i]<glav[i-2]){
                    pere=glav[i];
                    glav[i]=glav[i-2];
                    glav[i-2]=pere;
                    counter+=1;
                }
                i-=2;
            }
            else{
                if (glav[i]<glav[i-1] and glav[i-1]>glav[leo[j-1]-1]){
                    pere=glav[i];
                    glav[i]=glav[i-1];
                    glav[i-1]=pere;
                    counter+=1;
                }
                else if(glav[leo[j-1]]>glav[i-1] and glav[i]<glav[leo[j-1]-1]){
                    pere=glav[i];
                    glav[i]=glav[leo[j-1]-1];
                    glav[leo[j-1]-1]=pere;
                    counter+=1;
                }
                i-=1;
                j-=1;
            }
        }
        if (counter==0){
            ans.insert(ans.begin(), glav[glav.size()-1]);
            glav.pop_back();
        }
    }
    for(int k=0; k<ans.size(); k++){
        cout<<ans[k]<<" ";
    }
}