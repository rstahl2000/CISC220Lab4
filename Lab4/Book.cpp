/*
 * Book.cpp
 *
 *  Created on: Sep 25, 2019
 *      Author: robertstahl
 */
#include <iostream>
#include "Book.hpp"
Book::Book(string first,string last,string book,int yearPub){
	firstName=first;
	lastName=last;
	bookName=book;
	year=yearPub;
	int rate[]={0,0,0,0,0,0,0,0,0,0};
	ratings=new int[10];
	ratings=rate;
}
Book::Book(string first,string last,string book,int yearPub, int rate[]){
	firstName=first;
	lastName=last;
	bookName=book;
	year=yearPub;
	ratings=new int[10];
	ratings=rate;
}

double Book::avgRatings(){
	double sum=0;
	for(int i=0;i<10;i++){
		sum+=ratings[i];
	}
	return sum/10.0;
}

void Book::printRatings(){
	double avgRate=this->avgRatings();
	if(avgRate==0){
		cout<<"(no ratings yet)"<<endl;
	}
	else{
		cout<<"Average rating is: "<<avgRate<<endl;
	}
}

Book::~Book(){
	delete ratings;
	cout<<"Book Deleted"<<endl;
}


