#ifndef LIBRAIRE_H
#define LIBRAIRE_H
#include <iostream>
#include <vector>
#include "book.h"
using namespace std;


class Libraire{

/*----------����---------*/
private:
    float money;//��ͼ��ݵļ�ֵ


protected:
    int num_employe;

public:
    static int num_libraire;//ͼ��ݵ�����
    int num_book;//�������
    vector<Books> books;//ͼ�����ͼ����Ϣ
    

    
private:

void add_money(int num);


/*--------����-------*/

public:
Libraire(int num);
~Libraire();
void add_book(Books book1);//����ͼ�����ͼ��ķ���
Libraire operator +(Libraire myLibraire);//ͼ��ݺϲ�

static void readLibNum();//��̬��Ա����������thisָ��

static void addLibNum();

};
#endif