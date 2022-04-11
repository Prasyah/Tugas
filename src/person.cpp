#include <iostream>
#include "include/person.hpp"


person::person(int id, std::string nama, int dd, int mm, int yy)
		: id(id), nama(nama), dd(dd), mm(mm), yy(yy)
{
}

void person::setId(int id)
{
	this->id = id;
}

int person::getId() 
{
	return id;
}

void person::setNama(std::string nama)
{
	this->nama = nama;
}

std::string person::getNama()
{
	return nama;
}

void person::setTglLahir(int dd, int mm, int yy)
{
	this->dd = dd;
	this->mm = mm;
	this->yy = yy;
}

int person::getTglLahir()
{
	return dd;
}

int person::getBulanLahir()
{
	return mm;
}

int person::getTahunLahir()
{
	return yy;
}



