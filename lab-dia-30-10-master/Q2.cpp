#include<iostream>
#define N 100

using namespace std;

void ordenar(int v1[] , int v2[] , int v3[] , int n);

int main(){
    int n ;

    cout<<"informe o tamanho dos vetores"<<endl;
    cin>>n ;

    int v1[n], v2[n];

//int alg = n * 2;
     int v3[N];

    for(int i = 0; i < n ; i++){
        cout<<"informe um numero para preencher v1"<<endl;
        cin>>v1[i];
    }

    for(int i = 0; i < n ; i++){
        cout<<"informe um numero para preencher v2"<<endl;
        cin>>v2[i];
    }

    ordenar(v1, v2 , v3 , n);

return 0;
}

void ordenar(int v1[] , int v2[] , int v3[] , int n ){

    int aux = 0;

    for (int i=0; i<n-1; i++){
        for(int j=0; j<n-1-i; j++){
            if(v1[j] > v1[j+1]){
                int aux = v1[j];
                v1[j]    = v1[j+1];
                v1[j+1]  = aux;

            }
        }
    }

    int aux2 = 0;

    for (int i=0; i<n-1; i++){
        for(int j=0; j<n-1-i; j++){
            if(v2[j] > v2[j+1]){
                int aux2 = v2[j];
                v2[j]    = v2[j+1];
                v2[j+1]  = aux2;

            }
        }
    }
    cout<<"vetor1 ordenado"<<endl;
    for(int i = 0; i < n ; i++){
        cout<<v1[i]<<endl;
    }
    cout<<"vetor2 ordenado"<<endl;
    for(int i = 0; i < n ; i++){
        cout<<v2[i]<<endl;
    }
    cout<<""<<endl;
    int cont = 0;

    int n4 = n * 2;

      for(int i = 0 ; i < (n + n); i++){
            v3[cont] = v1[i];
            cont++;
            v3[cont] = v2[i];
            cont++;

        }

        for(int i = 0; i < (n + n) ; i++){
            cout<<v3[i]<<endl;
        }
}
