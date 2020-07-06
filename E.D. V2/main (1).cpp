#include <iostream>
#include "encryption.h"

class EncryptDecrypt endec;

int main()
{
    // int test[4] = {78, 122, 105, 116};
    // endec.createEncryption(test);
    std::vector<std::vector<int>> testV = endec.startDecryption();
    
    for(int i=0; i<1; i++)
    {
        for(int x=0; x<4; x++)
        {
            std::cout << testV[0][x] << std::endl;
        }
    }
    
    return 0;
}