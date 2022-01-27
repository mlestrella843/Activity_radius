/*
Activity 1.2

Write a program to get radius from the user and print the circumference and area of a circle
*/


#include <iostream>
using namespace std;

int main() {

float radius;
float circumference;
float area;
float pi;
pi = 3.14;

std::cout << "Introduce radius's value:\n";
cin>>radius;

circumference = (2 * pi * radius);
area = pi * (radius*radius);

std::cout << "the circumference's value is:\t" <<circumference<< "\n";

std::cout << "the Area's value is:\t" <<area<< "\n";


return 0;



} 