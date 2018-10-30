#include<iostream>

using namespace std ;

int mediana(int v[], int n);

int main(){
int n;

cout<<"informe um tamanho impar para o tamanho do vetor"<<endl;
cin>>n;

int v[n];

for(int i = 0; i < n; i++){
    cout<<"informe um numero para preenchar o vetor"<<endl;
    cin>>v[i];
}

int media = mediana(v , n);
    cout<<"vetor ordenado"<<endl;
    cout<<""<<endl;

        for(int i = 0; i < n ; i++){
            cout<<v[i]<<" "<<endl;

        }
    cout<<"mediana = "<< v[media]<<endl;

return 0;
}

int mediana(int v[], int n){
int aux = 0 , m;

    for (int i=0; i<n-1; i++){
        for(int j=0; j<n-1-i; j++){
            if(v[j] < v[j+1]){
                int aux = v[j];
                v[j]    = v[j+1];
                v[j+1]  = aux;

            }
        }
    }


    m = (n / 2);

    return m;
}

