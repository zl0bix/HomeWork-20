#include<iostream>
#include<ctime>
#include<cstdlib>
#include"Functions.h"
void fill_arr(int arr[], int length, int left, int right) {
	srand(time(NULL));
	for (int i = 0; i < length; i++)
		arr[i] = rand() % (right - left + 1) + left;
}
void print_arr(int arr[], int length) {
	for (int i = 0; i < length; i++)
		std::cout << arr[i] << ' ';
	std::cout << std::endl;
}
int search_index(int arr[], const int length, int search, int index) {
	int k = -1;
	k = k + index;
	if (search >= -100 && search <= 100)
		if (index >= 0 && index < length)
			for (int i = index; i < length; i++) {
				k++;
				if (search == arr[i])
					if(k!=length||arr[length-1]==search)
					return k;
					else return -2;
				
			}
		
			return -2;
}