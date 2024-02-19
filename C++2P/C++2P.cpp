#include <iostream>

const int ROWS = 3;
const int COLS = 5;

int main() {
    setlocale(LC_ALL, "Russian");
    float matrix[ROWS][COLS];

    std::cout << "Введите элементы матрицы " << ROWS << "x" << COLS << ":\n";

    for (int i = 0; i < ROWS; ++i) {
        std::cout << "Введите элементы для строки " << i + 1 << " через пробел: ";
        for (int j = 0; j < COLS; ++j) {
            std::cin >> matrix[i][j]; 
        }
    }

    std::cout << "\n ______________________________\n\nСредние арифметические элементов строк:\n";
    for (int i = 0; i < ROWS; ++i) {
        float sum = 0;
        for (int j = 0; j < COLS; ++j) {
            sum += matrix[i][j]; 
        }
        float average = sum / COLS; 
        std::cout << "Строка " << i + 1 << ": " << average << std::endl; 
    }

    return 0;
}
