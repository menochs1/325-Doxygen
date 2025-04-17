/**
 * @file Supervisor.cpp
 * @author Mason Enochs
 * @date 2025-04-17
 * @brief defines the implementation for the supervisor class
 * 
 * 
 */
#include "Supervisor.h"
#include <iostream>

using namespace std;


/**
 * default constructor for supervisor
 *
 * @pre 
 * @post 
 * 
 */
Supervisor::Supervisor() {
  numSupervised = -1;
}


/**
 * overloaded constructor for supervisor that sets inital conditions
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
Supervisor::Supervisor(int ID, int years, double hourlyRate, float hoursWorked, int numSupervised) : Employee(ID, years, hourlyRate, hoursWorked) {
  this->numSupervised = numSupervised;
}


/**
 * prints the information of the supervisor + how many employees they are supervising
 *
 * @pre 
 * @return void 
 * @post 
 * 
 */
void Supervisor::print() {
  Employee::print();
  cout << " Number Supervised: " << numSupervised << endl;
}


/**
 * calculates pay based on their employee calculated pay, adn how many employees they are supervising
 *
 * @pre 
 * @return double 
 * @post 
 * 
 */
double Supervisor::calculatePay() {
  double val = Employee::calculatePay();
  val = val + val * (.01 * numSupervised);
  return val;
}
