#include <bits/stdc++.h>
using namespace std;

int main()
{
    double pa = 1000;
    double r = 5;
    int t = 2;
    double si = (pa * r * t) / 100;

    if (si > 0.5)
    {
        cout << "yes";
    }
    else
    {
        cout << "no";
    }

    return 0;
}