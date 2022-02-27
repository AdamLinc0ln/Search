#include "Search.h"
#include "Timer.h"
#include<iostream>
using namespace std;


int main()
{//??
	Timer myTimer;
	Search newSearch(1000000);//paramter passes size
	newSearch.InitSortedArray();

	cout << endl;//Start of the array

	cout << "Searching for a number at the start of the array: " << endl;
	myTimer.Start();
	newSearch.SequentialSearch(newSearch.at(0));
	myTimer.End();
	cout << "Sequential Search returned 1 in " << myTimer.DurationInNanoSeconds() << "ns" << endl;

	myTimer.Start();
	newSearch.IterativeBinarySearch(newSearch.at(0));
	myTimer.End();
	cout << "Iterative Binary Search returned 1 in " << myTimer.DurationInNanoSeconds() << "ns" << endl;

	myTimer.Start();
	newSearch.RecursiveBinarySearch(newSearch.at(0));//??
	myTimer.End();
	cout << "Recursive Binary Search returned 1 in " << myTimer.DurationInNanoSeconds() << "ns" << endl;


	cout << endl;//Middle of the array


	cout << "Searching for a number in the middle of the array: " << endl;
	myTimer.Start();
	newSearch.SequentialSearch(newSearch.at((newSearch.arraySize - 1) / 2));
	myTimer.End();
	cout << "Sequential Search returned 1 in " << myTimer.DurationInNanoSeconds() << "ns" << endl;

	myTimer.Start();
	newSearch.IterativeBinarySearch(newSearch.at((newSearch.arraySize - 1) / 2));
	myTimer.End();
	cout << "Iterative Binary Search returned 1 in " << myTimer.DurationInNanoSeconds() << "ns" << endl;

	myTimer.Start();
	newSearch.RecursiveBinarySearch(newSearch.at((newSearch.arraySize - 1) / 2));//??
	myTimer.End();
	cout << "Recursive Binary Search returned 1 in " << myTimer.DurationInNanoSeconds() << "ns" << endl;


	cout << endl;//End of the array


	cout << "Searching for a number at the end of the array: " << endl;
	myTimer.Start();
	newSearch.SequentialSearch(newSearch.at(newSearch.arraySize - 1));
	myTimer.End();
	cout << "Sequential Search returned 1 in " << myTimer.DurationInNanoSeconds() << "ns" << endl;

	myTimer.Start();
	newSearch.IterativeBinarySearch(newSearch.at(newSearch.arraySize - 1));
	myTimer.End();
	cout << "Iterative Binary Search returned 1 in " << myTimer.DurationInNanoSeconds() << "ns" << endl;

	myTimer.Start();
	newSearch.RecursiveBinarySearch(newSearch.at(newSearch.arraySize - 1));//??
	myTimer.End();
	cout << "Recursive Binary Search returned 1 in " << myTimer.DurationInNanoSeconds() << "ns" << endl;


	cout << endl;//NOT in the array


	cout << "Searching for a number NOT in the array: " << endl;
	myTimer.Start();
	newSearch.SequentialSearch(newSearch.at(-1));
	myTimer.End();
	cout << "Sequential Search returned 0 in " << myTimer.DurationInNanoSeconds() << "ns" << endl;

	myTimer.Start();
	newSearch.IterativeBinarySearch(newSearch.at(-1));
	myTimer.End();
	cout << "Iterative Binary Search returned 0 in " << myTimer.DurationInNanoSeconds() << "ns" << endl;

	myTimer.Start();
	newSearch.RecursiveBinarySearch(newSearch.at(-1));//??
	myTimer.End();
	cout << "Recursive Binary Search returned 0 in " << myTimer.DurationInNanoSeconds() << "ns" << endl;


	cout << endl;
	cout << "Press [Enter] to exit..." << endl;

	cin.get();
}