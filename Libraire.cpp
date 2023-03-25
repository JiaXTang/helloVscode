#include "Libraire.h"
#include "book.h"

Libraire::Libraire(int num){
    num_libraire++;//创建一个对象，图书馆数量+1
    this->num_book = num;
    this->money = 0;
}

Libraire::~Libraire(){

}

void Libraire::add_money(int num){
    money+=num;
}

void Libraire::add_book(Books book1){//增加图书馆内图书的方法
books.push_back(book1);
this->num_book++;
}

void Libraire::readLibNum(){//静态成员函数不具有this指针
    cout<<num_libraire<<endl;
    //cout<<num_book<<endl;静态成员函数不能访问非静态成员

}
void Libraire::addLibNum(){
    num_libraire++;
}

Libraire Libraire::operator+(Libraire myLibraire)//图书馆合并
{
    Libraire res(0);
    res.num_book = this->num_book + myLibraire.num_book;//图书数量相加
    res.books.insert(res.books.end(),this->books.begin(),this->books.end());//图书馆内图书信息相加
    res.books.insert(res.books.end(),myLibraire.books.begin(),myLibraire.books.end());

    return res;
}