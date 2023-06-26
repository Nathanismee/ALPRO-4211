#include <iostream>

using namespace std;

struct PersegiPanjang{
    double panjang;
    double lebar;
};

double hitungLuas(const PersegiPanjang& pp){
    return pp.panjang*pp.lebar;
}

int main() {
    PersegiPanjang pp;

    std::cout<< "Masukkan panjang: ";
    std::cin>>pp.panjang;

    std::cout<< "Masukkan lebar: ";
    std::cin>>pp.lebar;

    double luas = hitungLuas(pp);

    std::cout<<"Luas persegi panjang adalah: "<< luas << std::endl;

    return 0;
}
