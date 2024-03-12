#include "Span.h"

int main(void) {

    Span sp = Span(5);

    try {
        std::cout << "---- TEST #1 -----" << std::endl;


        sp.addNumber(5);
        sp.addNumber(3);
        sp.addNumber(9);
        sp.addNumber(17);
        sp.addNumber(11);
//        sp.addNumber(11);

    } catch (std::exception &e) {
        std::cout << e.what() << std::endl;
    }

    std::cout << "sp: " << sp << std::endl;

    std::cout << "longestSpan: " << sp.longestSpan() << std::endl;
    sp.shortestSpan();
    std::cout << "shortestSpan: " << sp.shortestSpan() << std::endl;

    std::cout << "\n---- TEST #1 -----" << std::endl;

    try {
        std::list<int>    l( 10000 );
        std::srand( time ( NULL ) );
        std::generate( l.begin(), l.end(), std::rand );

        Span span( l.size() );

        span.addNumber( l.begin(), l.end() );

        std::cout << "Longest span: " << span.longestSpan() << std::endl;
        std::cout << "Shortest span: " << span.shortestSpan() << std::endl;

    } catch ( std::exception& e ) {
        std::cout << e.what() << std::endl;
    }

    return EXIT_SUCCESS;
}