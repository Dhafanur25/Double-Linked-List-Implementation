#include "DLL.h"

void createList(List &L){
    first(L) = nil;
    last(L) = nil;
}

adr newElement(infotype x){
    adr P = new element;
    info(P) = x;
    next(P) = nil;
    prev(P) = nil;
    return P;
}

infotype newInfotype(int noBarang,string namaBarang,string gudang,float tagihan){
    DataNasabahAsuransiBarang Data;
    Data.noBarang = noBarang;
    Data.namaBarang = namaBarang;
    Data.gudang = gudang;
    Data.tagihan = tagihan;
    return Data;
}

void showAllData(List L){
    if (first(L) != nil){
        adr P = first(L);
        while (P != nil){
            cout << "Nomor Asuransi Barang  : "<<info(P).noBarang<<endl;
            cout << "Nama Barang            : "<<info(P).namaBarang<<endl;
            cout << "Nama Gudang            : "<<info(P).gudang<<endl;
            cout << "Tagihan                : "<<info(P).tagihan<<endl<<endl;
            P = next(P);
        }
    }else{
        cout << "List Kosong" << endl;
    }
}

void insertFirst(List &L, adr P){
    if (first(L) == nil && last(L) == nil) {
        first(L) = P;
        last(L) = P;
    } else {
        next(P) = first(L);
        prev(first(L)) = P;
        first(L) = P;
    }
}

void reverseList(List &L){
    if(first(L) == nil) {
        cout << "List Kosong";
    } else{
        adr temp;
        adr P = first(L);
        while (P != nil){
            temp = prev(P);
            prev(P) = next(P);
            next(P) = temp;
            P = prev(P);
        }
        if (temp != nil){
            first(L) = prev(temp);
        }
    }
}

float range(List L){
    float most = 0;
    float least = info(first(L)).tagihan;
    adr P = first(L);

    while (P != nil) {
        if (info(P).tagihan > most) {
            most = info(P).tagihan;
        }
        if (info(P).tagihan < least) {
            least = info(P).tagihan;
        }
        P = next(P);
    }
    return most-least;

}

int menu(){
    cout << "\tMenu" << endl;
    cout << "1. Menambah N data baru" << endl;
    cout << "2. Menampilkan semua data" << endl;
    cout << "3. Memutarbalikkan list data" << endl;
    cout << "4. Menampilkan selisih tagihan terbesar dan terkecil" << endl;
    cout << "0. Exit" << endl;
    cout << "Masukan Pilihan : ";int x;cin>>x;return x;
}
