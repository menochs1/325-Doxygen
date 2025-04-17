/**
 * @file Employee.h
 * @author Mason Enochs
 * @date 2025-04-17
 * @brief defines the employee class and defines what functions / varaibles it should have and their access control.
 * 
 * 
 */

#ifndef EMPLOYEE_H
#define EMPLOYEE_H


/**
 * defines the employee class and its contents (i.e. varaibels and methods)
 *
 * @class Employee Employee.h "Employees/Employee.h"
 * @brief 
 *
 */
class Employee {
 private:
  int ID; //employee ID
  int years; // years worked
  
 protected:
  double hourlyRate; // wage in $ per hour
  float hoursWorked; // number of hours worked
 public:

/**
 * prints the information for an employee
 *
 * @pre 
 * @return virtual 
 * @post 
 * 
 */
  virtual void print();

/**
 * calculates the employee's pay
 *
 * @pre 
 * @return virtual 
 * @post 
 * 
 */
  virtual double calculatePay();

/**
 * incraments the employee's years and prints a congratulations to the employee while also increasing their hourly rate by 2%
 *
 * @pre 
 * @return void 
 * @post 
 * 
 */
  void anniversary();

/**
 * constructor for the employee object
 *
 * @pre 
 * @post 
 * 
 */
  Employee();

/**
 * overloaded constructor for the employee object assigning information like ID
 *
 * @param int ID 
 * @param int years 
 * @param double hourlyRate 
 * @param float hoursWorked 
 * @pre 
 * @post 
 * 
 */
  Employee(int ID, int years, double hourlyRate, float hoursWorked);
};

#endif //EMPLOYEE_H
