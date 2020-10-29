/* An abstract class which will serve as an interface to the two bag implementations.
 * You must include the functions insert(), remove(), and size() here as pure virtual functions.
 * Write the preprocessor header guards (ifndef, etc) around the content of this file (use others as guidance).
 * The name of the abstract class should be Bag
 * Include a public variable like this -- std::string parent_variable = "this is from the abstract class";
 * It must be templated on T
 * This is the one h file you CAN edit.
 */

#include <iostream>
#include <string>
#include "my_exception.h"

/*
Writes to a string array containing:
    * the your (the student author's) Campus Username (at index 0) and
    * Student ID# (at index 1).
Takes as input a pre-existing length-2 string array.
Put the definition for this in bag_simple.hpp
*/
void get_identity(string my_id[]);


// implement your abstract class here:
// Abstract Class
class Bag
{
    // Data member of class
public:

	virtual bool insert() = 0;
	virtual bool remove() = 0;
	virtual void resize() = 0;

    string parent_variable = "this is from the abstract class";


};
