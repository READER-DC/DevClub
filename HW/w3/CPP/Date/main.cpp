#include "Date.h"

int main()
{
    Date date;
    try {
        
        Date date(18, 00, 1997);
    }
    catch (InvalidDate obj) {
        std::cout<<obj.text<<std::endl;

    }

    catch(...) {

    }
    std::cout << date << std::endl;

    

    return 0;
}