#include <stdio.h>
#include <iostream>
#include <string>
#include "Hello.h"

using namespace std;

void HelloWorld::hello()
{
	string helloString;
	cout << "Say hello!" << endl;
	cin >> helloString;
}