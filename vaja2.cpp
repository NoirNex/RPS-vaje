#include <iostream>
using namespace std;

void vsota(int tab[], int n)
{
    int stevec = 0;
    for (int i = 0; i < n; i++)
    {
        stevec += tab[i];
    }
    cout << stevec;
}

int main()
{
    int tab[8] = {12, 5, 8, 21, 3, 16, 9, 14};
    vsota(tab, 8);
    return 0;
}