#pragma once
class Search
{
public:
	Search(int target);
	Search();
	~Search();

	int* myArray;//??
	int arraySize;//?

	bool SequentialSearch(int target);
	bool RecursiveBinarySearch(int target);
	bool RecursiveBinarySearchHelper(int target, int low, int high);
	bool IterativeBinarySearch(int target);
	void InitSortedArray();
	int at(int);


private:

};
