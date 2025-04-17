/**
 * @file Officer.h
 * @author Mason Enochs
 * @date 2025-04-17
 * @brief defines the structure of the officer class / objects
 * 
 * 
 */

#ifndef OFFICER_H
#define OFFICER_H

#include "Employee.h"


/**
 * defines what is to be implemented for the officer class, i.e. its variables and methods.
 *
 * @class Officer Officer.h "Employees/Officer.h"
 * @brief 
 *
 */
class Officer : public Employee {
 private:
  double evilness; // how evil it is
 public:

/**
 * prints the informatoin of the officer + their EVILNESS
 *
 * @pre 
 * @return void 
 * @post 
 * 
 */
  void print();

/**
 * calculates pay based on rate, evilness, and hours worked.
 *
 * @pre 
 * @return double 
 * @post 
 * 
 */
  double calculatePay();

/**
 * default constructor for officer
 *
 * @pre 
 * @post 
 * 
 */
  Officer();

/**
 * overloaded constructor for officer that set initial conditions based on parameters
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
  Officer(int ID, int years, double hourlyRate, float hoursWorked, double evilness);
};

#endif //OFFICER_H
