#include <iostream>

using namespace std;

struct Kerucut{
    double jariJari;
    double tinggi;

};

double hitungVolume(const Kerucut& kerucut){
    double phi = 3.14;
    return 1.0/3.0*phi*kerucut.jariJari*kerucut.jariJari*kerucut.tinggi;
}

int main(){
    Kerucut kerucut;

    std::cout<<"Masukkan jari jari kerucut: ";
    std::cin>>kerucut.jariJari;

    std::cout<<"masukkan tinggi kerucut: ";
    std::cin>>kerucut.tinggi;

    double volume=hitungVolume(kerucut);
    std::cout<<"Volume kerucut adalah: "<<volume<<std::endl;

    return 0;
}
