#include "easyfind.hpp"
#include <algorithm>

int main()
{

    int                 arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    std::vector< int >      vect( arr, arr + sizeof( arr ) / sizeof( arr[0] ) );
    std::list< int >        list( arr, arr + sizeof( arr ) / sizeof( arr[0] ) );

    easyfind( vect, 1);
    easyfind( list, 10);
    easyfind( list, 20);

    return EXIT_SUCCESS;
}