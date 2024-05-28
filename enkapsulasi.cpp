#include<iostream>
using namespace std;
 class remotLampu {
    private:
        string saklarNo[10];
    public:
        void setSaklarNo(int i, string value) {
            saklarNo[i] = value;
        }
        string getSaklarNo(int i) {
            return saklarNo[i];
        }
 };

 int main() {
    remotLampu lampuRumah;

    lampuRumah.setSaklarNo(0, "Lampu Teras Rumah");
    lampuRumah.setSaklarNo(1, "Lampu Ruang Tamu ");
    lampuRumah.setSaklarNo(2, "Lampu Kamar Tidur");
    lampuRumah.setSaklarNo(3, "Lampu Dapur");

    cout << lampurRumah.getsaklarNo(0) << endl;
    cout << lampurRumah.getsaklarNo(1) << endl;
    cout << lampurRumah.getsaklarNo(2) << endl;
    cout << lampurRumah.getsaklarNo(3) << endl;

 }