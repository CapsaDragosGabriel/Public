#pragma once

class Person
{
private:
	const char* name;
	int age;
	double height;
public:
	
	int note[20] = {};
	Person(const char* nume, int varsta, double inaltime);
	void addNote(int nota);
	operator int();
	const char* operator[] (const char *field);

};
/*
class Cartof
{
private:
	const char* name;
public:
	
	Cartof(const char* nume) {
		this->name = nume;
	};
	void ChangeName(const char* newname)
	{
		this->name = newname;
	}
	const char* GetName()
	{
		return this->name;
	}
};*/