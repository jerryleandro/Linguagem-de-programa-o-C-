#include<iostream>

using namespace std;


int main(){
int tamanho ;
int soma = 0, n;

cout<<"informe o tamanho do vetor < 30 "<<endl;
cin>>tamanho;

int vetor[tamanho];
if(tamanho < 30 ){
for(int i = 0; i < tamanho; i++){
cout<<"informe um numero para ser guardado no vetor"<<endl;
    cin>>n;
    vetor[i] = n;

    soma = soma + vetor[i];
}

cout<<"a soma das posições do vetor e : "<<soma;
}else{

cout<<"Valor muito alto pata o tamanho do vetor"<<endl;

}
return 0;
}
