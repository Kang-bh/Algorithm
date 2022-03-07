#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <ctime>
using namespace std;

int main(){/*
	cout << "2022-03-07" << endl;*/

	time_t now = time(NULL);
	struct tm* t = localtime(&now);

	cout << t->tm_year + 1900 << "-";
	cout.width(2);
	cout.fill('0');
	cout << t->tm_mon + 1 << "-";
	cout.width(2);
	cout.fill('0');
	cout << t->tm_mday;

	return 0;
}