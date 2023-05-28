//TODO Test if the files could be opened and read
void filetest();

//Test if the derived classes can be constructed and stored in the heterogenous collection
void classtest();

//TODO Test of the functions in the classes
void functiontest();

inline void Tests(){
    filetest();
    classtest();
    functiontest();
    std::cout << std::endl;
}