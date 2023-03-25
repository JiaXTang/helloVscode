#ifndef LIBRAIRE_H
#define LIBRAIRE_H
#include <iostream>
#include <vector>
#include "book.h"
using namespace std;


class Libraire{

/*----------属性---------*/
private:
    float money;//该图书馆的价值


protected:
    int num_employe;

public:
    static int num_libraire;//图书馆的数量
    int num_book;//书的总量
    vector<Books> books;//图书馆内图书信息
    

    
private:

void add_money(int num);


/*--------方法-------*/

public:
Libraire(int num);
~Libraire();
void add_book(Books book1);//增加图书馆内图书的方法
Libraire operator +(Libraire myLibraire);//图书馆合并

static void readLibNum();//静态成员函数不具有this指针

static void addLibNum();

};
#endif