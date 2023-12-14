#include <iostream>

using namespace std;

int main() {

    // kullanicidan 2 sayi alip ortalamasını bulduran programi yazin
    int sayi1, sayi2;
    double ort;

    cout << "Sayi1 gir:";
    cin >> sayi1;

    cout << "Sayi2 gir:";
    cin >> sayi2;

    ort = (double) (sayi1 + sayi2) / 2; // double ondalik olmasi icin.
    cout << "ort = " << ort << endl;

    // vize ve final ort hesaplayan program
    int vize, final;
    double avg;

    cout << "vize notu:";
    cin >> vize;

    cout << "final notu:";
    cin >> final;

    avg = (vize * 0.3) + (final * 0.7);

    cout << "ortalamaniz " << avg;

    if (avg >= 60 && final >= 60) {
        cout << "\ntebrikler! gectiniz";
    } else {
        cout << "\nsinifta kaldiniz!, ortalamaniz ya da final notunuz 60 dan dusuk";
    }

    // kullanicinin girdigi sayinin, pozitif mi negatif mi , sifir mi oldugunu bulan program
    int number;

    cout << "\nsayiyi girin:";
    cin >> number;

    if (number < 0) {
        cout << "sayi negatif";
    } else if (number > 0) {
        cout << "sayi pozitif";
    } else {
        cout << "sayi sifir";
    }

    // kullanicinin girdigi sayi tek mi cift mi, bunu bulan program
    int input;
    cout << "\nsayi girin tek mi cift mi soyleyeyim:";
    cin >> input;

    if (number % 2 == 0)
        cout << "sayi cift";
    else cout << "sayi tek";

    // kullancidan yas degeri alin
    // yas < 13 ise cocuk
    // 13 <= yas =< 19 ise ergen
    // yas >= 20 ise yetiskin
    int age;

    cout << "\nyas gir:";
    cin >> age;

    if (age < 13) {
        cout << "cocuk";
    } else if (age >= 20) {
        cout << "yetiskin";
    } else if (age >= 13 && age <=19) {
        cout << "ergen";
    }

    // kullanicidan not isteyin
    // 90 <= n <= 100   -> A
    // 80 <= n < 90     -> B
    // 70 <= n < 80     -> C
    // 60 <= n < 70     -> D
    // 0 <= n < 60      -> F
    // bunun disindakiler  -> Hatali not girisi yapildi
    int grade;

    cout << "\nnot girin:";
    cin >> grade;

    if (grade >= 90 && grade <= 100) {
        cout << "A";
    } else if (grade >= 80 && grade < 90) {
        cout << "B";
    } else if (grade >= 70 && grade < 80) {
        cout << "C";
    } else if (grade >= 60 && grade < 70) {
        cout << "D";
    } else if (grade < 60 && grade >= 0) {
        cout << "F";
    } else cout << "Hatali not girisi yapildi.";

    // ayni sorunun switch ile yapimi.
    int grade2;

    cout << "\nInput grade (switch):";
    cin >> grade2;

    switch (grade2) {

            case 90 ... 100 :
            cout << "A";
            break;

            case 80 ... 89 :
            cout << "B";
            break;

            case 70 ... 79 :
            cout << "B";
            break;

            case 60 ... 69 :
            cout << "C";
            break;

            case 0 ... 59 :
            cout << "D";
            break;

        default: cout << "Grade input is wrong";

    }

    return 0;
}
