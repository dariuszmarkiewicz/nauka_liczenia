#include <iostream>

using namespace std;

int dodawanie(int x, int y)
{
    int wynik = x + y;
    cout << x << " + " << y << " = ";
    return wynik;
}

int odejmowanie(int x, int y)
{
    int wynik = x - y;
    cout << x << " - " << y << " = ";
    return wynik;
}

int mnozenie(int x, int y)
{
    int wynik = x * y;
    cout << x << " * " << y << " = ";
    return wynik;
}


int main()
{
    int x,y,n,wynik,odpowiedz;

    for(;;)
    {


        x=(rand()%10)+1;
        y=(rand()%10)+1;
        n=(rand()%3)+1;

        switch(n)
        {
        case 1:
            wynik=dodawanie(x,y);
            break;
        case 2:
            wynik=odejmowanie(x,y);
            break;
        case 3:
            wynik=mnozenie(x,y);
            break;
        }

        cin >> odpowiedz;

        if(wynik==odpowiedz)
            cout << "Brawo, to prawidlowa odpowiedz\n" << endl;
        else
            cout << "Niestety, to bledna odpowiedz\n" << endl;

    }

    return 0;
}
