// CPlusPlusHighLevel.cpp : Defines the entry point for the console application.

/* Dean Hartfield

3-12-2016

Module 10 Activity - Low-level vs. High-level Languages

Write programs in assembly and C language that calculate the second power of an integer.
The assembly language program should read its data from memory and write the results back to the memory.
The C language program should read its data from the keyboard and output the results to the monitor.

*/

#include "stdafx.h"
#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main()
{
	int num;
	cout << "Enter an integer to find its square: ";
	cin >> num;

	int square = pow(num, 2);

	cout << "The square of " << num << " equals " << square << endl;

	cout << endl;
	system("pause");
    return 0;
}

