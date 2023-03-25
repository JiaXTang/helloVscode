#include<iostream>
#include<cstring>
#include<float.h>
#include<vector>
#include"book.h"
#include"Libraire.h"

using namespace std;

int Libraire::num_libraire = 0;

int main(){
Books book1;//定义结构体类型Books的变量book1
Books book2;//定义结构体类型Books的变量book2

//book1详述
strcpy(book1.title,"C++教程");
strcpy(book1.author,"Runoob");
strcpy(book1.subject,"编程语言");
book1.book_id = 123;

//book2详述
strcpy(book2.title,"css教程");
strcpy(book2.author,"Runnoob");
strcpy(book2.subject,"编程语言");
book2.book_id = 23414;


Libraire myLib01(0);//创建图书馆1
Libraire myLib02(0);//创建图书馆2
Libraire myLib03(0);//创建图书馆2

myLib01.add_book(book1);
myLib01.add_book(book2);

myLib02.add_book(book2);

myLib03 = myLib01+myLib02;//两图书馆合并
cout<<"图书馆总数为："<<Libraire::num_libraire<<endl;
cout<<"图书馆3内的图书总数为："<<myLib03.num_book<<endl;
for(int i = 0;i < myLib03.books.size();i++){
cout<<"图书馆3内的图书分别为："<<myLib03.books[i].title<<",";
}
cout<<endl;

return 0;
}

