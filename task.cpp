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
    if (!(x % 5) && (y % 5) && (z % 5)) || ((x % 5) && !(y % 5) && (z % 5))
        || ((x % 5) && (y % 5) && !(z % 5)){
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

    return 0;
}
