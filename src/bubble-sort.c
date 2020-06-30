/*
 ============================================================================
 Name        : bubble-sort.c
 Author      : Said TALEB ALI
 Version     : 1.0
 Copyright   : MIT
 Description : Sort an array using bubble sort.
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define LENGTH 10

int main(void) {

	int list[LENGTH] = {12 ,-5 ,0 ,13 ,5 ,8 ,3 ,-4 ,-1 ,20};
	bool swapped;

	for (int i = 0; i < LENGTH - 1; ++i) {
		swapped = false;
		for (int j = 0, temp = 0; j < LENGTH - 1 - i; ++j) {
			if (list[j] > list[j + 1])
			{
				temp = list[j];
				list[j] = list[j + 1];
				list[j + 1] = temp;
				swapped = true;
			}
		}
		// If no two elements were swapped by inner loop, then break
		if (!swapped) break;
	}

	for (int i = 0; i < LENGTH; ++i) {
		printf("%d ", list[i]);
	}

	return EXIT_SUCCESS;
}
