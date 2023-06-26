
#include <iostream>
using namespace std;

struct pedah
{
    string merk,type,harga;
    int tahun;
};
pedah sepeda;

int main()
{
    sepeda.merk = "Wimcycle";
    sepeda.type = "Sepeda BMX";
    sepeda.tahun= 2010;
    sepeda.harga= "3.750.000";
    cout << " merek\t : " << sepeda.merk << endl;
    cout << " type\t : " << sepeda.type << endl;
    cout << " tahun\t : "<< sepeda.tahun << endl;
    cout << " harga\t : "<< sepeda.harga<< endl;
    return 0;
}
