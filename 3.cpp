//Задача №1494.

#include <iostream>
#include <cmath>

using namespace std;

int main(){
	
		
	//2y = -3x;
	//3y = 5x + 6;
	//x*x + (y-1)*(y-1) = 2

	double x,y;

	cin >> x >> y;

	if((sqrt(x*x+ (y-1)*(y-1)) < 2) && (2*y > -3*x) && (3 * y < 5 * x + 6)){
		cout << 1;
	}
	else if((sqrt(x*x + (y-1)*(y-1)) > 2) && (2*y < -3*x) && (3 * y > 5 * x + 6)){
		cout << 1;
	}
	else cout << 0;

	return 0;
}
