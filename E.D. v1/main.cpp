#include <iostream>
#include <fstream>
#include <iterator>
#include<time.h> 
#include <vector>

int num = 35;
std::string encrypt(int, int);
void createEncryption(int arr[]);
std::vector<std::string> pullETF();
std::vector<int> decrypt(std::string item);
std::vector<std::vector<int>> decryption();
void sendETF(std::string);

int main()
{
    int newArr[4] = {72, 35, 42, 74};
    createEncryption(newArr);
    std::vector<std::vector<int>> b =  decryption();
    for(int i=0; i<4; i++)
    {
        std::cout << b[0][i] << std::endl;
    }
    return 0;
}

//Takes the Array of Numbers and Encrypts it
//Then sends the Array to a file;
void createEncryption(int arr[])
{
    std::string encryptedKey;
    srand(time(0)); 
    for(int i=0; i<4; i++)
    {
        std::string newEncr;
        int eNum = rand() % 14 + 33;
        newEncr = encrypt(arr[i], eNum);
        encryptedKey += newEncr;
    }
    sendETF(encryptedKey);
}

//Encrypts each number from the array.
//Made to run in a loop
std::string encrypt(int item, int encrNum)
{
    std::string eItem;
    char c1 = (char) item; 
    char c2 = (char) encrNum;
    
    eItem += c1;
    eItem += c2;
    return eItem;
}

//Sends each Encrypted string to file;
void sendETF(std::string item)
{
    std::ofstream file;
    file.open("test.dat", std::ios::app);
    
    if(file.is_open())
    {
        file << item << std::endl ;
    }
    file.close();
}

//Pulls each enrypted item from file
//and adds it to a vector
std::vector<std::string> pullETF()
{
    std::vector<std::string> item;
    std::ifstream file;
    
    file.open("test.dat", std::ios::in);
    if(file.is_open())
    {
        std::string acts;
        while(getline(file, acts))
        {
            item.push_back(acts);
        }
    }
    file.close();
    return item;
}

//takes encrypted string and returns vector of numbers
//Meant to be used int a loop;
std::vector<int> decrypt(std::string item)
{
    std::vector<int> deCode;
    for(int i=0; i<8; i++)
    {
        deCode.push_back(item[i++]);
    }
    return deCode;
}

std::vector<std::vector<int>> decryption()
{
    std::vector<std::vector<int>> decryptedItems;
    std::vector<std::string> items = pullETF();
    std::vector<std::string>::iterator ptr; 

    for (ptr = items.begin(); ptr < items.end(); ptr++) {
        std::vector<int> decodeItem = decrypt(*ptr); 
        decryptedItems.push_back(decodeItem);
    }
    
    return decryptedItems;
}

