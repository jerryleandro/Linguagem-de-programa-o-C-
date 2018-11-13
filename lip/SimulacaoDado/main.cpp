#include <iostream>
#include<cstdlib>
#include<ctime>

using namespace std;

int main()
{
    srand(time(NULL));

    int dado;

    int um, dois, tres, quatro, cinco, seis;

    um=dois=tres=quatro=cinco=seis=0;

    for(int i=0;i<1000000;i++)
    {
        dado = rand()%6 + 1;

        switch(dado)
        {
            case 1:
            {
                um++;
                break;
            }
            case 2:
            {
                dois++;
                break;
            }
            case 3:
            {
                tres++;
                break;
            }
            case 4:
            {
                quatro++;
                break;
            }
            case 5:
            {
                cinco++;
                break;
            }
            case 6:
            {
                seis++;
                break;
            }
        }
    }

    cout << "Numero de ocorrencias para cada face do dado: " << endl;
    cout << "Face 1: " << um << endl;
    cout << "Face 2: " << dois << endl;
    cout << "Face 3: " << tres << endl;
    cout << "Face 4: " << quatro << endl;
    cout << "Face 5: " << cinco << endl;
    cout << "Face 6: " << seis << endl;
    return 0;
}
