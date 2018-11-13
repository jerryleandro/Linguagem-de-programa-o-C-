#include<iostream>

using namespace std;

void troca(int &n1 , int &n2 , int &n3 , int &n4);


int main(){
int x , y , z , k ;

cout<<"informe o 1 numero \n";
cin>>x;
cout<<"informe o 2 numero \n";
cin>>y;
cout<<"informe o 3 numero \n";
cin>>z;
cout<<"informe o 4 numero \n";
cin>>k;

    troca(x , y, z , k);

    cout<<"x = "<<x<<endl;
    cout<<"y = "<<y<<endl;
    cout<<"z = "<<z<<endl;
    cout<<"k = "<<k<<endl;
return 0;
}

void troca(int &n1 , int &n2 , int &n3 , int &n4){
int aux ;
    aux = n1 ;
    n1 = n4 ;
    n4 = n3;
    n3 = n2 ;
    n2 = aux;


}
