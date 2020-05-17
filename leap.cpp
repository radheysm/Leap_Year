#include <bits/stdc++.h>
#include <iostream>
using namespace std;
int leap_year(int n)
{

    if (n < 0)
    {
        return -1;
    }
    if (n % 4 == 0)
    {
        if (n % 100 == 0)
        {
            if (n % 400 == 0)
            {
                return 1;
            }
            else{
                return 0;
            }
        }
        return 1;
    }
    else
    {
        return 0;
    }
}
int main()
{
    int n;
    cin >> n;
    if (leap_year(n) == 1)
    {
        cout << "It's a Leap Year";
    }
    else if (leap_year(n) == (-1))
    {
        cout << "Enter a Valid Input";
    }
    else
    {
        cout << "It's not a Leap Year!";
    }

    return 0;
}
