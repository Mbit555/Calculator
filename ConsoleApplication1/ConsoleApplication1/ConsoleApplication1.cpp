// ConsoleApplication1.cpp : main project file.

#include "stdafx.h"
#include "lib.h"
#include "iostream"

using namespace System;
using namespace std;
using namespace Vlad;

int main(array<System::String ^> ^args)
{
	cout << lib::plus(5, 4);
	cout << lib::minus(5, 4);

	system("pause");
    return 0;
}
