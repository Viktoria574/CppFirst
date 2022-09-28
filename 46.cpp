#include <iostream>
#include <vector>
#include <clocale>

using namespace std;

int transl(char s);

int main()
{
    setlocale(LC_ALL, "Russian");

    int temp, res = 0;
    string number;
    vector<int> nom;

    cout << "Write down any roman number" << endl;
    // cin>>number;
    number = "XIC";

    for (char letter : number)
    {
        nom.push_back(transl(letter));
    }

    for (int item : nom)
    {
        cout << item << endl;
        res += item;
    }

    cout << res << endl;
    // if (nom[0]>=nom[1]{
    // sumi
    // }
}

int transl(char s)
{
    switch (s)
    {
    case 'I':
        return 1;
    case 'V':
        return 5;
    case 'X':
        return 10;
    case 'L':
        return 50;
    case 'C':
        return 100;
    case 'D':
        return 500;
    case 'M':
        return 1000;
    }
}