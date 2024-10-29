#include <iostream>
using namespace std;

void printRev(int n)
{
    if (n < 1)
        return;
    cout << n << " ";
    printRev(n - 1);
}

int main()
{

    cout << "Enter n: ";
    int n;
    cin >> n;

    printRev(n);

    return 0;
}