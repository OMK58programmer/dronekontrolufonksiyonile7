#include <iostream>
#include <string>
using namespace std;

string ucusGuvenligiKontrol(string droneIsmi, int yuk, int hiz, int yukseklik) {
    int harcananpil = (hiz / 10) * 5;
    int pil = 100 - harcananpil;
    if (pil < 0) pil = 0;

    cout << "Drone: " << droneIsmi << endl;
    cout << "Pil Seviyesi: " << pil << endl;
    cout << "Yük: " << yuk << endl;
    cout << "Hız: " << hiz << endl;
    cout << "Yükseklik: " << yukseklik << endl;
    if (hiz > 10) {
        cout << "Uyarı: Hız sınırı aşıldı!" << endl;
    }

    if (yuk > 500) {
        return "Ağır yük";
    }
    if (pil < 30) {
        return "Pil seviyesi düşük";
    }
    if (yukseklik < 200) {
        return "Radar dışı";
    }
    if (hiz > 70) {
        return "Hız sınırı aşılmış";
    }
    return "Uçuş güvenli!";
}

int main() {
    string ismler[7] = { "drone1", "drone2", "drone3", "drone4", "drone5", "drone6", "drone7" };
    int yukler[7]    = { 350, 600, 200, 450, 500, 100, 400 };
    int hizlar[7]    = { 40, 30, 80, 20, 50, 60, 155 };
    int yukseklik[7] = { 50, 70, 150, 10, 210, 180, 90 };

    for (int i = 0; i < 7; i++) {
        cout << ucusGuvenligiKontrol(ismler[i], yukler[i], hizlar[i], yukseklik[i]) << endl << endl;
    }
    return 0;
}
