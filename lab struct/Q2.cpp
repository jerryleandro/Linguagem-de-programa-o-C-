#include<iostream>
#define MAX 100

using namespace std ;

struct Endereco{
char rua[MAX];
int cep;
int numero;
};

struct pessoa{

char nome[MAX];
char email[MAX];
int telefone;
Endereco endereco ;
};

int main(){
int n ;

cout<<"informe a quantidade de cadastros "<<endl;
cin>> n;

pessoa cadastro[n];
cout<<"............................."<<endl;
for(int i = 0; i < n ; i++){

    cout<<"informe o nome "<<endl;
    cin.ignore();
    cin.getline(cadastro[i].nome , MAX);
    cout<<"informe o e-mail "<<endl;
    cin.getline(cadastro[i].email , MAX);
    cout<<"informe o telefone "<<endl;
    cin>>cadastro[i].telefone;
    cout<<"informe o endereco > rua "<<endl;
    cin.ignore();
    cin.getline(cadastro[i].endereco.rua , MAX);
    cout<<"informe o cep da rua "<<endl;
    cin>>cadastro[i].endereco.cep ;
    cout<<"informe o numero do AP/casa "<<endl;
    cin>>cadastro[i].endereco.numero;

}


cout<<"......................................"<<endl;
for(int i = 0; i < n ; i++){
cout<<"Nome : "<<cadastro[i].nome<<endl;
cout<<"E-mail:"<<cadastro[i].email<<endl;
cout<<"Numero telefone : "<<cadastro[i].telefone<<endl;
cout<<"Nome Da Rua :"<<cadastro[i].endereco.rua<<endl;
cout<<"CEP :"<<cadastro[i].endereco.cep<<endl;
cout<<"Numero Casa/AP :"<<cadastro[i].endereco.numero<<endl;
cout<<"..........................................."<<endl;


}


return 0;
}
