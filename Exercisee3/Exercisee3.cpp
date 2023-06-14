
#include <iostream>
#include <string>
#include <vector>

class Penerbit;

class Pengarang {
public:
    Pengarang(const std::string& nama) : namaPengarang(nama) {}

    std::string getNamaPengarang() const {
        return namaPengarang;
    }

    void tambahkanPenerbit(Penerbit* penerbit) {
        penerbitPengarang.push_back(penerbit);
    }

    void tambahkanBuku(const std::string& judul) {
        bukuPengarang.push_back(judul);
    }

    void tampilkanPenerbit() const {
        std::cout << "Daftar penerbit yang diikuti \"" << namaPengarang << "\":" << std::endl;
        for (const auto& penerbit : penerbitPengarang) {
            std::cout << penerbit->getNamaPenerbit() << std::endl;
        }
    }

    void tampilkanBuku() const {
        std::cout << "Daftar buku yang dikarang \"" << namaPengarang << "\":" << std::endl;
        for (const auto& buku : bukuPengarang) {
            std::cout << buku << std::endl;
        }
    }

private:
    std::string namaPengarang;
    std::vector<Penerbit*> penerbitPengarang;
    std::vector<std::string> bukuPengarang;
};

class Penerbit {
public:
    Penerbit(const std::string& nama) : namaPenerbit(nama) {}

    std::string getNamaPenerbit() const {
        return namaPenerbit;
    }

private:
    std::string namaPenerbit;
};

class Buku {
public:
    Buku(const std::string& judul) : judulBuku(judul) {}

    std::string getJudulBuku() const {
        return judulBuku;
    }

private:
    std::string judulBuku;
};

int main() {
    // Membuat obyek penerbit
    Penerbit penerbit1("Gama Press");
    Penerbit penerbit2("Intan Pariwara");

    //Membuat obyek pengarang
    Pengarang pengarang1("Joko");
    Pengarang pengarang2("Lia");
    Pengarang pengarang3("Giga");
    Pengarang pengarang4("Asroni");

    //Menambahkan relasi antara penerbit dan pengarang
    pengarang1.tambahkanPenerbit(&penerbit1);
    pengarang2.tambahkanPenerbit(&penerbit1);
    pengarang3.tambahkanPenerbit(&penerbit1);
    pengarang3.tambahkanPenerbit(&penerbit2);
    pengarang4.tambahkanPenerbit(&penerbit2);

    // Membuat obyek buku
    Buku buku1("Fisika");
    Buku buku2("Algoritma");
    Buku buku3("Basisdata");
    Buku buku4("Dasar Pemrograman");
    Buku buku5("Matematika");

    return 0


