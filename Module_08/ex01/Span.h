#ifndef CPP_MODULS_SPAN_H
#define CPP_MODULS_SPAN_H

#include <iostream>
#include <list>
#include <exception>

class Span {
private:
    unsigned int max;
    std::list<int> arr;

public:
    Span();
    Span(unsigned int N);
    Span(const Span &span);
    Span &operator=(const Span &span);
    ~Span();

    void addNumber(int newNumber);
    void addNumber( std::list<int>::const_iterator, std::list<int>::const_iterator );
    int shortestSpan();
    int longestSpan();

    const std::list< int >*   getList( void ) const;
};

std::ostream& operator<<( std::ostream&, const Span& );

#endif //CPP_MODULS_SPAN_H
