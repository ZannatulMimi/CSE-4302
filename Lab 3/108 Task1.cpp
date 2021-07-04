#include <bits/stdc++.h>
using namespace std;

class RationalNumber
{
private:
    int denominator;
    int numerator;

public:
    void assign(int num, int denom)
    {
        numerator = num;
        denominator = denom;
        if (denominator == 0)
        {
            cout << "Denominator Cannot Be Zero!" << '\n';
            exit(0);
        }
    }
    double convert()
    {
        double x = (double)numerator / (double)denominator;
        cout << "The Decimal Equivalent is: " << x << '\n';
    }
    void invert()
    {
        if (numerator == 0)
        {
            cout << "Numerator Cannot Be Zero!" << '\n';
            exit(0);
        }
        int temp = numerator;
        numerator = denominator;
        denominator = temp;
    }
    void print()
    {
        cout << "The Rational Number is " << numerator << "/" << denominator << '\n';
    }
};
int main()
{
    RationalNumber r;
    int x,y;
    cout << "Enter Numerator: ";
    cin >> x;
    cout << "Enter Denominator: ";
    cin >> y;
    r.assign(x,y);
    r.print();

    r.convert();


    r.invert();
    r.print();

    return 0;
}

