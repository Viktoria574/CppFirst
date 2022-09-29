#include <iostream>
#include <regex>

using namespace std;

int transl(char s);

bool is_valid_roman(string str);

int main()
{
    int item, prev = 0, res = 0;
    string number;

    cout << "Write down any roman number" << endl;
    cin >> number;
    // number = "MCMLXXXVII";
    if (!is_valid_roman(number))
    {
        cout << "Incorrect" << endl;
    }
    else
    {
        for (char letter : number)
        {
            item = transl(letter);
            res += (prev < item && prev != 0) ? -prev : prev;
            prev = item;
        }
        res += prev;

        cout << number << "=" << res << endl;
    }
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

bool is_valid_roman(string str)
{
    const regex r(R"(^M{0,3}(CM|CD|D?C{0,3})?(XC|XL|L?X{0,3})?(IX|IV|V?I{0,3})?$)");
    return regex_match(str, r);
}