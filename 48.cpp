#include <iostream>
#include <algorithm>

double counter(double*, double*);

char comparison(double, double, double, double);

using namespace std;
int main()
{
    double cos1, cos2, cos3, com1, com2, com3, maxi, mini;
    double saller1[4] = {5, 2, 0, 10};
    double saller2[4] = {3, 5, 2, 5};
    double saller3[4] = {20, 0, 0, 0};
    double cost[4] = {1.20, 2.80, 5, 2};
    double commis[4] = {0.5, 0.4, 1, 1.5};
    cos1 = counter(saller1, cost);
    cos2 = counter(saller2, cost);
    cos3 = counter(saller3, cost);
    com1 = counter(saller1, commis);
    com2 = counter(saller2, commis);
    com3 = counter(saller3, commis);
    maxi = max({cos1-com1, cos2-com2, cos3-com3});
    mini = min({cos1 - com1, cos2 - com2, cos3 - com3});
    cout << "1.1)" << comparison(maxi, cos1 - com1, cos2 - com2, cos3 - com3) << " saller earned more money" << endl;
    cout << "1.2)" << comparison(mini, cos1 - com1, cos2 - com2, cos3 - com3) << " saller earned few money" << endl;
    cout << "2.1)" << comparison(max({com1, com2, com3}), com1, com2, com3) << " saller received more commision" << endl;
    cout << "2.2)" << comparison(min({com1, com2, com3}), com1, com2, com3) << " saller recieved few commition" << endl;
    cout << "3) All earned money " << cos1 - com1 + cos2 - com2 + cos3 - com3 << endl;
    cout << "4)All commision " << com1 + com2 + com3<<endl;
    cout << "5)All money " << cos1 + cos2 + cos3;
}
double counter(double *a, double *b)
{
    double sumi;
    sumi = a[0] * b[0] + a[1] * b[1] + a[2] * b[2] + a[3] * b[3];
    return sumi;
}

char comparison(double m, double m1, double m2, double m3)
{
    if (m == m1)
    {
        return '1';
    }
    if (m == m2)
    {
        return '2';
    }
    if (m == m3)
    {
        return '3';
    }
}