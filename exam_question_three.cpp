#include <iostream>
using namespace std;

int f(int x, int y)
{
    if(x < y)
    {
        return x * x;
    }
    else
        return y * y * y;
}

bool g(int a)
{
    if(a == a * a * a)   // always false except a=0 or 1
        return true;
    return false;
}

bool h(int a)
{
    for(int i = 2; i * i <= a; i++)
    {
        if(a % i == 0) return true; // not prime
    }
    return false; // prime or 0/1
}

int main()
{
    int j = 1;
    int x = 4;

    for(x = 0; x < 12; x++)
    {
        if(h(x)) continue;

        j++;
        cout << f(x + 1, j) << " ";

        if(g(j)) break;
    }

    cout << endl;
    cout << x << " " << j << endl;
}