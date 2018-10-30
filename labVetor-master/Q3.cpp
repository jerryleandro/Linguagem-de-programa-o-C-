#include<iostream>


using namespace std;


int main(){
int n1, n2 ,tamanho , resultado = 0;

cout<<"informe o tamanho dos vetores"<<endl;
cin>>tamanho;

int vetor1[tamanho], vetor2[tamanho], vetor3[tamanho];

for(int i = 0; i < tamanho ; i++){
    cout<<"informe um valor para o vetor1 "<<endl;
    cin>>n1;
    vetor1[i] = n1;

}

for(int i = 0; i < tamanho ; i++){
    cout<<"informe um numero para o vetor2 "<<endl;
    cin>>n2;
    vetor2[i] = n2;

}

for(int i = 0; i < tamanho; i++){
    vetor3[i] = vetor1[i] * vetor2[i];
        resultado = resultado + vetor3[i];

}
    cout<<"o produto escalar do vetor1 com o vetor2 e: "<<resultado;
return 0;
}
