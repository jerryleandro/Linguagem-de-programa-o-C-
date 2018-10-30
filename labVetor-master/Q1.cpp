#include<iostream>

using namespace std ;



int main(){
int Sfibo[25];

int n1 = 1, n2 = 0;

Sfibo[0] = n2;
Sfibo[1] = n1;

for(int i = 2; i < 25 ; i++){
    n1 = n1 + n2 ;
    n2 = n1 - n2;

    Sfibo[i] = n1;
}

for(int i =25; i >= 0 ; i--){

cout<<Sfibo[i]<<" , ";

}

return 0;
}
