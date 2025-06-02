#include <iostream>
using namespace std;

int main()
{
    int num;
    cin >> num;
    int cnt = 0;
    for (int i = 1; i <= num; i++)
    {
        if (num % i == 0)
            cnt++;
    }
    if (cnt > 2)
        cout << "num is not prime";
    else
        cout << "num is prime";
    return 0;
}