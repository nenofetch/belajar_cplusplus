#include <iostream>
using namespace std;
int main() {

string nama,jk,tl,tgl,status;

cout << "Masukkan Nama Lengkap anda = ";
getline(cin,nama);
cout << "Masukkan Jenis Kelamin anda = ";
getline(cin,jk);
cout << "Masukkan Tempat Lahir anda = ";
getline(cin,tl);
cout << "Masukkan Tanggal Lahir anda = ";
getline(cin,tgl);
cout << "Masukkan Status anda = ";
getline(cin,status);

cout << "=============Biodata=============" << endl;
cout << "====Nama\t\t\t= " << nama << endl;
cout << "====Jenis Kelamin\t\t= " << jk << endl;
cout << "====Tempat Lahir\t\t= " << tl << endl;
cout << "====Tanggal Lahir\t\t= " << tgl << endl;
cout << "====Status\t\t\t= " << status << endl;

return 0;
}
