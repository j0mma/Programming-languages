#include <iostream>
int main ()
{
    int val = 10;
    while (val >= 0) {
        std::cout << "Value is: " << val << std::endl;
        --val;
    }
    return 0;
}

