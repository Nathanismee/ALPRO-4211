#include <iostream>

using namespace std;

struct Bola{
    double jariJari;

};

double hitungVolume(const Bola& bola){
    double phi = 3.14;
    return 4.0/3.0*phi*bola.jariJari*bola.jariJari*bola.jariJari;
}

int main(){
    Bola bola;

    std::cout<<"Masukkan jari jari bola: ";
    std::cin>>bola.jariJari;

    double volume=hitungVolume(bola);
    std::cout<<"Volume vola adalah: "<<volume<<std::endl;

    return 0;
}
