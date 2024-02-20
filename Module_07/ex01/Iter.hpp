#ifndef ITER_HPP
#define ITER_HPP

#include"iostream"

template <class A, class Func>
void Iter(A *arr, size_t len, Func (*f)(A&))
{
	for (size_t i = 0; i < len; i++)
	{
		(*f)(arr[i]);
	}
}

#endif