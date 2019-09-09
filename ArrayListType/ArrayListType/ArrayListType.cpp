#include <iostream>
#include "arrayListType.h"

int main()
{
	arrayListType<int> list;
	int num;

	cout << "Line 8: Enter numbers ending with -999"
		<< endl;
	// 8 1 11 4 2 9 10 5 3 12 6 7 -999
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
	/*list.insertionSort();*/
	list.quickSort();

	cout << "Line 19: The list after sorting:" << endl;
	list.print();
	cout << endl;


	return 0;
}