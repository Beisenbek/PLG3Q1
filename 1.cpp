//Задача №1474. Сумма цифр четырехзначного числа

#include <iostream>

using namespace std;

int main(){
	int a;

	cin >> a;

    //1234
	int d1 = a % 10;
	a = a / 10;
	
	//123
	int d2 = a % 10;
	a = a / 10;
	
	//12
	int d3 = a % 10;
	a = a / 10;

	//1
	int d4 = a % 10;
	

	int res = d1 + d2 + d3 + d4;

	cout << res;


	return 0;
}
