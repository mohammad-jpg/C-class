#include <iostream>
using namespace std;

#include "header.h"
// creates new teacher
teacher :: teacher(int sid ,char um ,float w){
	staff_id = sid;
	union_status = um;
	workload = w;
}
// following functions return respective variables 
int teacher::getStaffID()
{
	return staff_id;
}
char teacher:: getUS(){
	return union_status;
}
float teacher::getWorkload()
{
	return workload;
}
// combines 2 teachers, putting a dummy value for
// union status and staff id
teacher teacher::combineTeacher(teacher a){

	float newWorkload = (workload + a.getWorkload() )*1/2;
	teacher b = teacher(-1,'x',newWorkload);
	
	return b;
// prints teacher, specifes when its a combined teacher

}
void teacher::printTeacher(){
	if (staff_id == -1)
			cout<<endl << "Combined Teacher"<<endl;		
	cout <<"staff id: "<<staff_id<<endl;
	cout <<"union status: " << union_status<<endl;
	cout <<"workload: "<<workload<<endl;
	
}

