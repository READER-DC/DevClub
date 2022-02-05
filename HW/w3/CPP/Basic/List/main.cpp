#include "List.h"

int main(){

    List list(100, 1.05);

    list.push_back(100);

    std::cout << list.max_size() <<std::endl;
    std::cout << list.size() <<std::endl;

    for ( int i = 0; i < 101; i++) {
        list.push_back(i);
    }


    std::cout << list.max_size() <<std::endl;
    std::cout << list.size() <<std::endl;

    for ( int i = 100; i > 30; i--) {
        list.erase(i);
    }
    std::cout << list.max_size() <<std::endl;
    std::cout << list.size() <<std::endl;

    for ( int i = 0; i < 70; i++) {
        list.push_back(i);
    }
    std::cout << list.max_size() <<std::endl;
    std::cout << list.size() <<std::endl;
    std::cout << list <<std::endl;
    
    list.sort();
    std::cout << list <<std::endl;
    std::cout << list.find(35) <<std::endl;
    
    return 0;
}