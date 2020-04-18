#pragma once
 class teacher
 {
 private:
 	int staff_id; //staff id
 	char union_status; // union membership status
 	float workload; //the workload 

 
public:
	// creates teacher object
	teacher (int,char,float);
	// gets staff id
	int getStaffID ();
	// get union status
	char getUS();
	// get workload
	float getWorkload();
	// combines teachers 
	teacher combineTeacher(teacher a);
	//PRINTS TEACHERS
	void printTeacher();
};


