#ifndef PROBKA_HPP_INCLUDED
#define PROBKA_HPP_INCLUDED
#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <stdexcept>
#include <sstream>


class Probka
{
    public
    double t;
    double x;
    Probka(double _t, double _x)
    void foo(int x);
    friend std::ostream& operator<<(std::ostream& stream, const Probka& probka);
};


#endif // PROBKA_HPP_INCLUDED
