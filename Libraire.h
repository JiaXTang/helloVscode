#ifndef LIBRAIRE_H
#define LIBRAIRE_H
#include <iostream>
#include <vector>
#include "book.h"
using namespace std;


class Libraire{

/*----------属性---------*/
private:
    float money;//


protected:
    int num_employe;

public:
    static int num_libraire;//
    int num_book;//
    vector<Books> books;//
    

    
private:

void add_money(int num);


/*--------方法-------*/

public:
Libraire(int num);
~Libraire();
void add_book(Books book1);//
Libraire operator +(Libraire myLibraire);//

static void readLibNum();//

static void addLibNum();

};
#endif