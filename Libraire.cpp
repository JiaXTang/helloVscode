#include "Libraire.h"
#include "book.h"

Libraire::Libraire(int num){
    num_libraire++;//����һ������ͼ�������+1
    this->num_book = num;
    this->money = 0;
}

Libraire::~Libraire(){

}

void Libraire::add_money(int num){
    money+=num;
}

void Libraire::add_book(Books book1){//����ͼ�����ͼ��ķ���
books.push_back(book1);
this->num_book++;
}

void Libraire::readLibNum(){//��̬��Ա����������thisָ��
    cout<<num_libraire<<endl;
    //cout<<num_book<<endl;��̬��Ա�������ܷ��ʷǾ�̬��Ա

}
void Libraire::addLibNum(){
    num_libraire++;
}

Libraire Libraire::operator+(Libraire myLibraire)//ͼ��ݺϲ�
{
    Libraire res(0);
    res.num_book = this->num_book + myLibraire.num_book;//ͼ���������
    res.books.insert(res.books.end(),this->books.begin(),this->books.end());//ͼ�����ͼ����Ϣ���
    res.books.insert(res.books.end(),myLibraire.books.begin(),myLibraire.books.end());

    return res;
}