#include "Libraire.h"
#include "book.h"

Libraire::Libraire(int num){
    num_libraire++;//
    this->num_book = num;
    this->money = 0;
}

Libraire::~Libraire(){

}

void Libraire::add_money(int num){
    money+=num;
}

void Libraire::add_book(Books book1){//
books.push_back(book1);
this->num_book++;
}

void Libraire::readLibNum(){//
    cout<<num_libraire<<endl;
    //cout<<num_book<<endl;

}
void Libraire::addLibNum(){
    num_libraire++;
}

Libraire Libraire::operator+(Libraire myLibraire)//
{
    Libraire res(0);
    res.num_book = this->num_book + myLibraire.num_book;//
    res.books.insert(res.books.end(),this->books.begin(),this->books.end());//
    res.books.insert(res.books.end(),myLibraire.books.begin(),myLibraire.books.end());

    return res;
}