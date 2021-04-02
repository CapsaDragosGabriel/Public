#define _CRT_NONSTDC_NO_DEPRECATE
#define _CRT_SECURE_NO_WARNINGS
#define _CRT_SECURE_NO_DEPRECATE  
#include <iostream>
#include "Person.h"

#include <stdio.h>
using namespace std;

int main()
{
    
  //  Person p("Ionut", 26, 1.83);
    Person p = { "Ionut", 26, 1.83 };
    cout << p["nume"] << " are " << p["varsta"] << " ani" << endl;

    char buffy[30];
    int a = 2345;
    char* pe;

    pe= _itoa(a, buffy, 10);
    cout << pe;
    p.addNote(3);
    p.addNote(7);
    p.addNote(6);
    p.addNote(10);
    
    cout << int(p) << endl; // Afiseaza media aritmetica a notelor;

    return 0;
}
//
//Adaugati membri si meto   dele necesare in clasa Person pentru ca functia main sa functioneze corect.
//
//Barem:
//a)[5 pct] Cod organizat(un fisier.h, un fisier.cpp cu implementarea si un fisier main.cpp pentru codul din main)
//b)[10 pct] Codul compileaza si ruleaza corect
//c)[5 pct] Constructor
//d)[10 pct] Metoda addNote
//e)[15 pct] operator int
//f)[15] operator []
