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

void Exercicios_Estrutura_Condicional::exer2() {
    float n1,n2,n3;
    cout << "adicione a sua primeira nota";
    cin >> n1;
    cout << "agora a segunda nota";
    cin >> n2;
    cout << "terceira e ultima nota";
    cin >> n3;
    float media = (n1+n2+n3)/3;
    if (media < 3) {
        cout << "Voce foi reprovado, sua media foi:",media <<endl;
        return;
    }
    if (media < 6) {
        cout << "Sera necessario realizar O EXAME, sua media foi:",media <<end;
    }
    else {
        "Voce Foi Aprovado!, Parabens!";
    }
}
void Exercicios_Estrutura_Condicional::exer3() {
    float x,y;
    cout << "adicione o primeiro valor" <<endl;
    cin >> x;
    cout << "agora adicione o segundo valor" << endl;
    cin >> y;

    if (x > y) {
        cout << "o maior valor é:"<< x <<endl;
    }
    /*if (y > x) {
        cout << "o maior valor é:"<< y <<endl;
    }*/
    else {
        cout << "o maior valor é:"<< y <<endl;
    }
}
void Exercicios_Estrutura_Condicional::exer4() {
    float x,y,z;
    float menor,maior;
    cout << "adicione o primeiro valor" <<endl;
    cin >> x;
    cout << "agora adicione o segundo valor" << endl;
    cin >> y;
    cout << "agora adicione o ultimo valor valor" << endl;
    cin >> z;
    maior = x;
    menor = x;
    if (y < menor) {
        menor = y;
    }
    if (z < menor) {
        menor = z;
    }
    if (y > maior) {
        maior = y;
    }
    if (z > maior) {
        maior = z;
    }
    float centro = x+y+z-maior-menor;
    cout << "Em Ordem Crescente os Valores"<<endl<<menor<<endl<<centro<<endl<<maior<<endl;
}
void Exercicios_Estrutura_Condicional::exer5() {
    float num1,num2,num3,num4,aux;
    cout<< "digite 3 numeros em ordem crescente e um qualquer após"<<endl;
    cout << "primeiro numero"<<endl;
    cin>> num1;
    cout<< "segundo numero"<<endl;
    cin >> aux;
    if (aux < num1) {
        cout<< "esse numero não é valido! e Menor que o anterior, coloque em ordem crescente"<<endl;
        return;
    } else {
        num2 = aux;
    }
    cout<< "terceiro numero"<<endl;
    cin >> aux;
    if (aux < num2) {
        cout<< "esse numero não é valido! e Menor que o anterior, coloque em ordem crescente"<<endl;
        return;
    } else {
        num3 = aux;
    }
    cout<<"agora o quarto numero a sua escolha"<<endl;
    cin>> num4;
    if (num4 < num1) {
        cout<< "Em Ordem Decrescente"<<endl<<num3<<endl<<num2<<endl<<num1<<endl<<num4<<endl;
    }
    if (num4 > num1 || num4 < num2) {
        cout<< "Em Ordem Decrescente"<<endl<<num3<<endl<<num2<<endl<<num4<<endl<<num1<<endl;
    }
    if (num4 > num2 || num4 < num3) {
        cout<< "Em Ordem Decrescente"<<endl<<num3<<endl<<num4<<endl<<num2<<endl<<num1<<endl;
    }
    if (num4 > num3) {
        cout<< "Em Ordem Decrescente"<<endl<<num4<<endl<<num3<<endl<<num2<<endl<<num1<<endl;
    }
}


