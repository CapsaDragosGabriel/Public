#define _CRT_NONSTDC_NO_DEPRECATE
#define _CRT_SECURE_NO_WARNINGS
#define _CRT_SECURE_NO_DEPRECATE  
#include "Person.h"
#include <iostream>
#include <stdio.h>

using namespace std;
void Person::addNote(int nota)
{
	int i = 0;
	while (this->note[i] != 0 and i < 20)i++;
	if (i < 20) note[i] = nota;
};
Person::Person( const char *nume,int varsta, double inaltime)
{
	this->name = nume;
	this->age = varsta;
	this->height = inaltime;

}
Person::operator int()
{
	int i = 0;
	int sum = 0;
	while (note[i])sum += note[i++];
	return sum / i;
}
const char* Person::operator[](const char* field)
{
	if (field == "nume") return this->name;
	char buffer[33];

	if (field == "varsta")return _itoa(this->age,buffer,10);
	return 0;
}
