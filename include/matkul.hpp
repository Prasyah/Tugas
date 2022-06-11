#ifndef __MATKUL_HPP__
#define __MATKUL_HPP__

#include <iostream>

class matkul {
private :
    std::string nama_mk;
    std::string kodeMK;
    int id;

public:
    matkul(int id, std::string kodeMK, std::string nama_mk);

    void setId(int id);
    int getId();

    void setMK(std::string nama_mk);
    std::string getMK();

    void setkodeMK(std::string kodeMK);
    std::string getkodeMK();
};

#endif