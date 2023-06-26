
#include <iostream>
using namespace std;

struct pedah
{
    string merk,type,harga;
    int tahun;
};

int main()
{
    pedah sepeda;
    pedah *psepeda = &sepeda;

    psepeda->merk = "Wimcycle";
    psepeda->type = "Sepeda BMX";
    psepeda->tahun= 2010;
    psepeda->harga= "3.750.000";

    cout << " merek\t : " << psepeda->merk << endl;
    cout << " type\t : " << psepeda->type << endl;
    cout << " tahun\t : "<< psepeda->tahun << endl;
    cout << " harga\t : "<< psepeda->harga<< endl;
    return 0;
}
