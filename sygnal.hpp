#ifndef PROBKA_HPP_INCLUDED
#define PROBKA_HPP_INCLUDED
#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <stdexcept>
#include <sstream>


public Probka
{
private:
    vector<Probka> probki;
public:
    Sygnal();
    void dodajProbke(const Probka& p)
    int iloscProbek()
    Probka& operator[]();
    friend std::ostream& operator<<(std::ostream& stream, const Sygnal& sygnal);
}
#endif // SYGNAL_HPP_INCLUDED
