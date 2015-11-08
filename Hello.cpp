#include <stdio.h>
#include <iostream>
#include <string>
#include "Hello.h"

using namespace std;

HelloWorld::HelloWorld()
{

}

HelloWorld::~HelloWorld()
{

}

void HelloWorld::hello()
{
	string helloString;
	cout << "Say hello" << endl;
	cin >> helloString;
	cout << endl;
	if (helloString == "hello")
	{
		cout << "Hello" << endl;
	}
	else
	{
		cout << "You didnt say hello" << endl;
	}
}