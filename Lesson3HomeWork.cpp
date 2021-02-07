#include <iostream>
using namespace std;
double x;
int a = 13;
int b = 25;
int c = 38;
int d = 9;
int task1();
int task2();
int task3();

int main() {
	task1();
	task2();
	task3();
	}
	int task1(){
				x = a * (b + ((double)c / d));
		cout << x << endl;
		return 0;
	};
	int task2(){
		int z = 21;
		int y = 31;
		int h = z - y;
		int k = y - z;
		int result;
		result = (y > z) ? k * 2 : h * 2;

		cout << result << endl;
		return 0;
	};
		
	