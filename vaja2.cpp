#include <iostream>
using namespace std;

float vsota(int tab[], int n)
{
    int stevec = 0;
    for (int i = 0; i < n; i++)
    {
        stevec += tab[i];
    }
    cout << stevec << endl;
    return stevec;
}

void povprecje(int tab[], int n, int vs)
{
    cout << vs / n << endl;
}

void najvecje(int tab[], int n)
{
    int temp = 0;
    for (int i = 0; i < n; i++)
    {
        if (tab[i] > temp)
        {
            temp = tab[i];
        }
    }
    cout << temp << endl;
}

int main()
{
    int tab[8] = {12, 5, 8, 21, 3, 16, 9, 14};
    float vs = vsota(tab, 8);
    povprecje(tab, 8, vs);
    najvecje(tab, 8);
    return 0;
}