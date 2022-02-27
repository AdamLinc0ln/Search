#include "Search.h"
#include <random>

Search::Search(int size)
{
	arraySize = size;
	//this->target = target;
}


Search::~Search()
{
	delete[] myArray;
}

void Search::InitSortedArray()
{
	myArray = new int[arraySize];
	int i = 0;
	srand(0);
	myArray[0] = rand() % 5;
	for (i = 0; i < arraySize - 1; i++)
	{
		myArray[i + 1] = myArray[i] + rand() % 5;
		//arraySize++;
	}
}

bool Search::SequentialSearch(int target)
{
	int i = 0;
	for (i = 0; i < arraySize - 1; i++)
	{
		if (myArray[i] == target)
		{
			return i;
		}
	}

	return false; // not found
}

bool Search::IterativeBinarySearch(int target)
{
	int mid = 0;
	int low = 0;
	int high = arraySize - 1;

	while (high >= low)
	{
		mid = (high + low) / 2;
		if (myArray[mid] < target)
		{
			low = mid + 1;
		}
		else if (myArray[mid] > target)
		{
			high = mid - 1;
		}
		else
		{
			return mid;
		}
	}
	return false;//not found
}

bool Search::RecursiveBinarySearch(int target)//take one pointer? low and high parameters
{
	RecursiveBinarySearchHelper(target, 0, arraySize - 1);
	//something = RecursiveBinarySearchHelper(something, target);
	return false;
}

bool Search::RecursiveBinarySearchHelper(int target, int low, int high)//calls itself need helper pointer? need 3 parameters or array low and high parameters
{
	int mid = (high + low) / 2;
	//make a fail case
	if (high - low < 2)
	{
		return false;
	}
	//guess high
	if (myArray[mid] < target)
	{
		RecursiveBinarySearchHelper(target, mid + 1, high);
	}
	//guess low
	if (myArray[mid] > target)
	{
		RecursiveBinarySearchHelper(target, low, mid - 1);
	}
	//guess correct ==
	else
	{
		return true;
	}

}


int Search::at(int index) {

	return myArray[index];//returns the value at the index that is passed
}
