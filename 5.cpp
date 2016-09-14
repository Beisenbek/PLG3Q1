//Задача №1479. Без циклов

#include <iostream>
#include <cmath>

using namespace std;

int main(){
	
	int k,n;

	cin >> k >> n;

	cout << (n-1)/k + 1 << " " << (n-1)%k + 1;
	

	return 0;
}
