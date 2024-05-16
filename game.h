// game.h
#ifndef GAME_H_
#define GAME_H_

#include <iostream>

namespace game {
    // 3 olan kazanır yapıyorum(pc 3 olmasına ragmen cıkmıyo)
char secim_yap() {
	char oyuncu;
	
	do {
		std::cout << "**********************************" << std::endl;
		std::cout << "bir secim yap " << std::endl;
		std::cout << "bir tas icin t yi gir" << std::endl;
		std::cout << "bir kagit icin k yi gir" << std::endl;
		std::cout << "bir makas icin m yi gir" << std::endl;
		std::cout << "**********************************" << std::endl;
		std::cin >> oyuncu;
	} while (oyuncu != 't' && oyuncu != 'k' && oyuncu != 'm');
	return oyuncu;
}
char computer_secim() {
	srand(time(0));
	int numb = rand() % 3 + 1;

	switch (numb) {
	case 1:
		return 't';
	case 2:
		return 'k';
	case 3:
		return 'm';
	}
	return 0;
}
void secim_goster(char oyuncu) {
	switch (oyuncu) {
	case 't':
		std::cout << "tas";
		break;
	case 'k':
		std::cout << "kagit";
		break;
	case 'm':
		std::cout << "makas";
		break;
	}
}
void kazanan_secim(char oyuncu, char computer,int& kazanma_sayisi,int& pc_ksayisi) {
	
	switch (oyuncu) {
	case 't':
		if (computer == 't') {
			std::cout << "##################################berabere !";
		}
		else if (computer == 'k') {
			std::cout << "##################################bilgisayar kazandi !";
			pc_ksayisi++;
		}
		else {
			std::cout << "##################################sen kazandin tebrikler";
			kazanma_sayisi++;
		}
		break;
	case 'k':
		if (computer == 't') {
			std::cout << "##################################sen kazandin tebrikler";
			kazanma_sayisi++;
		}
		else if (computer == 'k') {
			std::cout << "##################################berabere !";
		}
		else {
			std::cout << "##################################bilgisayar kazandi !";
			pc_ksayisi++;
		}
		break;
	case 'm':
		if (computer == 't') {
			std::cout << "##################################bilgisayar kazandi !";
			pc_ksayisi++;
		}
		else if (computer == 'k') {
			std::cout << "##################################sen kazandin tebrikler";
			kazanma_sayisi++;
		}
		else {
			std::cout << "##################################berabere !";
		}
		break;
	}
	std::cout << std::endl;
	
	
}
}

#endif