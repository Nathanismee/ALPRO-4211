#include <iostream>
using namespace std;

int tambah( int x, int z)
{
    return x+z;
}
int kurang ( int x, int z)
{
    return x-z;
}
int jumlahArray(int arr[], int size) {
    int jumlah = 0;
    for (int i = 0; i < size; i++) {
        jumlah += arr[i];
    }
    return jumlah;
}

float rataArray(int arr[], int size) {
    int jml = 0;
    for (int i = 0; i < size; i++) {
        jml += arr[i];
    }
    return (float) jml / size;
}
int main()
{
    int x,y;
    cout << " masukkan bilangan 1 : ";
    cin >> x;
    cout << " masukkan bilangan 2 : ";
    cin >> y;
    cout << endl;

    cout << " penjumlahan " ;
    cout << tambah(x,y) << endl;
    cout << endl;

    cout << " pengurangan " ;
    cout << kurang(x,y) << endl;
    cout << endl;

    cout << " penjumlahan Array " << endl;
    int arr[] = {3, 2, 4, 9, 7};
    int size = sizeof(arr) / sizeof(arr[0]);
    int jumlah = jumlahArray(arr, size);
    cout << "Hasil penjumlahan array : " << jumlah << endl;
    cout << endl;

    cout << " rata-rata Array " << endl;
    float avg = rataArray(arr, size);
    cout << "Nilai rata-rata array : " << avg << endl;
    cout << endl;
    return 0;
}
