#include <iostream>
#include "arrayListType.h"

int main()
{
	arrayListType<int> list;
	int num;

	cout << "Line 8: Enter numbers ending with -999"
		<< endl;

	cin >> num;

	while (num != -999)
	{
		list.insert(num);
		cin >> num;
	}

	cout << "Line 15: The list before sorting:" << endl;
	list.print();
	cout << endl;

	//list.selectionSort();
	//list.insertionSort();
	//list.shellSort();
	list.quickSort();
	//list.heapSort();

	cout << "The list after sorting:" << endl;
	list.print();
	cout << endl;

	return 0;
}