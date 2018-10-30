#include <iostream>

using namespace std;

int funcaoMMC (int a, int b);
int funcaoMDC (int a, int b);

int main (){
    int a, b, result, result2;

    cout << "Digite valores para A e B: " << endl;
    cin >> a >> b;


    result = funcaoMMC (a, b);
    result2 = funcaoMDC (a, b);

    cout << "O MMC e: " << result << endl;
    cout << "O MDC e: " << result2  << endl;

    return 0;
}

int funcaoMMC (int a, int b){
    int mmc, axl;

    if (b>a){
        axl=a;
        a=b;
        b=axl;

    }

    if (a%b==0){

        mmc=a;

    }else{

        for (int i=2; i<=b; i ++){
            axl = a *i;
            if (axl%b==0){
                mmc= axl;
                break;
            }
        }



    }

    return mmc;
}

int funcaoMDC (int a, int b){
    int aux;

    while (b!=0){
        aux = a%b;
        a=b;
        b=aux;
    }

    return a;

}

