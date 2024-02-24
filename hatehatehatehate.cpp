#include <iostream>
#include <Windows.h>

const int ROWS = 3;
const int COLS = 5;

int main() {
    SetConsoleCP(1251);
    setlocale(LC_ALL, "Russian");
    float matrix[ROWS][COLS];

    // Ввод элементов матрицы с клавиатуры
    std::cout << "Введите элементы матрицы:\n";
    for (int i = 0; i < ROWS; ++i) {
        for (int j = 0; j < COLS; ++j) {
            std::cin >> matrix[i][j];
        }
    }

    // Вычисление среднего арифметического элементов строк
    float averages[ROWS];
    for (int i = 0; i < ROWS; ++i) {
        float sum = 0.0;
        for (int j = 0; j < COLS; ++j) {
            sum += matrix[i][j];
        }
        averages[i] = sum / COLS;
    }

    // Вывод средних арифметических
    std::cout << "Средние арифметические элементов строк:\n";
    for (int i = 0; i < ROWS; ++i) {
        std::cout << "Строка " << i + 1 << ": " << averages[i] << "\n";
    }

    return 0;
}
