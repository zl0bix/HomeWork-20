#pragma once
#include<iostream>
#include<ctime>
#include<cstdlib>
#include"Functions.h"

void fill_arr(int arr[], int length, int left, int right);
void print_arr(int arr[], int length);
int search_index(int arr[], const int length, int search, int index = 0);
