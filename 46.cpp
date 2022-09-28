#include <iostream>

using namespace std;

int transl(char s);

int main()
{
    int item, prev = 0, res = 0;
    string number;

    cout << "Write down any roman number" << endl;
    // cin>>number;
    number = "MMIX";

    for (char letter : number)
    {
        item = transl(letter);
        res += (prev < item && prev != 0) ? -prev : prev;
        prev = item;
    }
    res += prev;

    cout << number << "=" << res << endl;
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