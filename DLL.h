#ifndef DLL_H_INCLUDED
#define DLL_H_INCLUDED

#include <iostream>
using namespace std;

#define info(P) (P)->info
#define next(P) (P)->next
#define prev(P) (P)->prev
#define first(L) ((L).first)
#define last(L) ((L).last)
#define nil NULL

typedef struct DataNasabahAsuransiBarang infotype;
typedef struct element *adr;

struct DataNasabahAsuransiBarang {
    int noBarang;
    string namaBarang;
    string gudang;
    float tagihan;
};

struct element {
    infotype info;
    adr next;
    adr prev;
};

struct List{
    adr first;
    adr last;
};

void createList(List &L);
adr newElement(infotype x);
infotype newInfotype(int noBarang,string namaBarang,string gudang,float tagihan);
void showAllData(List L);
void reverseList(List &L);
void insertFirst(List &L,adr p);
float range(List L);
int menu();

#endif // DLL_H_INCLUDED
