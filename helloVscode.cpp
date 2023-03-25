#include<iostream>
#include<cstring>
#include<float.h>
#include<vector>
#include"book.h"
#include"Libraire.h"

using namespace std;

int Libraire::num_libraire = 0;

//20230325

int main(){
Books book1;//
Books book2;//

//book1
strcpy(book1.title,"C++");
strcpy(book1.author,"Runoob");
strcpy(book1.subject,"编程");
book1.book_id = 123;

//book2
strcpy(book2.title,"css");
strcpy(book2.author,"Runnoob");
strcpy(book2.subject,"编程");
book2.book_id = 23414;


Libraire myLib01(0);//
Libraire myLib02(0);//
Libraire myLib03(0);//

myLib01.add_book(book1);
myLib01.add_book(book2);

myLib02.add_book(book2);

myLib03 = myLib01+myLib02;//
cout<<"图书馆总数量："<<Libraire::num_libraire<<endl;
cout<<"图书总数量："<<myLib03.num_book<<endl;
cout<<"图书分别有：";
for(int i = 0;i < myLib03.books.size();i++){
cout<<myLib03.books[i].title<<",";
}
cout<<endl;

return 0;
}

