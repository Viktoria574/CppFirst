#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
int main(){
    int n, t, j=0, k, m, maxi=0, counter=0;
    vector<int> number;
    cout<<"Enter a number of free place"<<endl;
    cin>>n;
    m=n;
    cout<<"Enter "<<n<<" places"<<endl;
    while(m>0){
        cin>>t;
        number.push_back(t);
        m-=1;
    }
    while (j!=n-1){
        j=0;
        for (int i=0; i<=n-2; i++){
            if (number[i]>number[i+1]){
                k=number[i];
                number[i]=number[i+1];
                number[i+1]=k;
            }
            else{
                j+=1;
            }
        }
    }
    for(k=0; k<=n-1; k++){
        cout<<number[k]<<" ";
        if((number[k]+3==number[k+3] and number[k+3]%4==0 and number[k+3]<=36) or (number[k]>=37 and number[k]+1==number[k+1] and number[k+1]%2==0)){
            counter+=1;
            if (number[k+3]<=36){
                k+=3;
            }
            else if (number[k]>36){
                k+=1;
            }
        }
        else{
            maxi=max({counter, maxi});
            counter=0;
        }
    }
    cout<<max({counter, maxi});
}