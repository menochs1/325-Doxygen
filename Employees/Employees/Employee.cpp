/**
 * @file Employee.cpp
 * @author Mason Enochs
 * @date 2025-04-17
 * @brief defines the implemenetaion and behavior of the employee.h class / employee objects
 * 
 * 
 */

#include "Employee.h"
#include <iostream>

using namespace std;


/**
 * constructor for Employee
 *
 * @pre 
 * @post 
 * 
 */
Employee::Employee() {
  ID = years = hoursWorked = hourlyRate = -1;
}


/**
 * Employee overloaded constructor that takes in the inital values such as ID
 *
 * @param int ID 
 * @param int years 
 * @param double hourlyRate 
 * @param float hoursWorked 
 * @pre 
 * @post 
 * 
 */
Employee::Employee(int ID, int years, double hourlyRate, float hoursWorked) {
  this->ID = ID;
  this->years = years;
  this->hourlyRate = hourlyRate;
  this->hoursWorked = hoursWorked;
}


/**
 * prints the information for an employee
 *
 * @pre 
 * @return void 
 * @post 
 * 
 */
void Employee::print() {
  cout << "Printing information for employee " << ID << ":\n Years Employed: " << years
       << "\n Hourly Rate: " << hourlyRate << "\n Hours Worked: " << hoursWorked
       << endl;
}


/**
 * incraments the employee's years and prints a congratulations to the employee while also increasing their hourly rate my 2%
 *
 * @pre 
 * @return void 
 * @post 
 * 
 */
void Employee::anniversary() {
  years++;
  hourlyRate = hourlyRate + hourlyRate * .002;
  cout << "Congratulations to employee " << ID << " on " << years << " year(s) at company!"
       << endl;
}


/**
 * calculates the employee's pay based on their rate and hours worked
 *
 * @pre 
 * @return double 
 * @post 
 * 
 */
double Employee::calculatePay() {
  return hourlyRate * hoursWorked;
}
