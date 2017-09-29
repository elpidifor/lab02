#include <iostream>

int main() {
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
    if (((ab.first == cd.first) || (ab.second == cd.second)) || ((ab.first - ab.second) == (cd.first - cd.second)){
        std::cout << "queen threatens" << std::endl;
    }else{
        std::cout << "queen not threatens" << std::endl;
    }

    //На поле (a, b) расположена белая пешка. 
    //Записать условие, при котором она может одним ходом попасть на поле (c, d):
    //1)при обычном ходе;
    //2)когда она "бьет" фигуру или пешку соперника.

    return 0;
}
