#include <iostream>
#include "date.h"



int main(int argc, char const *argv[])
{
    /* code */
    date::Date Anniv(9,13);
    std::cout << date::toString(Anniv) << std::endl;

    return 0;
}