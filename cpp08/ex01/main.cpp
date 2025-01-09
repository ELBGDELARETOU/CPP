#include "Span.hpp"

int main() {
    try {
        Span sp(5);

        sp.addNumber(10);
        sp.addNumber(20);
        sp.addNumber(30);
        sp.addNumber(40);
        sp.addNumber(50);

        // Essayer d'ajouter un nombre alors que la capacité est pleine (ce qui doit lancer une exception)
        try {
            sp.addNumber(60);
        } catch (const std::overflow_error &e) {
            std::cout << "Erreur d'ajout de nombre : " << e.what() << std::endl;
        }

        // Tester le plus grand span
        sp.longestSpan();

        // Tester le plus petit span
        sp.shortestSpan();

    } catch (const std::logic_error &e) {
        std::cout << "Erreur logique : " << e.what() << std::endl;
    }

    return 0;
}