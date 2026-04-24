#include <iostream>
#include <string>
#include <cctype>
#include <vector>
#include <algorithm>
#include <limits>

std::string upperLetter(std::string word) {
	std::transform(word.begin(), word.end(), word.begin(), ::toupper);
	return word;
}

int main() {
	int userOpt{ 0 };
	std::string wordGuess, addItem;
	std::vector <std::string> inventory = { };
	bool endProg = false;
	bool wordValidator = false;
	bool equalWord = false;
	bool onlyLetter = false;


	do {

		std::cout << "Selecione uma opcao:" << std::endl
			<< "1 - Mostrar o inventario" << std::endl
			<< "2 - Adicionar item" << std::endl
			<< "3 - Remover item" << std::endl
			<< "4 - Procurar item" << std::endl
			<< "5 - Para encerrar o programa ";
		std::cin >> userOpt;
		

		if (std::cin.fail() || userOpt < 1 || userOpt > 5) {
			std::cin.clear();
			std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
			userOpt = 0;
			std::cout << "\nERRO: Por favor, escolha uma opcao entre 1 e 5\n\n";
		}

		switch (userOpt) {
		case 1:
			if (inventory.empty()) {
				std::cout << "\nSeu inventario esta vazio!\n\n";
			}
			else {
				for (size_t i = 0; i < inventory.size(); i++) {
					std::cout << inventory[i];

					if (i < inventory.size() - 1) {
						std::cout << ", ";
					}else {
						std::cout << ". ";
					}
				}
				std::cout << " \n\n";
			}
			break;
		case 2:
			equalWord = false;

			std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
			do {
				onlyLetter = false;
				std::cout << "Informe o item que deseja adicionar (apenas caracteres): ";
				std::getline(std::cin, addItem);

				for (char c : addItem) {
					if (isdigit(c)) {
						onlyLetter = true;
						std::cout << "Por favor, informe apenas caracteres\n";
						break;
					}
				}
			} while (onlyLetter);

			if (equalWord) {
				std::cout << "\nO item ja esta no inventario\n\n";
			}
			else {
				std::cout << "\nItem adicionado com sucesso\n\n";
				inventory.push_back(upperLetter(addItem));
			}
			break;
		case 3:
			if (inventory.empty()) {
				std::cout << "\nNao ha nada para remover, seu inventario esta vazio!\n\n";
			}
			else {
				inventory.pop_back();
				std::cout << "\nItem removido com sucesso\n\n";
			}
			break;
		case 4:
			wordValidator = false;
			if (inventory.empty()) {
				std::cout << "\nErro: seu inventario esta vazio!\n\n";
			}else {
				std::cout << "Informe o nome do item: ";
				std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
				std::getline(std::cin, wordGuess);
				for (size_t i = 0; i < inventory.size(); i++) {
					if (inventory[i] == upperLetter(wordGuess)) {
						wordValidator = true;
						break;
					}
				}
				if (wordValidator) {
					std::cout << "O item esta no inventario!\n\n";
				}
				else {
					std::cout << "O item nao esta no inventario!\n\n";
				}
			}
			break;
		case 5:
			endProg = true;
			break;
		}

	} while (userOpt != 5);

	std::cout << "\nO programa foi encerrado!";

	return 0;
}