/*
	Drying Pan

	Ngo, Matthew
	Fegan, Kyle
	Manning, Tristan
	Cortes, Andre

	CS A250 - Fall 2017

	Project 1
*/

#ifndef STUDENTLIST_H
#define STUDENTLIST_H

#include "Student.h"

#include <iostream>
#include <string>

using namespace std;

class Node
{
public:
	Node( ): student( ), next(NULL) {} 
    Node(const Student& newStudent, Node *newNext) 
		: student(newStudent), next(newNext){}
    Student getStudent( ) const { return student; }
	Node* getNext( ) const { return next; }	
    void setStudent(const Student& newStudent) { student = newStudent; }
	void setNext(Node *newNext) { next = newNext; }
private:
    Student student;	
    Node *next;		
};

class StudentList
{
public:

	// default constructor


	// addStudent


	// getNoOfStudents
	int getNoOfStudents() const;

	// printStudentByID


	// printStudentsByCourse


	// printStudentByName
	void printStudentByName(const string& lastName) const;

	// printStudentsOnHold


	// printAllStudents


	// printStudentsToFile


	// destroyStudentList
	

	// destructor
	~StudentList();

private:
	Node *first;
	Node *last;
	int count;
};

#endif

