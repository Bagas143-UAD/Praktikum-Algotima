#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    string nama, bensin;
    double pertalite = 7000, pertamax = 9000, total;
    double liter;

    cout<<"Masukkan nama pelanggan : ";
    getline(cin,nama);
    cout<<"Pilih jenis bensin (pertalite/pertamax) : ";
    cin>>bensin;
    cout<<"Masukkan jumlah liter : ";
    cin>>liter;

    if(bensin=="pertalite"){
        total=liter*pertalite;
    } 
	else if(bensin=="pertamax") {
        total=liter*pertamax;
    } 
	else {
        cout<<"Jenis bensin tidak ada"<<endl;
        return 1;
    }

    cout<<"\n===== STRUK PEMBELIAN =====\n";
    cout<<"Nama Pelanggan : "<<nama<<endl;
    cout<<"Jenis Bensin   : "<<bensin<<endl;
    cout<<"Total Liter    : "<<liter<<"L\n";
    cout<<"Total Harga    : Rp."<<total<<endl;
    cout<<"===========================";
    cout<<endl;

    return 0;
}

