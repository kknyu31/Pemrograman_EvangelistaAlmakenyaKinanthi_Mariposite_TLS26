#include <iostream>

using namespace std;

int main() {
    int N, K;
    // Input jumlah astronot dan nilai awal K
    cout << "Masukkan jumlah astronot (N): ";
    cin >> N;
    cout << "Masukkan nilai awal K: ";
    cin >> K;

    // Validasi input
    if (N <= 0 || K <= 0) {
        cout << "Jumlah astronot dan nilai K harus lebih dari 0!" << endl;
        return 0;
    }

    // Isi array dengan nomor unik astronot (1 hingga N)
    int astronot[1000];
    for (int i = 0; i < N; i++) {
        astronot[i] = i + 1;
    }

    int idx = 0;

    cout << "\nUrutan Astronot Tereliminasi:" << endl;

    // Loop hingga tersisa 1 astronot
    while (N > 1) {
        idx = (idx + K - 1) % N;
        int astronot_tereliminasi = astronot[idx];
        cout << astronot_tereliminasi << " ";

        // Update nilai K sesuai nomor astronot (genap/ganjil)
        if (astronot_tereliminasi % 2 == 0) {
            K = K + 2;
        } else {
            K = K - 1;
        }
        // Batas minimal K adalah 2
        if (K < 2) {
            K = 2;
        }
        // Geser sisa elemen ke kiri
        for (int i = idx; i < N - 1; i++) {
            astronot[i] = astronot[i + 1];
        }

        N--;
    }

    cout << "\n\nAstronot Terakhir yang Bertahan: " << astronot[0] << endl;

    return 0;
}