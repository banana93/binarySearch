#include <stdio.h>
#include "binarySearch.h"

int binarySearch(int target, int array[], int startIndex, int endIndex)
{
	int halfIndex;
	
	halfIndex = (endIndex + startIndex) / 2;
	// printf("halfIndex: %d\n", halfIndex);
	
	if(target == array[halfIndex]) {
		return halfIndex;
	} else if(startIndex == endIndex) {
		return -1;
	} else if(target < array[halfIndex]) {
		binarySearch(target, array, startIndex, halfIndex - 1);
	}  else {	
		binarySearch(target, array, halfIndex + 1, endIndex);
	}
}