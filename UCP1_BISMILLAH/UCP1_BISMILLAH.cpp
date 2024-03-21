//Type 1
//1.Algoritma Insertion Sort membandingkan elemen dengan cara membandingkan elemen saat ini dengan elemen di sebelah kirinya.
//Perbandingan terus dilakukan sampai elemen saat ini menemukan posisinya yang tepat dalam array yang sudah terurut.
//Insertion Sort melakukan penukaran dengan cara elemen saat ini lebih kecil dari elemen di sebelah kirinya, maka elemen-elemen di sebelah kanan elemen saat ini digeser satu posisi ke kanan.
//Elemen saat ini kemudian disisipkan ke dalam posisi yang kosong.

//2.Algoritma Selection Sort membandingkan elemen dengan cara membandingkan elemen saat ini dengan semua elemen di sebelah kanannya.
//Menemukan elemen terkecil di antara semua elemen yang dibandingkan.
//Algoritma Selection Sort melakukan penukaran dengan cara elemen terkecil yang ditemukan ditukar dengan elemen saat ini.

//3.Cara untuk mengetahui jumlah langkah yang dilakukan dalam algoritma sortir yaitu dengan :
//a.Analisis kompleksitas waktu: Setiap algoritma sortir memiliki rumus kompleksitas waktu yang menunjukkan berapa banyak langkah yang dibutuhkan dalam kondisi tertentu.
//b.Menghitung langkah secara manual: Untuk algoritma sederhana, seperti Insertion Sort dan Selection Sort, kita dapat menghitung langkah secara manual dengan melacak berapa kali perbandingan dan penukaran dilakukan.
//c.Menggunakan alat bantu. Ada beberapa alat bantu yang dapat digunakan untuk menghitung jumlah langkah dalam algoritma sortir, seperti debugger dan profiler.

#include <iostream>
using namespace std;

int lia[62];
int n;

void input() {
    while (true)
    {
        cout << "Masukkan Jumlah Data Pada lia : ";
        cin >> n;

        if (n <= 62)
            break;
        else {
            cout << "\n lia yang anda masukkan maksimal 62 Elemen. \n";
        }
    }

    cout << endl;
    cout << "============================================================" << endl;
    cout << "Masukan Element lia" << endl;
    cout << "============================================================" << endl;

    for (int i = 0; i < n; i++)
    {
        cout << "Data Ke-" << (i + 1) << ": ";
        cin >> lia[i];
    }
}



void insertionsort() {

    int temp;
    int i, j;

    for (i = 1; i <= n - 1; i++) {
        temp = lia[i];

        j = i - 1;

        while (j >= 0 && lia[j] > temp)

        {
            lia[j + 1] = lia[j];
            j--;
        }

        lia[j + 1] = temp;

        cout << "\nPass " << i << ": ";
        for (int k = 0; k < n; k++) {
            cout << lia[k] << " ";
        }
    }
}

void display() {
    cout << endl;
    cout << "\n============================================================" << endl;
    cout << "Element lia yang telah tersusun" << endl;
    cout << "================================================================" << endl;

    for (int j = 0; j < n; j++) {
        cout << lia[j] << endl;
    }
    cout << endl;
}

int main()
{
    input();
    insertionsort();
    display();

}

    


