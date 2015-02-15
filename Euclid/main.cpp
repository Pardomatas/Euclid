#include <iostream>

using namespace std;

struct FRACTION {
    int numerator;
    int denominator;
};


int gcd(int u, int v)
{
        int t;
        while(u > 0)
        {
            if(u < v)
            {
                t = u; u = v; v = t;
            }
            u = u % v;
        }
        return v;
}

main()
{
    FRACTION fraction;
    cout << "Please enter the numerator then the denominator" << '\n';
    while(cin >> fraction.numerator && cin >> fraction.denominator)
        if(fraction.numerator > 0 && fraction.denominator > 0)
            {
                int div = gcd(fraction.numerator, fraction.denominator);
                fraction.numerator = fraction.numerator/div;
                fraction.denominator = fraction.denominator/div;
                cout << fraction.numerator << '/' << fraction.denominator << '\n';
            }
}
