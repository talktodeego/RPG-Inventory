# RPG Inventory

### Language / Idioma
* [English](#english)
* [Português](#portugues)

---

## English

This is simulate a RPG inventory, where the user can add, delete, check the inventory and close the program.

## About the project

Working in this project, it was the first time that I used vectors and functions like push_back(), pop_back(), empty(), ignore() and others.

I add checking mechanism in case the user try to add something like "sword123" the program only accept words, like "SWORD OF FIRE". Also I add mechanism like:
- If user type a word or an option that doesn't have in the menu, the program returns an error message
- If user tries to check the inventory and is empty, the program returns a message informing that its empty
- If user type numbers instead words when adding items, the program will return an error message
- If user tries to remove an item from a empty vector, the program will return an error message


**So, the program works like:**
1 - User can check the inventory. If the inventory is empty the program returns and error message
2 - User can add items to the inventory, user can type item name like "sword of fire", the program will transform the input in uppercase. If the user type something like "sword123" the program returns a error message
3 - User can remove the last item of the inventory. If the inventory is empty the program returns and error message
4 - User can search for an item in the inventory, if user type "SWORD OF FIRE" and this item is on the inventory the program will return a success message, if not will return a error message.
5 - User can close the program.

## Techs

* **Language:** C++

* **IDE:** Visual Studio.

* **VCS:** Git.

## How to run

1. Clone the repo:
`git clone https://github.com/talktodeego/RPG-Inventory.git`

2. Compile the code:
`g++ rpgInventory.cpp -o rpgInventory`

3. Execute the program:
`./rpgInventory`

[**Developed by**: Diego Boscolo](https://www.linkedin.com/in/diegoboscolo)

---

## Português

Esse programa simula um inventário de RPG, onde o usuário pode add, deletar, check e procurar por items.

## Sobre o projeto

Esse foi um programa que eu não queria deixar espaço para erros, foi a primeira vez que user vetores and funções como push_back(), pop_back(), empty(), ignore() e outras.

Também adicionei alguns mecanismos de checagem como, se o usuário digitar "espada123" o programa irá retornar um error informando que só serão aceitas palavras de A-Z e também palavras compostas. Outros mecanismos que eu adicionem foram:
- Se o usuário digitar uma palavra ou uma opção que não existe no menu, o programa retorna uma mensagem de erro
- Se o usuário tenta checar o inventário e ele esta vazio, o programa retorna uma mensagem informando que esta vazio e devolve o jogador para o menu inicial
- Se o usuário digitar números ao invés de caracteres quando tentar adicionar ou procurar por itens, o programa retorna uma mensagem de erro.
- Se o usuário tenta deletar um item de um vetor vazio, o programa retorna uma mensagem de erro

## Tecnologias

* **Linguagem:** C++

* **IDE:** Visual Studio.

* **Ferramenta de versionamento:** Git.

## 🎮 Como Executar

1. Clone o repositório:
`git clone https://github.com/talktodeego/RPG-Inventory.git`

2. Compile o código:
`g++ rpgInventory.cpp -o rpgInventory`

3. Execute o programa:
`./rpgInventory`

[**Desenvolvido por**: Diego Boscolo](https://www.linkedin.com/in/diegoboscolo)