#include <iostream>

#include "include/dosen.hpp"

using namespace std;

dosen::dosen(int id, string nama, int dd, int mm, int yy, string npp, string departemen, string pendidikan)
		: person(id, nama, dd, mm, yy), npp(npp), departemen(departemen), pendidikan(pendidikan){}

void dosen::setPendidikan(string pendidikan)
{
	this -> pendidikan = pendidikan;
}

string dosen::getPendidikan()
{
	return this->pendidikan;
}

string dosen::getNPP()
{
	return this->npp;
}

void dosen::setNPP(string npp)
{
	this->npp = npp;
}

string dosen::getDepartemen()
{
	return this->departemen;
}

void dosen::setDepartemen(string departemen)
{
	this->departemen = departemen;
}