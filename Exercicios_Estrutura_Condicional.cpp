#include "Exercicios_Estrutura_Condicional.h"
#include <iostream>
#include <cmath>
#include <ratio>
using namespace std;

void Exercicios_Estrutura_Condicional::exer1() {
    float nota_trab;
    float aval_sem;
    float exame;
    float media;
    std::cout << "insira a nota de trabalho" << endl;
    std::cin >> nota_trab;
    std::cout << "agora insira a nota da avaliação semestral" << endl;
    std::cin >> aval_sem;
    std::cout << "por ultimo a nota do exame final";
    std::cin >> exame;
    media = (nota_trab*2+aval_sem*3+exame*5)/10;
    if (media >= 8.0 && media <= 10.0) {
        cout << "Média ponderada: " << media << endl;
        cout << "Conceito: A" << endl;
    }
    if (media >= 7.0 && media < 8.0) {
        cout << "Média ponderada: " << media << endl;
        cout << "Conceito: B" << endl;
    }
    if (media >= 6.0 && media < 7.0) {
        cout << "Média ponderada: " << media << endl;
        cout << "Conceito: C" << endl;
    }
    if (media >= 5.0 && media < 6.0) {
        cout << "Média ponderada: " << media << endl;
        cout << "Conceito: D" << endl;
    }
    if (media >= 0.0 && media < 5.0) {
        cout << "Média ponderada: " << media << endl;
        cout << "Conceito: E" << endl;
    }
    if (media < 0.0 || media > 10.0) {
        cout << "Entrada inválida. As notas devem estar entre 0 e 10." << endl;
    }
    return;
}

