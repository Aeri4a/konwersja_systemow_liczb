//Autor - Ani4aa

#include <iostream>

using namespace std;

string konwersja(int arabska)
{
    const string rzymskie[13] = { "I", "IV", "V", "IX", "X", "XL", "L", "XC", "C", "CD", "D", "CM", "M" };
    const int nr[13] = { 1, 4, 5, 9, 10, 40, 50, 90, 100, 400, 500, 900, 1000 };

    string wynik = "";
    for (int i=12; i>=0; --i)
    {
        while (arabska>=nr[i])
        {
            arabska -= nr[i];
            wynik += rzymskie[i];
        }
    }
   return wynik;
}

int main()
{
    int liczba;

    cin >> liczba;
    if(liczba<=0 || !cin)
        cout << "Bledna liczba";
    else
        cout << konwersja(liczba);
    return 0;
}
