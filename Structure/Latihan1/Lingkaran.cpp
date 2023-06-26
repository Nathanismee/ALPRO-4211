
#include <iostream>

using namespace std;

struct Lingkaran{
    double jariJari;

};

double hitungLuas(const Lingkaran& lingkaran){
    return 22/7*lingkaran.jariJari*lingkaran.jariJari;
}

int main(){
    Lingkaran lingkaran;

    std::cout<<"masukkan jari ajri lingkaran: ";
    std::cin>>lingkaran.jariJari;

    double luas=hitungLuas(lingkaran);
    std::cout<<"Luas lingkaran adalah: "<<luas<<std::endl;

    return 0;
}
