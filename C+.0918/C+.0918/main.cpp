#include <iostream>
#include "HigjAcc.h"
#include <string>
#include <cstring>
using namespace std;


int main(){
	string s1("12345");
	string s2("98765");

	HighAcc num1(s1);
	HighAcc num2(s2);

	cout << (string)(num1 + num2);

	system("pause");
	return 0;
}