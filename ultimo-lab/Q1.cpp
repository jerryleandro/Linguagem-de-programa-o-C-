#include<iostream>
#define MAX 100
#include<cstring>

using namespace std;

struct Aluno{
char nome [MAX];
int matricula;

float media;
};


void notas(Aluno aluno[], int n );
int main(){

    int n ;
    cout<<"informe a quantidade de alunos que quer cadastrar"<<endl;
    cin>>n ;

    Aluno aluno[n];

    for(int i = 0; i < n ; i++){
        cout<<"informe o nome do aluno "<<endl;
        cin.ignore();
        cin.getline(aluno[i].nome , MAX);
        cout<<"informe a matricula do aluno "<<endl;
        cin>>aluno[i].matricula;

        cout<<"informe a madia do aluno"<<endl;
        cin>>aluno[i].media;
    }

    notas(aluno , n );

return 0;
}


void notas(Aluno aluno[], int n){

Aluno maior, menor;
 Aluno aux;

   for (int i=0; i<n-1; i++){
        for(int j=0; j<n-1-i; j++){
            if(aluno[j].media < aluno[j+1].media){
               aux = aluno[j];
                aluno[j]    = aluno[j+1];
                aluno[j+1]  = aux;
            }
        }
    }

    maior = aluno[0];
    menor = aluno[n - 1];
cout<<"maior nota foi "<< maior.media<< " do aluno "<<maior.nome<<endl;
cout<<"menor nota foi "<< menor.media<< " do aluno "<<menor.nome<<endl;
}
