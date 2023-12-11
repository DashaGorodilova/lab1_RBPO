#pragma once

#include<iostream>
#include <string>

std::string ReadPersonName();
unsigned short ReadPersonAge();
void ReadPersonHeight();
void ReadPersonWeight(unsigned short& weight);
void ReadPersonSalary(double* salary);
void ReadPersonData(unsigned short& age, std::string& name, double& salary);
void ReadPersonData(unsigned short& age, std::string& name, unsigned short& weight);
void WritePersonData(
    const std::string& name,
    const unsigned short* age,
    const std::string& height = "",
    const std::string& weight = "");
