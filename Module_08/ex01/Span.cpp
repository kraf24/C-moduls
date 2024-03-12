#include "Span.h"

Span::Span() {
    this->max = 0;
    this->arr = std::list<int>();
}

Span::Span(unsigned int N) {
    this->max = N;
    this->arr = std::list<int>();
};

Span::~Span() {}

Span::Span(const Span &span) {
    *this = span;
}

Span &Span::operator=(const Span &span) {
    this->max = span.max;
    this->arr = span.arr;
    return *this;
}

void Span::addNumber(int newNumber) {
    if (this->arr.size() == this->max)
        throw std::invalid_argument("Span is full");
    this->arr.push_front(newNumber);
}

void Span::addNumber(std::list<int>::const_iterator begin, std::list<int>::const_iterator end) {
    if (this->arr.size() == this->max)
        throw std::invalid_argument("Span is full");
    arr.insert(arr.end(), begin, end);
}

int Span::longestSpan() {
    if (arr.size() < 2)
        return -1;
    arr.sort();
    return arr.back() - arr.front();
}

int Span::shortestSpan() {
    if (arr.size() < 2)
        return -1;

    int shortestSpan = arr.back();

    for (std::list<int>::iterator iter = arr.begin(); iter != arr.end(); iter++) {
        std::list<int>::iterator nextIter = iter;
        ++nextIter;
        if (fabs(*nextIter - *iter) < shortestSpan)
            shortestSpan = (*nextIter - *iter);
    }
    return shortestSpan;
}

const std::list<int> *Span::getList(void) const {
    return &arr;
}

std::ostream &operator<<(std::ostream &os, const Span &span) {
    for (std::list<int>::const_iterator it = span.getList()->begin(); it != span.getList()->end(); ++it)
        os << *it << " ";
    return os;
}