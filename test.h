///Fájlkezelés tesztje
void filetest();

///A heterogén kollekció és a származtatott osztályok függvényeinek tesztje
void classtest();

inline void Tests(){
    filetest();
    classtest();
    std::cout << std::endl;
}