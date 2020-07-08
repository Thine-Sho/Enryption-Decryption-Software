# Enryption-Decryption-Software
Built this programme because I had no knowledge of c++ libraries that worked with Arduino to encrypt and or decrypt keypad inputs.

 ** GENERALLY PROTECTED CLASS

  - VERSION #1: made using function, no error handling/fast processing
  
    - **PUBLIC METHODS:**
    
    
      - **createEncryption();** 
        Takes an Array of integers;
        
      - **startDecryption();**
        Returns a 2 dementional vector of keys
        
        
     
    - **PROTECTED METHODS:**
    
    
      - **void truncateKeyFile();**
        Truncates the Key container file
        
      - **inline int getKeyLength();**
         Returns allowed length of Keys
         
      - **void setFile(const std::string);**
         Updates Key file pointer
         
      - **void setKeyLength(const int);**
         Updates allowed length of Keys
      
  - VERSION #2: made using Class structure, no error handling/fast processing
