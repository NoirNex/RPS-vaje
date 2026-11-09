#include <iostream>
#include <vector>
using namespace std;

float vsota(vector<int> tab)
{
    int stevec = 0;
    for (int i = 0; i < tab.size(); i++)
    {
        stevec += tab[i];
    }
    cout << stevec << endl;
    return stevec;
}

void povprecje(vector<int> tab, int vs)
{
    cout << vs / tab.size() << endl;
}

void najvecje(vector<int> tab)
{
    int temp = 0;
    for (int i = 0; i < tab.size(); i++)
    {
        if (tab[i] > temp)
        {
            temp = tab[i];
        }
    }
    cout << temp << endl;
}

void najmanjsi(vector<int> tab)
{
    int temp;
    for (int i = 0; i < tab.size(); i++)
    {
        for (int j = 0; j < tab.size() - i - 1; j++)
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

void sodi(vector<int> tab)
{
    int stevec = 0;
    for (int i = 0; i < tab.size(); i++)
    {
        if (tab[i] % 2 == 0)
        {
            stevec++;
        }
    }
    cout << stevec << endl;
}

void liha(vector<int> tab)
{
    int stevec = 0;
    for (int i = 0; i < tab.size(); i++)
    {
        if (tab[i] % 2 != 0)
        {
            stevec++;
        }
    }
    cout << stevec << endl;
}

void vecja_od_10(vector<int> tab)
{
    for (int i = 0; i < tab.size(); i++)
    {
        if (tab[i] > 10)
        {
            cout << tab[i] << " ";
        }
    }
    cout << endl;
}

void uredi(vector<int> &tab)
{
    int temp;
    for (int i = 0; i < tab.size(); i++)
    {
        for (int j = 0; j < tab.size() - i - 1; j++)
        {
            if (tab[j] > tab[j + 1])
            {
                temp = tab[j];
                tab[j] = tab[j + 1];
                tab[j + 1] = temp;
            }
        }
    }
    for (int i = 0; i < tab.size(); i++)
    {
        cout << tab[i] << " ";
    }
    cout << endl;
}

void dodaj(vector<int> &tab)
{
    int x;
    cin >> x;
    tab.push_back(x);
    for (int i = 0; i < tab.size(); i++)
    {
        cout << tab[i] << " ";
    }
    cout << endl;
}

void odstrani(vector<int> tab)
{
    int x;
    bool st = 0;
    cin >> x;
    for (int i = 0; i < tab.size(); i++)
    {
        if (tab[i] == x)
        {
            tab.erase(tab.begin() + i);
            st = 1;
            break;
        }
    }
    if (st == 0)
        cout << "takega stevila ni v seznamu" << endl;
    for (int i = 0; i < tab.size(); i++)
    {
        cout << tab[i] << " ";
    }
    cout << endl;
}

int main()
{
    vector<int> tab = {12, 5, 8, 21, 3, 16, 9, 14};
    float vs = vsota(tab);
    povprecje(tab, vs);
    najvecje(tab);
    najmanjsi(tab);
    sodi(tab);
    liha(tab);
    vecja_od_10(tab);
    uredi(tab);
    dodaj(tab);
    odstrani(tab);
    return 0;
}