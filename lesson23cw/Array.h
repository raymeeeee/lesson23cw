#pragma once
#include <iostream>
using namespace std;

template <typename T>
class Array {
	int m_size;
	T* m_array;
public:
	Array(int size, T value) {
		m_size = size;
		m_array = new T[m_size];
		for (int i = 0; i < m_size; i++)
		{
			m_array[i] = value;
		}
	};
	~Array() {
		if (m_array != nullptr) {
			delete[] m_array;
		}
	};

	int size()const {
		return m_size;
	};	      // повертає розмірність масиву	
	void print()const {
		for (int i = 0; i < m_size; i++)
		{
			cout << m_array[i] << " ";
		}
		cout << endl;
	};	// виведення всіх елементів масиву

	//void push_back(T item);	// додавання елемента item у кінець масиву	 

	//T find_max()const; // пошук елемента з максимальним значенням
	//T find_min()const; // пошук елемента з мінімальним значенням

};


