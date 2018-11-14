#pragma once




#include<ctime>
#include<string>
#include"client.h"
#include"author.h"
#include"source.h"
#include "date.h"
//using namespace std;

struct library//struct library
{
    sources_book books;
    sources_magazine magazine;
    sources_newspaper  newspaper;
   client *cl = new client[sizeclient];

    author_book *author_b = new  author_book[size_a];
    author_magazine *author_m= new  author_magazine[sizeauthor];
    author_Newspaper *author_n= new  author_Newspaper[sizeauthor];
void add_author_book()//add book
{
    int new_size=size_a+1;
    author_book *author_new = new author_book[new_size];
 for(int i=0;i<size_a;i++)
 {
     for(int j=0;j<1;j++)
           author_new[i].mybook[j]= author_b[i].mybook[j];
                   author_new[i].name= author_b[i].name;
       author_new[i].surname= author_b[i].surname;
 }
delete []author_b;
  author_b=author_new;
      author_b[new_size-1].name="";
 author_b[new_size-1].surname="";
 author_b[new_size-1].add_book();//call the book add function

 size_a=new_size;
 sizeauthor=new_size;
}
void delete_author_book(int n)//delete author book
{
    int new_size=size_a-1;
    author_book *a_new = new author_book[new_size];
 for(int i=0,k=0;i<size_a-1;k++,i++)
 {
     if(i==n)
     {
         i--;
         n=-1;
         continue;

     }

     for(int j=0;j<1;j++)

           a_new[i].mybook[j]= author_b[k].mybook[j];
                   a_new[i].name= author_b[k].name;
       a_new[i].surname= author_b[k].surname;

 }
delete []author_b;
 author_b=a_new;
 size_a=new_size;
 sizeauthor=new_size;
 size_a=new_size;
 sizeauthor=new_size;
}
void add_author_newspaper()
{
    int new_size=size_a+1;
    author_Newspaper *a_new = new author_Newspaper[new_size];
 for(int i=0;i<size_a;i++)
 {
     for(int j=0;j<1;j++)
           a_new[i].my_newspaper[j]= author_n[i].my_newspaper[j];
                   a_new[i].name= author_n[i].name;
       a_new[i].surname= author_n[i].surname;
 }
delete []author_b;
  author_n=a_new;
      author_n[new_size-1].name="csdc";
 author_n[new_size-1].surname="ccsd";
 author_n[new_size-1].add_book();

 size_a=new_size;
 sizeauthor=new_size;
}
void delete_author_newspaper(int l)
{
    int new_size=size_a-1;
  author_Newspaper *a_new = new author_Newspaper[new_size];
 for(int i=0,k=0;i<size_a-1;k++,i++)
 {
     if(i==l)
     {
         i--;
         l=-1;
         continue;

     }

     for(int j=0;j<1;j++)

           a_new[i].my_newspaper[j]= author_n[k].my_newspaper[j];
                   a_new[i].name= author_n[k].name;
       a_new[i].surname= author_n[k].surname;

 }
delete []author_b;
 author_n=a_new;
 size_a=new_size;
 sizeauthor=new_size;
 size_a=new_size;
 sizeauthor=new_size;

}
};
