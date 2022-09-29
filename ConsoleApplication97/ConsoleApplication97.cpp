// ConsoleApplication97.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <cmath>
using namespace std;
class six_side {
private:
    double a;
public:
    double get_a() {
        return a;
    }
    void set_a() {
        cout <<"Input a: ";
        cin >> a;
    }
    double square() {
        return ((pow(a, 2) * 3 * pow(3, 1 / 2)) / 2);
    }
    double perimeter() {
        return (a * 6);
    }
};
double max_square(six_side* arr, int col) {
    double max= arr[col].square();
    col--;
    while (col >= 0) {
       if(max < arr[col].square())
        col--;
    }
    return max;
}
double max_perimeter(six_side* arr, int col) {
    double max = arr[col].perimeter();
    col--;
    while (col >= 0) {
        if (max < arr[col].perimeter())
            col--;
    }
    return max;
}
void srav(six_side* arr, int col) {
    col--;
    double s = max_square(arr, col);
    double p = max_perimeter(arr, col);
  
    while (col >= 0)
    {
        if (arr[col].perimeter() == p || arr[col].square() == s)
            cout << "S= " << arr[col].square() << '\t' << "P= " << arr[col].perimeter();
    }
}
int main()
{
    std::cout << "Hello World!\n";
}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
