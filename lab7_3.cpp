#include <iostream>

//ไม่ต้องเติม function main()

char before(char input) {
    
    if (input >= 'A' && input <= 'Z') {
        return (input == 'A') ? 'Z' : input - 1;
    } else {
        return '0';
    }

    return 0;
}
