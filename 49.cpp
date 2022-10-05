#include <iostream>
#include <math.h>
#include <string>

using namespace std;

int name(int, int);

string win(int, int);

int convert(string, int);

int main() {
    system("chcp 1251");
    setlocale(LC_ALL, "Russian");

    int a, b, ten;
    string st, t;
    cout << "¬ведине основание счислени€ исходного числа" << endl;
    cin >> a;
    cout << "¬ведине основание счислени€ результата" << endl;
    cin >> b;
    cout << "¬ведите число" << endl;
    cin >> st;
    ten = name(stoi(st), a);
    if (ten == 0) {
        cout << "Error";
    }
    else if (b == 10) {
        cout << "Answer:" << ten;
    }
    else if (a == 10) {
        cout << "Answer:" << win(stoi(st), b);
    }
    else {
        cout << "Answer:" << win(ten, b);
    }
    return 0;
}

int name(int s, int a)
{
    int i = 0, sumi = 0, pr;
    while (s > 0) {
        pr = s % 10 * pow(a, i);
        if ((s % 10) < a) {
            sumi += pr;
        }
        else {
            return 0;
        }
        s = s / 10;
        i += 1;
    }
    return sumi;
}

string win(int ten, int b) {
    int j, ans;
    string r, letters = "ABCDEFGHIJ";
    while (ten > 0) {
        if ((ten % b) < 10) {
            r = to_string(ten % b) + r;
        }
        else {
            r = letters[ten % b - 10] + r;
        }
        ten = ten / b;
    }
    return r;
}

int convert(string line, int a) {
    static string digits = "0123456789ABCDEFGHIJ"
    

}