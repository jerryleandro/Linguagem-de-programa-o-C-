#include <iostream>

using namespace std;

float calcNota (float nota1, float nota2, float nota3);
float menorNota (float nota1, float nota2, float nota3);

int main () {
    float nota1, nota2, nota3, result;

    cout << "Digite três notas: " <<  endl;
    cin >> nota1 >> nota2 >> nota3;

    result = calcNota (nota1, nota2, nota3);

    cout << "Precisa tirar : " << result;



    return 0;
}

float menorNota (float nota1, float nota2, float nota3){
    float  nota, result;

    if ((nota1 <= nota2) && (nota1 <= nota3)){
        nota = nota1;

    }else if ((nota2 <= nota1) && (nota2 <= nota3)){
        nota = nota2;

    }else{
        nota = nota3;
    }

    return nota;

}

float calcNota (float nota1, float nota2, float nota3){
    float soma=0, pf, menor;

    menor = menorNota (nota1 , nota2 , nota3);
    soma = nota1 + nota2 + nota3;
    pf = (15 - soma) +  menor;

    return pf;
}
