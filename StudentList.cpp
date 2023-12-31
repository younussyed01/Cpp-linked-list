	#include "StudentList.h"

	// Define a constructor to initialize the list. The list starts with no Students
    StudentList::StudentList() 
		{
			head = nullptr;
			tail = nullptr;
			numStudents=0;
		}

	// return the number of students currently in the list
	int StudentList::listSize() {
		return numStudents;
	}

	//add a Node with a student to the front (head) of the list.
	void StudentList::addFront(Student s) 
	{
		Node* temp = new Node(s);
		if(numStudents == 0)
		{
			head = temp;
			tail = temp;
		}
		else
		{
			temp ->next = head;
			head -> prev = temp;
			head = temp;
		}
		numStudents++;
	}

	//add a Node with a student to the back (tail) of the list.
	void StudentList::addBack(Student s)
	 {
		Node* temp =new Node(s);
		if(numStudents == 0)
		{
			tail = temp;
			head = temp;
			numStudents++;
		}
		else
		{
			temp ->prev = tail;
			tail -> next = temp;
			tail = temp;
		}
		numStudents++;
	 }

	//Print out the names of each student in the list.
	void StudentList::printList()
	 {
		Node* temp = head;
			while(temp != nullptr)
			{
			cout << temp -> data.name << " ";
			temp = temp -> next;
			}
	 }

	// Remove the Node with the student at the back (tail) of the list
	// should not fail if list is empty! Print an error message if this occurs
	// Don't forget that your head and tail pointers will be null pointers if the list is empty
	void StudentList::popBack() 
	{
		if(numStudents == 0)
		{
			cout << "list is empty";

		}
		if(numStudents == 1)
		{
			delete tail;
			head=nullptr;
			tail=nullptr;
		}
		else{

		(tail -> prev) -> next = nullptr;
		delete tail -> next;
	}
	numStudents--;
		}

	// Remove the Node with the student at the front (head) of the list
	// should not fail if list is empty! Print an error message if this occurs
	// Don't forget that your head and tail pointers will be null pointers if the list is empty
	void StudentList::popFront()
	 {
		if(numStudents == 0)
		{
			cout << "list is empty"
		}
		if(numStudents==1)
		{
			delete head;
			head = nullptr;
			tail = nullptr;
		}
		else
		{

		 head -> next ->prev = nullptr;
		 head = head->next;
		 delete head -> prev;
		}
	 }

	//insert a student at the position "index".
	// for this list, count head as index 0
	// if index is outside of current list range, 
	// print a message and insert the student at the back of the list
	// the previous Node at your target index should be moved forward. "For exampe, Node with student at index i, becomes index i+1" 
	// Remember that you already have methods that can add students to the front or back of list if needed! Don't repeat this code.
	void StudentList::insertStudent(Student s, int index)
	 {
		Node* temp = new Node(s);

		if(index == nullptr)
		{
			cout << "outside";
			addFront(s);
		}
		else
		{
			for(int i = 0; i < index; i++)
			{
				head = head -> next;
			}
			temp ->next=head;
			temp ->prev=head->prev;
			head -> prev -> next = temp;
			head->prev=temp;
		}
		numStudents++;

	 }

	//find the student with the given id number and return them
	// if no student matches, print a message 
	// and create and return a dummy student object
	Student StudentList::retrieveStudent(int idNum) {
		Student fixthis;
		return student();
	}

	// Remove a Node with a student from the list with a given id number
	// If no student matches, print a message and do nothing
	void StudentList::removeStudentById(int idNum) {}

	//Change the gpa of the student with given id number to newGPA
	void StudentList::updateGPA(int idNum, float newGPA) {}

	//Add all students from otherList to this list.
	//otherlist should be empty after this operation.
	/*
	For example, if the list has 3 students:
	s1 <-> s2 <-> s3
	and otherList has 2 students
	s4 <-> s5
	then after mergeList the currently list should have all 5 students
	s1 <-> s2 <-> s3 <-> s4 <-> s5
	and otherList should be empty and have zero students.
	*/
	void StudentList::mergeList(StudentList &otherList) {}

	//create a StudentList of students whose gpa is at least minGPA.
	//Return this list.  The original (current) list should
	//not be modified (do not remove the students from the original list).
	StudentList StudentList::honorRoll(float minGPA) {
		StudentList fixthis;
		return fixthis;
	}
