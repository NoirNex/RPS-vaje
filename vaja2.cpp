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

void najmanjsi(int tab[], int n)
{
    int temp;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (tab[j] > tab[j + 1])
            {
                temp = tab[j];
                tab[j] = tab[j + 1];
                tab[j + 1] = temp;
            }
        }
    }
    cout << tab[0] << endl;
}

void sodi(int tab[], int n)
{
    int stevec = 0;
    for (int i = 0; i < n; i++)
    {
        if (tab[i] % 2 == 0)
        {
            stevec++;
        }
    }
    cout << stevec << endl;
}

int main()
{
    int tab[8] = {12, 5, 8, 21, 3, 16, 9, 14};
    float vs = vsota(tab, 8);
    povprecje(tab, 8, vs);
    najvecje(tab, 8);
    najmanjsi(tab, 8);
    sodi(tab, 8);
    return 0;
}