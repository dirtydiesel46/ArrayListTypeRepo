#include <iostream>
#include "arrayListType.h"

int main()
{
	arrayListType<int> list;
	int num;
	
	cout << "##############################" << endl;
	cout << "# Insertion Sort Application #" << endl;
	cout << "##############################" << endl << endl;

	cout << "Enter numbers ending with -999: " << endl;

	cin >> num;

	while (num != -999)
	{
		list.insert(num);
		cin >> num;
	}
	cout << endl;
	/*
	cout << "The list before sorting:" << endl;
	list.print();
	cout << endl;*/

	cout << "Sorting the list:" << endl;
	//list.selectionSort();
	list.insertionSort();

	cout << "The sorted list:" << endl;
	list.print();
	cout << endl;

	return 0;
}