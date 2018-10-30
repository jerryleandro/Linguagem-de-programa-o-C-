#include<iostream>

using namespace std;

void MM(int vet[], int tamanho);

int main(){
    int tamanho;

    cout<<"informe o tamanho do vetor"<<endl;
    cin>>tamanho;

    int v[tamanho];

    for(int i = 0; i < tamanho ; i++){
        cout<<"informe um numero para ser guardado no vetor"<<endl;
        cin>>v[i];
    }

        MM(v , tamanho);

return 0;
}
    void MM(int vet[] , int tamanho){
    int maior = 0 , menor , n1 , n2 = 0;
        menor = vet[0];
    for(int i = 0; i < tamanho; i++){
        if(maior < vet[i]){
            maior = vet[i];
            n1 = i;
        }
        if(menor > vet[i]){
            menor = vet[i];
            n2 = i;
        }
    }

    cout<<"maior numero é "<< maior<<" esta na posicao "<<n1 +1 <<" do vetor"<<endl;
     cout<<"menor numero é "<< menor<<" esta na posicao "<<n2 + 1<<" do vetor"<<endl;
}
