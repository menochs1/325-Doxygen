/**
 * @file Supervisor.h
 * @author Mason Enochs
 * @date 2025-04-17
 * @brief this defines the structure of the supervisor class
 * 
 * 
 */

#ifndef SUPERVISOR_H
#define SUPERVISOR_H

#include "Employee.h"


/**
 * this specifies what is to be implemented with the supervisor class i.e. variables and methods
 *
 * @class Supervisor Supervisor.h "Employees/Supervisor.h"
 * @brief 
 *
 */
class Supervisor : public Employee {
 private:
  int numSupervised; // how many employees they are supervising
 public:

/**
 * prints the information for the supervisor + how many employees they are supervising
 *
 * @pre 
 * @return void 
 * @post 
 * 
 */
  void print();

/**
 * calculates pay based on their employee calculated pay, and how many employees they are supervising
 *
 * @pre 
 * @return double 
 * @post 
 * 
 */
  double calculatePay();

/**
 * default constructor for supervisor
 *
 * @pre 
 * @post 
 * 
 */
  Supervisor();

/**
 * overloaded constructor for supervisor that sets initial conditions
 *
 * @param int ID 
 * @param int years 
 * @param double hourlyRate 
 * @param float hoursWorked 
 * @param int numSupervised 
 * @pre 
 * @post 
 * 
 */
  Supervisor(int ID, int years, double hourlyRate, float hoursWorked, int numSupervised);
};

#endif //SUPERVISOR_H
