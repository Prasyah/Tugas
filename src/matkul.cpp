#include <iostream>
#include "include/matkul.hpp"
using namespace std;

matkul::matkul (int id, string nama_mk, string kodeMK)
        : id(id), nama_mk(nama_mk), kodeMK(kodeMK) {
}

void matkul::setId(int id)
{
	this->id = id;
}

int matkul::getId() 
{
	return id;
}

void matkul::setkodeMK(string kodeMK){
    this -> kodeMK = kodeMK;
}

string matkul::getkodeMK(){
    return kodeMK;
}

void matkul::setMK(string nama_mk){
    this -> nama_mk = nama_mk;
}

string matkul::getMK(){
    return nama_mk;
}