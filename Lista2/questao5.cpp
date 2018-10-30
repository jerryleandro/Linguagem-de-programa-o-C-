#include <iostream>

using namespace std;

int main () {
    int n,num = 0, num2=0;

    cout << "Digite um valor " << endl;
    cin >>  n;

    num =n;

    while (n!=0){

        if (n==0){
            break;

        }else{

            if (num >= n){
                num2= num;
                num = n;
            }

        }

        cout << "Informe um numero: " << endl;
        cin >> n;

    }

    cout << "O menor numero e: " << num << endl;
    cout << "O segundo menor numero e: " << num2 << endl;

    return 0;
}
