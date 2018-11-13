#include<iostream>


using namespace std;

void readCount(int c1 , int c2 , int &s1 , int &s2 , int &cont1 , int &cont2);
void winner(int cont1 ,int  cont2);
int main(){
char c1 , c2 ;
int cont1 = 0  ,  cont2 = 0 , s1 = 0, s2 = 0;
int n = 0;


while(n != 3){


    cout<<"informe uma carta para o jogador 1"<<endl;
    cin>> c1;
    cout<<"informe uma carta para o jogador 2"<<endl;
    cin>>c2;
    if((c1 >= 'a') && ( c1 <= 'z')||(c1 >= 'A') && ( c1 <= 'Z')){
            if((c2 >= 'a') && ( c2 <= 'z')||(c2 >= 'A') && ( c2 <= 'Z')){
    readCount(c1 , c2, s1 , s2, cont1 , cont2);

            }
        }else{
            cout<<"letra invalida informada "<<endl;
            break;
        }
          n++;
}
cout<<"jogador 1 com "<< s1<<" pontos"<<endl;
cout<<"jogador 2 com "<< s2<<" pontos"<<endl;

    winner(cont1 , cont2);

    return 0 ;
}

void readCount(int c1 , int c2 , int &s1 , int &s2 , int &cont1 , int &cont2){
    s1 = s1 + c1;
    s2 = s2 = c2;
    if(s1 > s2 ){
        cont1++;
    }else{
    cont2++;
    }
}

void winner(int cont1 ,int  cont2){

if(cont1 > cont2){
    cout<<"jogador 1 ganhou "<<endl;

}else{
    cout<<"jogador 2 ganhou "<<endl;
}

}
