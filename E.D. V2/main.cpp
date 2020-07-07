/*
    ###########################
    ##                       ##
    ##  Name: Jahi Miller    ##
    ##  Date: 07/6/20        ##
    ##  Project: Encryption  ##
    ##                       ##
    ###########################
*/


#include <iostream>
#include "encryption.h"

class EncryptDecrypt endec;

int main()
{
    int test[4] = {78, 122, 105, 116};
    endec.createEncryption(test);
    std::vector< std::vector<int> > testV = endec.startDecryption();
    std::cout << "Hello World: " << testV[0][1];
    return 0;
}