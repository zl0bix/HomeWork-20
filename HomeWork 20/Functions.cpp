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
int arr_min(int arr[], const int length) {
	int min = arr[0];
	for (int i = 0; i < length; i++){
		if (arr[i] < min)
			min = arr[i];
	}
	return min;
}

int arr_max(int arr[], const int length) {
	int max = arr[0];
	for (int i = 0; i < length; i++) {
		if (arr[i] > max)
			max = arr[i];
	}
	return max;
}
double mean_value(int arr[], const int length) {
	double mid = 0.0;
	for (int i = 0; i < length; i++)
		mid += arr[i];
	return mid / length;
}
void range(int arr[], const int length, int num1, int num2) {
	if (num1<0 || num1>length)
		std::cout << "Error!!!";
	else if(num1>=0&&num1<=length&&num2>length)
		for (int i = num1; i < length; i++){
			std::cout << arr[i] << ' ';
		}
	else
		for (int i = num1; i < num2; i++)	{
			std::cout << arr[i] << ' ';
		}
}
int counter(int arr[], const int length, int num1) {
	int counter = 0;
	for (int i = 0; i < length; i++){
		if (arr[i] == num1)
			counter++;
	}
	return counter;
}
