//Задача №1476. Часовая стрелка

#include <iostream>

using namespace std;

int main(){
	
	int d;

	cin >> d;

	int h = d / 30;
	int m = 2*(d % 30);

	printf("It is %i hours %i minutes.", h,m);

	return 0;
}
