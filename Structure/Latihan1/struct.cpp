#include <iostream>

using namespace std;

struct hitung {
    int x, y,jml;
    };

int main(){
    struct hitung jumlah;
    jumlah.x=10;
    jumlah.y=20;
    jumlah.jml=jumlah.x+jumlah.y;
    printf("hasil%d+%d=%d",jumlah.x,jumlah.y,jumlah.jml);
    }
