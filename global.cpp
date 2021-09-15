// Copyright (c) 2021 haokai All rights reserved
//
// Created by: Haokai
// Created on: Sept 2021
// This Program global and local variable

#include <iostream>

// global variable
int variableX = 25;

void localVariable() {
  // This function calculate about local variable

  int variableX = 10;
  int variableY = 30;
  int variableZ = variableX + variableY;
  std::cout << "Local variableX, variableY, variableZ: "
  << variableX << "+" << variableY << "=" << variableZ << std::endl;
}

void globalVariable() {
  // This function calculate about global variable

  variableX = variableX + 1;
  int variableY = 30;
  int variableZ = variableX + variableY;
  std::cout << "Global variableX, variableY, variableZ: "
  << variableX << "+" << variableY << "=" << variableZ << std::endl;
}

int main() {
  // This function is about global and local variable

  localVariable();
  globalVariable();
  std::cout << "\nDone" << std::endl;
}
