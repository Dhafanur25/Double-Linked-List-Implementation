#include "DLL.h"

int main(){
    List L;
    int pilih;
    char subPilih;

    createList(L);
    pilih = menu();

    while (pilih != 0){
        if (pilih == 1){
            system("cls");
            int i=1,n;
            cout << "Jumlah data yang akan ditambahkan = ";cin >> n;
            cout << endl;
            while(i <= n){
                int noBarang;
                string namaBarang, gudang;
                float tagihan;

                cout << "Input Data ke-" << i << endl;
                cout << "Nomor Asuransi Barang  : ";cin >> noBarang;
                cout << "Nama Barang            : ";cin >> namaBarang;
                cout << "Nama Gudang            : ";cin >> gudang;
                cout << "Tagihan                : ";cin >> tagihan;

                insertFirst(L,newElement(newInfotype(noBarang,namaBarang,gudang,tagihan)));
                cout << endl;
                i++;
            }

        }else if (pilih == 2){
            system("cls");
            cout << "Menampilkan semua data: " << endl;
            showAllData(L);

        }else if (pilih == 3){
            system("cls");
            cout << "Hasil balik data List: "<< endl;
            reverseList(L);
            showAllData(L);
            cout << endl;

        }else if (pilih == 4){
            system("cls");
            float selisih = range(L);
            cout << "Selisih tagihan terbesar dan terkecil adalah: "<< selisih << endl;

        }else{
            cout<<"\nPilihan tidak valid"<<endl;

        }
        cout << "Kembali ke menu utama? (Y/N): ";cin>> subPilih;
        if (subPilih == 'Y'){
            system("cls");
            pilih = menu();

        }else{
            cout<<"\nANDA TELAH KELUAR DARI PROGRAM"<<endl;
            return 0;
        }
    }
    cout<<"\nANDA TELAH KELUAR DARI PROGRAM"<<endl;return 0;
}
