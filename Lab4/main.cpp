/* Lab4 Main
 *Sun Bilin
 *  Created on: Sep 25, 2019
 *      Author: Robert Stahl and Chris Tiso
 */

#include<iostream>
#include "Book.hpp"
#include "SLL.hpp"
using namespace std;

Book* greatestFunction(Book arr[]);//Function for Book test 1

int main(void){
	//start of Book. Test 1: array of 5
	int rate1[]={0,1,2,3,2,2,1,3,2,0};
	int rate2[]={3,3,3,3,2,3,4,5,3,3};
	int rate3[]={5,5,5,5,5,5,5,5,5,4};
	int rate4[]={2,3,2,4,1,4,2,3,4,3};
	int rate5[]={0,0,0,0,0,0,0,0,0,1};
	Book arr[5];
	Book B1("Robert","Stahl","Why I Don't Write",2019,rate1);
	Book B2("John","Steinbeck","Grapes of Wrath",1939,rate2);
	Book B3("GRR","Martin","A Game of Thrones", 1996,rate3);
	Book B4("Chris","Tiso","Chemistry and Comp Sci",2019,rate4);
	Book B5("Donald","Trump","Art of the Deal",1987,rate5);
	arr[0]=B1;
	arr[1]=B2;
	arr[2]=B3;
	arr[3]=B4;
	arr[4]=B5;
	greatestFunction(arr)->printInfo();

	//Book Test 2: Book on the heap

	Book* testBook=new Book("JRR","Tolkien","The Hobbit",1937);
	testBook->printInfo();

	//Book Test 3: Array of Books on the heap
	Book* LoTR1=new Book("JRR","Tolkien","The Fellowship of the Rings",1954);
	Book* LoTR2=new Book("JRR","Tolkien","The Two Towers",1954);
	Book* testArr[2]={LoTR1,LoTR2};
	testArr[0]->printInfo();
	testArr[1]->printInfo();
	delete testBook;
	delete LoTR1;
	delete LoTR2;


	//SLL Test
	int r[10] = {9,8,4,5,11,10,3,6,8,2};
	string s[10] = {"really good!","loved it","mediocre", "okay, not great","best book ever!", "awesome!","boring","not bad","definitely worth reading", "terrible!"};
	SLL *list = new SLL();
	for (int i = 0; i < 10; i++) {
	list->insertInOrder(r[i],s[i]);
	list->printSLL();
	}
	int x;
	cout << "Ave: "<< list->getAve() << endl;
	x=list->pop();
	cout << "Popping " << x << endl;
	list->printSLL();
	x=list->pop();
	cout << "Popping " << x << endl;
	list->printSLL();
	delete list;


	return 0;
}

Book* greatestFunction(Book arr[]){
	Book *temp=&arr[0];
	for(int i=1;i<5;i++){
		if(arr[i]>temp){
			temp=&arr[i];
		}
	}
	return temp;
}

