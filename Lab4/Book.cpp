/*
 * Book.cpp
 *
 *  Created on: Sep 25, 2019
 *      Author: robertstahl
 */
#include <iostream>
#include "Book.hpp"
Book::Book(){

}
Book::Book(string first,string last,string book,int yearPub){
	firstName=first;
	lastName=last;
	bookName=book;
	year=yearPub;
	ratings=new int[10];
	for(int i=0;i<10;i++){
		ratings[i]=0;
	}
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
	double sum=0.0;
	for(int i=0;i<10;i++){
		sum+=ratings[i];
	}
	sum/=10.0;
	return sum;
}

void Book::printRatings(){
	double avgRate=this->avgRatings();
	if(avgRate==0){
		cout<<"(no ratings yet)"<<endl;
	}
	else{
		cout<<"Average Rating: "<<avgRate<<endl;
	}
}

void Book::printInfo(){
	cout<<"Book Title: "<<bookName<<endl;
	cout<<"Author: "<<firstName<<" "<<lastName<<endl;
	cout<<"Year Published: "<<year<<endl;
	this->printRatings();
	cout<<"\n";
}

bool Book::operator>(Book *x){
	double avgHere=this->avgRatings();
	double avgComp=x->avgRatings();
	return avgHere>avgComp;
}

Book::~Book(){
	delete[] ratings;


	cout<<bookName<<" Deleted"<<endl;
}


