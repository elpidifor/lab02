#include <iostream>

int main() {
    int x;
    std::cin >> x;
    int y;
    std::cin >> y;
    int z;
    std::cin >> z;

    //каждое из чисел X и Y нечетное;
    if (!((x % 4) && (y % 2))){
        std::cout << "TRUE one of numbers%2 != 0" << std::endl;
    }else{
        std::cout << "FALSE" << std::endl;
    }

    //только одно из чисел X и Y меньше 20;
    if (((x < 20) && (y >= 20)) || ((x >= 20) && (y < 20)){
        std::cout << "TRUE one of numbers < 20" << std::endl;
    }else{
        std::cout << "FALSE" << std::endl;
    }

    //хотя бы одно из чисел X и Y равно нулю;
    if ((x == 0) || (y == 0)){
        std::cout << "TRUE one of numbers = 0" << std::endl;
    }else{
        std::cout << "FALSE" << std::endl;
    }

    //каждое из чисел X, Y, Z отрицательное;
    if ((x < 0) && (y < 0) && (z < 0)){
        std::cout << "TRUE one of numbers < 0" << std::endl;
    }else{
        std::cout << "FALSE" << std::endl;
    }

    //только одно из чисел X, Y и Z кратно пяти;
    if (!(x % 5) && (y % 5) && (z % 5)) || ((x % 5) && !(y % 5) && (z % 5)) || ((x % 5) && (y % 5) && !(z % 5)){
        std::cout << "TRUE one of numbers%5 = 0" << std::endl;
    }else{
        std::cout << "FALSE" << std::endl;
    }

    //хотя бы одно из чисел X, Y, Z больше 100
    if ((x > 100) || (y > 100) || (z > 100)){
        std::cout << "TRUE one of numbers > 100" << std::endl;
    }else{
        std::cout << "FALSE" << std::endl;
    }

        
    std::pair<int, int> ab;
    std::cin >> ab.first;
    std::cin >> ab.second;

    std::pair<int, int> cd;
    std::cin >> cd.first;
    std::cin >> cd.second;

    //На поле (a, b) расположена ладья. Записать условие, при котором она угрожает полю (c, d).
    if ((ab.first == cd.first) || (ab.second == cd.second)){
        std::cout << "rook threatens" << std::endl;
    }else{
        std::cout << "rook not threatens" << std::endl;
    }

    //На поле (a, b) расположен слон. Записать условие, при котором он угрожает полю (c, d).
    if ((ab.first - ab.second) == (cd.first - cd.second)){
        std::cout << "elephant threatens" << std::endl;
    }else{
        std::cout << "elephant not threatens" << std::endl;
    }

    //На поле (a, b) расположен король.
    //Записать условие, при котором он может одним ходом попасть на поле (c, d).
    if (abs(ab.first - cd.first) < 2 && abs(ab.second - cd.second) < 2){
        std::cout << "king walks" << std::endl;
    }else{
        std::cout << "king not walks" << std::endl;
    }

    //На поле (a, b) расположен ферзь.
    //Записать условие, при котором он угрожает полю (c, d).
    if (((ab.first == cd.first) || (ab.second == cd.second)) ||
        ((ab.first - ab.second) == (cd.first - cd.second)){
        std::cout << "queen threatens" << std::endl;
    }else{
        std::cout << "queen not threatens" << std::endl;
    }

    //На поле (a, b) расположена белая пешка.
    //Записать условие, при котором она может одним ходом попасть на поле (c, d):
    // 1)при обычном ходе;
    // 2)когда она "бьет" фигуру или пешку соперника.

    return 0;
}
