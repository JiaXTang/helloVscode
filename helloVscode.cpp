#include<iostream>
#include<cstring>
#include<float.h>
#include<vector>
#include"book.h"
#include"Libraire.h"

using namespace std;

int Libraire::num_libraire = 0;

int main(){
Books book1;//����ṹ������Books�ı���book1
Books book2;//����ṹ������Books�ı���book2

//book1����
strcpy(book1.title,"C++�̳�");
strcpy(book1.author,"Runoob");
strcpy(book1.subject,"�������");
book1.book_id = 123;

//book2����
strcpy(book2.title,"css�̳�");
strcpy(book2.author,"Runnoob");
strcpy(book2.subject,"�������");
book2.book_id = 23414;


Libraire myLib01(0);//����ͼ���1
Libraire myLib02(0);//����ͼ���2
Libraire myLib03(0);//����ͼ���2

myLib01.add_book(book1);
myLib01.add_book(book2);

myLib02.add_book(book2);

myLib03 = myLib01+myLib02;//��ͼ��ݺϲ�
cout<<"ͼ�������Ϊ��"<<Libraire::num_libraire<<endl;
cout<<"ͼ���3�ڵ�ͼ������Ϊ��"<<myLib03.num_book<<endl;
for(int i = 0;i < myLib03.books.size();i++){
cout<<"ͼ���3�ڵ�ͼ��ֱ�Ϊ��"<<myLib03.books[i].title<<",";
}
cout<<endl;

return 0;
}

