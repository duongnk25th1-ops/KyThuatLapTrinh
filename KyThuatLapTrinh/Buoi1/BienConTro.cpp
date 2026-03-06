#include <iostream>
#include <vector> 
using namespace std;

int main() {
	int a = 5;
	int* p = &a;
	a += 6;
	a = *p + 2;
	cout << *p;
}
