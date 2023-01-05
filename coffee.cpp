#include <iostream>
#include <string>

int main(int agrc, char** argv) {

    std::cout << "                           Feito por Jeall \n\n\n";

    while (true) {
        std::cout << "Voce esta em uma cafeteria, sao 22hrs. Ha uma maquina de cafe a sua frente. \n";
        char e = 's';
        std::cout << "O que deseja fazer? (s = ir ate a maquina | n = sair do estabelecimento)";
        std::cin >> e;
        std::cout << "\n";
        if (e == 's') {
            std::cout << "A maquina esta a sua frente \n";
            std::cout << "O que deseja fazer? (s = encher a caneca cafe preto | n = encher a caneca com cafe com leite)";
            char r = 's';
            std::cin >> r;
            std::cout << "\n";

            if (r == 's') {
                std::cout << "Voce encheu sua caneca com cafe preto! \n";
            }
            else if (r == 'n') {
                std::cout << "Voce encheu sua caneca com cafe ao leite \n";
            }

            std::cout << "Onde deseja beber o seu cafe? (s = sentar-se em uma mesa | n = ir para casa)";
            char t = 's';
            std::cin >> t;
            std::cout << "\n";

            if (t == 's') {
                std::cout << "Voce sentou-se em uma mesa. (pressione 'b' para beber seu cafe) ";
                char y = 'b';
                std::cin >> y;
                std::cout << "Voce bebeu seu cafe \n";

                std::cout << "Obrigado por me executar :) \n\n";
                break;
            }
            else if (t == 'n') {
                std::cout << "Voce chegou em casa e sentou-se em frente ao seu computador. O visual studio code esta aberto, pois voce estava programando antes de ir comprar seu cafe. \n\n";
                char y = 'b';
                std::cout << "pressione 'b' para beber seu cafe. \n";
                std::cin >> y;
                std::cout << "Voce bebeu seu cafe! \n";

                std::cout << "Obrigado por me executar :) \n\n";
                break;
            }
        }
        else if (e == 'n') {
            std::cout << "Voce foi para casa \n\n";
            break;
        }
    }

    return 0;
}
