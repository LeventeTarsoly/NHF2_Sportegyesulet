//
// Created by TLevente on 04/05/2023.
//

#ifndef NHF_SPORTEGYESULET_STRING_H
#define NHF_SPORTEGYESULET_STRING_H
#include <iostream>

class String {
    char* pData;         /// pointer az adatra
    size_t len;    /// hossz lezĂĄrĂł nulla nĂŠlkĂźl
public:
    /// Az elsĹ kĂŠt feladatot elĹre megoldottuk, de lehet, hogy nem jĂłl.
    /// Az Ăźres string reprezentĂĄciĂłja nem szerencsĂŠs, mert Ă­gy NULL pointerrĂŠ
    /// konvertĂĄl a c_str(), ami kĂźlĂśn kezelĂŠst igĂŠnyel a kĂŠsĹbbiekben, Ă­gy
    /// a teszt program sem fogadja el.
    /// Gondolja vĂŠgig, ĂŠs vĂĄltoztassa meg!
    /// KĂŠt lehetĹsĂŠg van:
    ///     a) nem NULL pointert tĂĄrol, hanem tĂŠynlegesen Ăźres sringet.
    ///     b) a c_str() Ăźres stringet ad vissza
    /// BĂĄrmelyik jĂł, mert ez az osztĂĄly belĂźgye.

    size_t size() const { return len; }


    /// Default konstruktor:
    String() :pData(0), len(0) {}

    /// C-stringet ad vissza
    const char* c_str() const { if (pData) return pData; else return ""; }

    /// Konstruktor: egy char karakterbĹl (createStrFromChar)
    String(char ch);

    /// Konstruktor: egy nullĂĄval lezĂĄrt char sorozatbĂłl (createStringFromCharStr)
    String(const char* p);

    /// MĂSOLĂ konstruktor, ami a createStringFromString-bĹl keletkezett
    /// @param s1 - String, amibĹl lĂŠtrehozzuk az Ăşj String-et
    String(const String& s1);

    /// Destruktor (disposeString)
    ~String() { delete[] pData; }

    /// EgyĂŠb tagfĂźggvĂŠnyek:
    /// KiĂ­runk egy Stringet (debug cĂŠlokra) (ez kĂŠsz)
    /// ElĂśtte kiĂ­runk egy tetszĹleges szĂśveget.
    /// @param txt - nullĂĄval lezĂĄrt szĂśvegre mutatĂł pointer
    void printDbg(const char* txt = "") const {
        std::cout << txt << "[" << len << "], "
                  << (pData ? pData : "(NULL)") << std::endl;
    }

    /// OperĂĄtorok:
    /// ĂrtĂŠkadĂł operĂĄtor is kell !
    /// @param rhs_s - jobboldali String
    /// @return baoldali (mĂłdosĂ­tott) string (referenciĂĄja)
    String& operator=(const String& rhs_s);

    String& operator+=(const String& rhs_s) {
        *this = *this + rhs_s;
        return *this;
    }

    /// KĂŠt Stringet ĂśsszefĹąz (concatString)
    /// @param rhs_s - jobboldali String
    /// @return Ăşj String, ami tartalmazza a kĂŠt stringet egmĂĄs utĂĄn
    String operator+(const String& rhs_s) const;

    //TODO
    bool cmp(const String& rhs_s);

    /// Sztrinhez karaktert ĂśsszefĹąz (concatString)
    /// @param rhs_c - jobboldali karakter
    /// @return Ăşj String, ami tartalmazza a kĂŠt sztringet egymĂĄs utĂĄn
    String operator+(char rhs_c) const { return *this + String(rhs_c); }

    /// A string egy megadott indexĹą elemĂŠnek REFERENCIĂJĂVAL tĂŠr vissza.
    /// charAtString-bĹl keletkezett, de ezt bal oldalon is lehet hasznĂĄlni
    /// @param idx - charakter indexe
    /// @return karakter (referencia)
    ///         IndexelĂŠsi hiba esetĂŠn const char* kivĂŠtelt dob (assert helyett).
    char& operator[](unsigned int idx);

    /// A string egy megadott indexĹą elemĂŠnek REFERENCIĂJĂVAL tĂŠr vissza.
    /// charAtString-bĹl keletkezett. Konstans stringre alkalmazhatĂł.
    /// IndexelĂŠsi hiba esetĂŠn const char* kivĂŠtelt dob (assert helyett).
    /// @param idx - karakter indexe
    /// @return karakter (referencia)
    ///         IndexelĂŠsi hiba esetĂŠn const char* kivĂŠtelt dob (assert helyett).
    const char& operator[](unsigned int idx) const;

    void erase() { *this = ""; }
};

/// GlobĂĄlis fĂźggvĂŠnyek:
/// kiĂ­r az ostream-re (printString)
/// Nem cĂŠlszerĹą using-ot hasznĂĄlni, mert ez egy include file. Ăgy ki kell Ă­rni az std::-t
/// @param os - ostream tĂ­pusĂş objektum
/// @param s0 - String, amit kiĂ­runk
/// @return os
/// VigyĂĄzat nem tagfĂźggvĂŠny! Nem is tĹąnik el az s0 !
/// Nem kell, hogy barĂĄt legyen, mert a c_str() segĂ­t
std::ostream& operator<<(std::ostream& os, const String& s0);

/// Beolvas az istream-rĹl egy szĂłt egy string-be.
/// @param is - istream tĂ­pusĂş objektum
/// @param s0 - String, amibe beolvas
/// @return is
/// VigyĂĄzat nem tagfĂźggvĂŠny! Nem is tĹąnik el az s0 !
/// Nem kell, hogy barĂĄt legyen mert van Str + ch
std::istream& operator>>(std::istream& is, String& s0);

/// String operator+(char ch, const String& str);
/// Vagy inline, vagy nem itt a helye!
/// Nem kell, hogy barĂĄt legyen mert tudunk chr-bĹl str-be konvertĂĄlni
/// kĂŠt str pedig ĂśsszeadhatĂł
inline String operator+(char ch, const String& str) { return String(ch) + str; }


#endif //NHF_SPORTEGYESULET_STRING_H
