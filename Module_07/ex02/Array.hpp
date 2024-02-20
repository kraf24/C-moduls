#pragma once

#include"exception"
#include <iostream>

template <class T>
class Array
{
	public:
		Array();
		Array(unsigned int n);
		Array(const Array &other);
		~Array();

		Array &operator=(const Array &other);
		unsigned int size() const;
		T &operator[](unsigned int i) const;

	private:
		T *arr;
		unsigned int arr_size;
};

#include "Array.tpp"
