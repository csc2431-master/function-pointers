#include "object.h"
#include "person.h"
#include "linkedlist.h"

#include <iostream>
#include <iomanip>
using std::cout;
using std::endl;
using std::setw;

void PrintPerson(const Object* object);


int main() {
	LinkedList list;
	list.Insert(new Person("John", 12),0);
	list.Insert(new Person("Cherry", 21),0);
	list.Insert(new Person("Ann", 19),0);
	list.Insert(new Person("Peter", 45),0);
	list.Insert(new Person("Karl", 87),0);
	list.Insert(new Person("Jenny", 32),0);
	list.TraverseList(PrintPerson);
	return 0;
}

void PrintPerson(const Object* object){
	const Person* person = dynamic_cast<const Person*>(object);
	if (person == nullptr)
		return;
	cout << setw(40) << person->ToString() << endl;
}
