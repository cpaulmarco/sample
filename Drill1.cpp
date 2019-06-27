// ConsoleApplication1.cpp : Defines the entry point for the console application.
// Drill 1
// Magno, Marco, Nabong

#include "stdafx.h"

#include <iostream>
#include <string>
#include "arrayType.h"

using namespace std;

int main()
{
	arrayListType <char> exer(50);
	char word;
	int position1, position2;

	if (!exer.isFull())
	{
		cout << "Please Enter 5 characters: \n";
		for (int x = 0; x < 5; x++)
		{
			cout << "- ";
			cin >> word;
			exer.insertAt(x, word);
		}
		//(1)
		exer.print();

		//(2)
		cout << "Enter a position: ";
		cin >> position1;
		cout << "Enter a position: ";
		cin >> position2;
		exer.SwapIt(position1, position2);
		exer.print();
		
	}
	system("Pause");
	return 0;
}
