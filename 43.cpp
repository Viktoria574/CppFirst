#include <iostream>
#include <clocale>
#include <vector>
#include <sstream>
#include <cmath>

using namespace std;

double pram(double a, double b);
double trio(double a, double b, double c);
double okr(double a);

int main(){
    setlocale(LC_ALL, "Russian");
    vector<string> numbers;
    string data, s;
    int a, b,c;
    cout<<"Please enter subject and number(s)"<<endl;
    // data="P 3 4";
    cin>>data;
    istringstream fov(data);
    
    while (getline(fov, s, ';')){
        // cout<<s<<endl;
        numbers.push_back(s);
    }
    // cout<<numbers[1];

    if ((char)data[0]==(char)'P'){
        a=stoi(numbers[1]);
        b=stoi(numbers[2]);
        cout<<"The area of the figure is "<<pram(a, b);
    }

    if ((char)data[0]==(char)'T'){
        a=stod(numbers[1]);
        b=stod(numbers[2]);
        c=stod(numbers[3]);
        cout<<"The area of the figure is "<<trio(a, b, c);
    }

    if ((char)data[0]==(char)'O'){
        a=stod(numbers[1]);
        cout<<"The area of the figure is "<<okr(a);
    }
}

double pram(double a, double b){
    return(a*b);
}

double trio(double a, double b, double c){
    double p;
    p=(a+b+c)/2;
    return(pow((p*(p-a)*(p-b)*(p-c)), 0.5));
}

double okr(double a){
    return(M_PI*pow(a, 2));
}