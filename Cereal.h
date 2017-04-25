//
// Created by Ryan Taylor on 4/25/17.
//

#ifndef PROJECT4_CEREAL_H
#define PROJECT4_CEREAL_H


class Cereal {

private:
    string brand;
    int upc;
    int month, day, year;

public:
    //Constructors
    Cereal();
    Cereal(string upc, int month, int day, int year);
    //Accessor
    string getBrand();
    int getUpc();
    int getMonth();
    int getDay();
    int getYear();
    //Setters
    string setBrand();
    int setUpc();
    int setMonth();
    int setDay();
    int setYear();
    //Overloaded Input Operators
    friend ostream& operator <<(ostream& outputStream, const Cereal& info);
    friend istream& operator >>(istream& inputStream, Cereal& info);
    //Override Comparison Operators
    bool operator<(const Cereal& cer2);
    bool operator>(const Ceral& cer2);

};


#endif //PROJECT4_CEREAL_H
