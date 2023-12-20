#include <iostream>
#include <string>

using namespace std;

struct Buku{

    //komponen / member
    string judul, pengarang;
    int tahunTerbit;

    Buku* next;

};


int main(){

    
    //inisialisasi single linked list
    Buku *node1, *node2, *node3;

    node1 = new Buku();
    node2 = new Buku();
    node3 = new Buku();

    //pengisian node 1
    node1->judul = "Matematika";
    node1->pengarang = "Ahli Matematika";
    node1->tahunTerbit = 1995;
    node1->next = node2;
    
    // pengisian node 2
    node1->judul = "Dia adalah kakakku";
    node1->pengarang = "Tere Liye";
    node1->tahunTerbit = 2009;
    node1->next = node3;

     // pengisian node 3
    node1->judul = "Kata";
    node1->pengarang = "Gezz & Ann";
    node1->tahunTerbit = 2018;
    node1->next = NULL;

    // print single linked list

    Buku* cur;
    cur = node1;
    while( cur !=NULL ){
        cout << "Judul Buku : " << cur->judul << endl;
        cout << "Pengarang Buku : " << cur->pengarang << endl;
        cout << "Tahun Terbit Buku : " << cur->tahunTerbit << endl;

        cur = cur->next;

    }



}
