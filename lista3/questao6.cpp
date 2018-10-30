#include <iostream>

using namespace std;

float potencia (int x, int y);

int main () {
	int x, y;
	float axl;

	cout << "digite um valor para X e Y: " << endl;
	cin >> x >> y;

	axl = potencia (x, y);

	cout << axl << endl;



	return 0;
}

float potencia (int x, int y){
	int mult=1;
	float result=0;
	if (y > 0){
		
		for (int i=1; i<=y; i ++){
			mult *= x;
			result= mult;
		}

	}else{
			
			y= y * (-1);
			for (int i=1; i<=y; i ++){
			mult *= x;
			}

			result = 1.0/ mult;
		}

		return result;
}