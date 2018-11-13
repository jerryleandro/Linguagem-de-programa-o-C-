#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int flip();

int main()
{
    srand(time(NULL));

    int moeda;

    cout << "Cara (0) ou Coroa (1)? ";

    cin >> moeda;

    while(moeda != 1 && moeda != 0)
    {
        cout << "Jogada invalida. Tente novamente: ";

        cin >> moeda;
    }

    if(moeda ==  flip())
    {
        cout << "Ganhou." << endl;
    }
    else
    {
        cout << "Perdeu." << endl;
    }

    return 0;

}

int flip()
{
    return rand()%5;
}
