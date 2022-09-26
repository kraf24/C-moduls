template<class T>
Array<T>::Array()
{
	this->arr = new T[0];
	this->arr_size = 0;
}

template<class T>
Array<T>::Array(unsigned int n)
{
	this->arr = new T[n];
	this->arr_size = n;
}

template<class T>
Array<T>::Array(const Array &other)
{
	arr = new T [other.size()];
	this->arr_size = other.arr_size;
	for (size_t i = 0; i < arr_size; i++)
		arr[i] = other.arr[i];	
}

template<class T>
Array<T> &Array<T>::operator=(const Array &other)
{
	delete this->arr;
	arr = new T [other->arr_size];
	this->arr_size = other.arr_size;
	for (size_t i = 0; i < arr_size; i++)
	arr[i] = other.arr[i];
	return *this;	
}

template<class T>
Array<T>::~Array()
{
	delete[] arr;
}

template<class T>
T &Array<T>::operator[](unsigned int i) const
{
	if (this->arr_size <= i)
		throw std::out_of_range("out of range");
	return this->arr[i];
}

template<class T>
unsigned int Array<T>::size() const
{
	return this->arr_size;
}