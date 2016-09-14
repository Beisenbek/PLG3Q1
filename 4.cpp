//Задача №1502. Узник замка IF

#include <iostream>
#include <cmath>

using namespace std;

int main(){
	
	int a,b,c,d,e;

	cin >> a >> b >> c >> d >> e;

	if(e >= a && d >= min(b,c) ){
		cout << "YES";
	}
	else if(e >= b && d >= min(a,c) ){
		cout << "YES";
	}
	else if(e >= c && d >= min(a,b) ){
		cout << "YES";
	}
	else{
		cout << "NO";
	}

	

	return 0;
}
