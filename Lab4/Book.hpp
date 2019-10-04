/*
 * Book.hpp
 *
 *  Created on: Sep 25, 2019
 *      Author: robertstahl
 */

#ifndef BOOK_HPP_
#define BOOK_HPP_
#include <time.h>
using namespace std;
#include <stdlib.h>
#include <iostream>
class Book{
	string firstName;
	string lastName;
	int *ratings;
	string bookName;
	int year;
public:
	Book();
	Book(string first,string last,string book,int yearPub);
	Book(string first,string last,string book,int yearPub, int rate[]);
	double avgRatings();
	void printRatings();
	void printInfo();
	bool operator>(Book*);
	~Book();
};



#endif /* BOOK_HPP_ */
