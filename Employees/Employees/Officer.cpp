/**
 * @file Officer.cpp
 * @author Mason Enochs
 * @date 2025-04-17
 * @brief defines the implementation of the Officer class
 * 
 * 
 */

#include "Officer.h"
#include <iostream>

using namespace std;


/**
 * default constructor for officer
 *
 * @pre 
 * @post 
 * 
 */
Officer::Officer() {
  evilness = 500;
}


/**
 * overloaded default constructor assiging intial conditions based on parameters
 *
 * @param int ID 
 * @param int years 
 * @param double hourlyRate 
 * @param float hoursWorked 
 * @param double evilness 
 * @pre 
 * @post 
 * 
 */
Officer::Officer(int ID, int years, double hourlyRate, float hoursWorked, double evilness) : Employee(ID, years, hourlyRate, hoursWorked) {
  this->evilness = evilness;
}


/**
 * prints the information of the officer + their EVILNESS
 *
 * @pre 
 * @return void 
 * @post 
 * 
 */
void Officer::print() {
  Employee::print();
  cout << " Evilness: " << evilness << endl;
}


/**
 * Calculates officer pay based on rate, evilness, and hours worked
 *
 * @pre 
 * @return double 
 * @post 
 * 
 */
double Officer::calculatePay() {
  return (hourlyRate + evilness) * hoursWorked;
}
