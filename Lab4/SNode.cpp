/*
 * SNode.cpp
 *
 *  Created on: Oct 2, 2019
 *      Author: robertstahl
 */

#include "Snode.hpp"
#include <iostream>

SNode::SNode(){
	rating=0;
	cout<<"Enter Rating:"<<endl;
	cin>>rating;
	cout<<"Enter Comments:"<<endl;
	cin>>comments;
	next=NULL;
}

SNode::SNode(int r,string c){
	rating=r;
	comments=c;
	next=NULL;
}

SNode::~SNode(){
	cout<<"deleting "<<rating<<", "<<comments<<endl;
}

void SNode::printNode(){
	cout<<"Rating: "<<rating<<", Comments: "<<comments<<endl;
}
