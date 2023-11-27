#pragma once
#include <iostream>
using namespace std;

void Elem(int arr[], int size) {
	for (int i{}; i < size; i++) {
		cout << arr[i]<< " ";
	}
}
int Insert(int* arr, int size) {
	for (int i = 0; i < size; i++) {
		cin >> arr[i];
	}
	return *arr;
}