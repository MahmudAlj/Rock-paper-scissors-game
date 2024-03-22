#include <iostream>
#include <ctime>
#include <string>

char secim_yap();
char computer_secim();
void secim_goster(char secim);
void kazanan_secim(char oyuncu, char computer,int& kazanma_sayisi,int& pc_ksayisi);


int main() {

	char oyuncu;
	char computer;
    char kazanan;
	static int kazanma_sayisi;
	static int pc_ksayisi;

        start:
		oyuncu = game::secim_yap();
		std::cout << "seninin secimin : ";
		game::secim_goster(oyuncu);

		std::cout << std::endl;

		computer = game::computer_secim();
		std::cout << "bilgisayarin secimi : ";
		game::secim_goster(computer);
		std::cout << std::endl;
		game::kazanan_secim(oyuncu,computer,kazanma_sayisi,pc_ksayisi);
	
		if (kazanma_sayisi != 3) {
			goto start;
        }
		std::cout << std::endl;
		std::cout << std::endl;

		if(kazanma_sayisi == 3){
			std::cout << "kazandin " << std::endl;
			std::cout << "tebrikler toplam " << kazanma_sayisi << " kere kazandin" << std::endl; 
			std::cout << "pc toplam " << pc_ksayisi << " kere kazandi" << std::endl;
		}

	return 0;
}


