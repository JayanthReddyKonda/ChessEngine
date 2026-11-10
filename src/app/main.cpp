// main.cpp : Defines the entry point for the application.

#include <iostream>

#include "../chess/types.h"


int main()
{
    const chess::Color whiteOpposite = chess::opposite_color(chess::Color::White);
    const chess::Color blackOpposite = chess::opposite_color(chess::Color::Black);

    std::cout << "Opposite of White: " << (whiteOpposite == chess::Color::Black ? "Black" : "White") << '\n';
    std::cout << "Opposite of Black: " << (blackOpposite == chess::Color::Black ? "Black" : "White") << '\n';

    return 0;
}
