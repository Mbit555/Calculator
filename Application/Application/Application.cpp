// Application.cpp : main project file.

#include "stdafx.h"
#include "lib.h"
#include "iostream"

using namespace System;
using namespace std;
using namespace Tolya;

int main(array<System::String ^> ^args)
{
	cout << lib::delenye(10, 5);
	cout << lib::ymnogenie(10, 2);

	system("pause");
	return 0;
}
