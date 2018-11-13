#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int flip()
{
    return rand()%2;
}

int main()
{
    srand(time(NULL));

    int moeda, cara=0, coroa=0;

    for(int cont=0;cont<100;cont++)
    {
        if(flip()==0)
        {
            cara++;
            cout << "Iteracao " << cont << " deu Cara." << endl;
        }
        else
        {
            coroa++;
            cout << "Iteracao " << cont << " deu Coroa." << endl;
        }
    }

    cout << "Cara: " << cara << " vezes." << endl;

    cout << "Coroa: " << coroa << " vezes." << endl;

    return 0;
}
