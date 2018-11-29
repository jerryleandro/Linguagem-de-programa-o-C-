#include<iostream>
#define MAX 100
using namespace std;

struct Pessoa{
char sexo;
int idade;

};



int main(){
int n ;

cout<<"informe a quantidade de pessoas que responderam o questionario"<<endl;
cin>>n;

Pessoa pessoa[MAX];
int q1 , q2 , q3 , q4, q5, q6 , q7  ;
char q8 , rq1 ;
int  contq1a = 0,  contq1b = 0, contq1c  = 0,  contq1d = 0,  contq1e = 0,  contq1f = 0,  contq1g = 0 , contq1h = 0,  contq1i = 0,  contq1j = 0;

int aux18 = 0, aux26 = 0 , aux36 = 0 , aux45 = 0 ;
int auxa18 = 0 , auxb18 = 0, auxc18 = 0, auxd18 = 0, auxe18 = 0, auxf18 =0, auxg18 = 0, auxh18 = 0, auxi18 = 0, auxj18 = 0;
int auxa26 = 0 , auxb26 = 0, auxc26 = 0, auxd26 = 0, auxe26 = 0, auxf26 =0, auxg26= 0, auxh26 = 0, auxi26 = 0, auxj26= 0;
int auxa36 = 0 , auxb36 = 0, auxc36 = 0, auxd36 = 0, auxe36 = 0, auxf36 =0, auxg36 = 0, auxh36 = 0, auxi36 = 0, auxj36 = 0;
int auxa45 = 0 , auxb45 = 0, auxc45 = 0, auxd45 = 0, auxe45 = 0, auxf45 =0, auxg45 = 0, auxh45 = 0, auxi45 = 0, auxj45 = 0;

    int cont = 0;
    for(int i = 0; i < n ; i++){

    cout<<"informe o sexo da pessoa"<<endl;
    cin.ignore();
    cin>>pessoa[i].sexo;
    cout<<"Informe a idade"<<endl;
    cin>>pessoa[i].idade;
    cout<<" Q1 : Na sua vida qual dessas substancias vc ja usou ?"<<endl;
    cout<<" A: derivados do tabaco!"<<endl;
    cout<<" B: Bebidas álcolicas!"<<endl;
    cout<<" C: maconha"<<endl;
    cout<<" D: cocaina , crack"<<endl;
    cout<<" E: anfetaminas ou extase"<<endl;
    cout<<" F: inalantes"<<endl;
    cout<<" G: hipinoticos / sedativos"<<endl;
    cout<<" H: alucinogenos"<<endl;
    cout<<" I: opioides"<<endl;
    cout<<" J: outras, especificar"<<endl;
    cin>>q1;
    cin>>rq1;

    if((pessoa[i].idade >= 18 ) &&(pessoa[i].idade <= 25)){
        aux18++;

        if(rq1 == 'a'){
            aux18++;
        }
         if(rq1 == 'b'){
            auxb18++;
        }
         if(rq1 == 'c'){
            auxc18++;
        }
         if(rq1 == 'd'){
            auxd18++;
        }
         if(rq1 == 'e'){
            auxe18++;
        }
         if(rq1 == 'f'){
            auxf18++;
        }
         if(rq1 == 'g'){
            auxg18++;
        }
        if(rq1 == 'h'){
            auxh18++;
        }
        if(rq1 == 'i'){
            auxi18++;
        }
        if(rq1 == 'j'){
            auxj18++;
        }
        }
        if((pessoa[i].idade >= 26 ) &&(pessoa[i].idade <= 36)){
        aux26++;
         if(rq1 == 'a'){
            aux26++;
        }
         if(rq1 == 'b'){
            auxb26++;
        }
         if(rq1 == 'c'){
            auxc26++;
        }
         if(rq1 == 'd'){
            auxd26++;
        }
         if(rq1 == 'e'){
            auxe26++;
        }
         if(rq1 == 'f'){
            auxf26++;
        }
         if(rq1 == 'g'){
            auxg26++;
        }
        if(rq1 == 'h'){
            auxh26++;
        }
        if(rq1 == 'i'){
            auxi26++;
        }
        if(rq1 == 'j'){
            auxj26++;
        }
    }
        if((pessoa[i].idade >= 37 ) &&(pessoa[i].idade <= 45)){
        aux36++;
         if(rq1 == 'a'){
            aux36++;
        }
         if(rq1 == 'b'){
            auxb36++;
        }
         if(rq1 == 'c'){
            auxc36++;
        }
         if(rq1 == 'd'){
            auxd36++;
        }
         if(rq1 == 'e'){
            auxe36++;
        }
         if(rq1 == 'f'){
            auxf36++;
        }
         if(rq1 == 'g'){
            auxg36++;
        }
        if(rq1 == 'h'){
            auxh36++;
        }
        if(rq1 == 'i'){
            auxi36++;
        }
        if(rq1 == 'j'){
            auxj36++;
        }
    }
        if(pessoa[i].idade > 45 ) {
        aux45++;
         if(rq1 == 'a'){
            aux45++;
        }
         if(rq1 == 'b'){
            auxb45++;
        }
         if(rq1 == 'c'){
            auxc45++;
        }
         if(rq1 == 'd'){
            auxd45++;
        }
         if(rq1 == 'e'){
            auxe45++;
        }
         if(rq1 == 'f'){
            auxf45++;
        }
         if(rq1 == 'g'){
            auxg45++;
        }
        if(rq1 == 'h'){
            auxh45++;
        }
        if(rq1 == 'i'){
            auxi45++;
        }
        if(rq1 == 'j'){
            auxj45++;
        }
    }

    if(rq1 == 'a'){
        contq1a++;
    }
     if(rq1 == 'b'){
        contq1b++;
    }
     if(rq1 == 'c'){
        contq1c++;
    }
     if(rq1 == 'd'){
        contq1d++;
    }
     if(rq1 == 'e'){
        contq1e++;
    }
     if(rq1 == 'f'){
        contq1f++;
    }
     if(rq1 == 'g'){
        contq1g++;
    }
     if(rq1 == 'h'){
        contq1h++;
    }
     if(rq1 == 'i'){
        contq1i++;
    }
     if(rq1 == 'j'){
        contq1j++;
    }
    cout<<"....................................................."<<endl;
    if(q1 == 3 ){
            cont++;
            cout<<"Q2:  Durante os 3 ultimos meses , com que frequencia vc utilizou essas substancias que mencionou"<<endl;
            cin>>q2;
                cout<<"Q3 : durante os 3 ultimos messes, com que frenquencia vc teve um forte desejo ou urgencia em consumir"<<endl;
            cin>>q3;

            cout<<"Q4: durante os 3 ultimos meses com que frenquencia o seu consumo (primeira droga , depois a segunda droga, etc) resultou em um plobema de saude social legal ou financeiro"<<endl;
            cin>>q4;
            cout<<"Q5: durante os 3 ultimos meses, com que frencia por causa do seu uso(primeira droga , depois a segunda droga, etc), vc deixou de fazer as coisas que eram normalmente esperadas de vc"<<endl;
            cin>>q5;

            cout<<"Q6: ha amigos,parentes ou outra pessoa que tenha demonstrado preocupacao com seu uso de (primeira droga , depois a segunda droga, etc)."<<endl;
            cin>>q6;
            cout<<"Q7: alguma vez vc ja tentou controlar, diminuir ou parar o uso(primeira droga , depois a segunda droga, etc) e nao conseguiu?"<<endl;
            cin>>q7;

            cout<<"Q8: alguma vez vc ja usou drogas por injecao?"<<endl;
            cout<<"nao, nunca: n"<<endl;
            cout<<"sim nos utimos 3 meses: s"<<endl;
            cout<<"sim mais nao nos ultimos 3 meses: c"<<endl;
    }


    }


    for(int i = 0; i < n ; i++){

    cout<<"SEXO Pessoa : "<< i + 1 << " = "<<pessoa[i].sexo<<endl;
    cout<<"IDADE da pessoa : "<< i + 1 << " =  "<< pessoa[i].idade<<endl;

}

    cout<<"Quantidade de pessoas entrevistadas = "<< n<<endl;
    cout<<"quantidade de pessoas que usam drogas = "<< cont<<endl;
    cout<<"quantidade de pessoas que usam alcool  = "<< contq1b<<endl;
    cout<<"quantidade de pessoas entre 18 e 15 que usan drogas = "<< aux18<<endl;


return 0;
}
