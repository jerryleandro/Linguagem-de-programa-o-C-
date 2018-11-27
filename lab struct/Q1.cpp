#include<iostream>
#define MAX 100
#include<cstring>
using namespace std;

struct aluno {
char nome[MAX];
char Ncurso[MAX];
double matricula;

};

int main(){
int n ;
//aluno cadastro[MAX];
cout<<"informe a quantidade de alunos"<<endl;
cin>> n;
//cin.ignore();
aluno cadastro[n];

for(int i = 0; i < n ; i++){

    cout<<"informe o nome do aluno"<<endl;
    cin.ignore();
    cin.getline(cadastro[i].nome , MAX);

    cout<<"informe o curso que o aluno estuda"<<endl;
    cin.getline(cadastro[i].Ncurso , MAX);
   // cin.ignore();
    cout<<"informe a matricula do aluno"<<endl;
    cin>>cadastro[i].matricula;
    //cin.ignore();
}

for(int j = 0 ; j <  n; j++){
cout<<"Nome : "<<cadastro[j].nome<<endl;
cout<<"Curso :"<<cadastro[j].Ncurso<<endl;
cout<<"Matricula : "<<cadastro[j].matricula<<endl;
cout<<"..........................................."<<endl;

//}
}


return 0;
}
