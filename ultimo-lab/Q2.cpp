#include<iostream>

using namespace std;

struct Ponto{
float x;
float y;
};

struct Retangulo{
Ponto base;
Ponto altura;
};

void dentro(Retangulo retangulo, Ponto ponto);

int main(){
//bool flag = true ;

Ponto ponto ;
Retangulo retangulo;

cout<<"informe as coordenadas do retangulo X da base , Y da Base , X da Altura , Y da Altura"<<endl;
cin>>retangulo.base.x;
cin>>retangulo.base.y;
cin>>retangulo.altura.x;
cin>>retangulo.altura.y;

cout<<"informe as coordenadas de um ponto X , Y"<<endl;
cin>>ponto.x;
cin>>ponto.y;

dentro(retangulo , ponto);
return 0;
}

void dentro(Retangulo retangulo, Ponto ponto){
    if((ponto.x >= retangulo.base.x) && (ponto.x <= retangulo.altura.x) && (ponto.y >= retangulo.base.y) && (ponto.y <= retangulo.altura.y)){
            cout<<"o ponto esta dentro do retangulo"<<endl;
    }else{
    cout<<"o ponto nao esta dentro do retangulo"<<endl;
    }

}
