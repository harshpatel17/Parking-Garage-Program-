/*
 * parkinggarageZahin.h
 *
 *  Created on: Nov 28, 2017
 *      Author: ibnatz16
 */

#ifndef PARKINGGARAGEZAHIN_H_
#define PARKINGGARAGEZAHIN_H_

#include <string>

using namespace std;

class Car{
    
public:
    Car();
    //declarations of setter methods for car variables
    void set_color(string c);
    void set_make(string m);
    void set_model(string m);
    void set_lpNum(string lpN);
    void set_floorNum(int fn);
    void set_spaceNum(int sn);
    void set_timePeriod(int tp);
    void set_moneyOwed(double m);
    void set_isOccupied(bool o);
    void set_isVIP(bool v);
    
    //declarations of getter methods for car variables
    string get_color();
    string get_make();
    string get_model();
    string get_lpNum();
    int get_floorNum();
    int get_spaceNum();
    int get_timePeriod();
    double get_moneyOwed();
    bool get_isOccupied();
    bool get_isVIP();
    
private:
    //All car variable declarations
    string color;
    string make;
    string model;
    string lpNum;
    int floorNum;
    int spaceNum;
    int timePeriod;
    double moneyOwed;
    bool isOccupied;
    bool isVIP;
    
};


#endif //
