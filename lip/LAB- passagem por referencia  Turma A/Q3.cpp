#include<iostream>

using namespace std;

void div(int x , int y , int &q , int &r);

int main(){
int x , y , q = 0 , r = 0;

cout<<"informe o valor de x \n";
cin>>x;

cout<<"informe o valor de y \n";
cin>>y;
cout<<"antes de chamr a funcao \n";
cout<<"q = "<<q<<endl;
cout<<"r = "<<r<<endl;

div(x , y , q , r);
cout<<"depois de chamar a funcao \n";
cout<<"q = "<<q<<endl;
cout<<"r = "<<r<<endl;

return 0;
}
void div(int x , int y , int &q , int &r){
    q = x / y;
    r = x % y;
}
