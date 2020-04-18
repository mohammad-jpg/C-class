

#include <iostream>
using namespace std;
#include "header.h"
#include "func.cpp"



int main(){
	int a,b,c,d;
	double x,y,z;
	char q,w,r,t;
/*------------------- USER I/0 ----------------------*/
	cout << "teacher 1 staff id: ";
    cin >> a;
    cout << "teacher 1 union_status(y/n): ";
    cin >> q;
    cout << "teacher 1 workload: ";
    cin >> x;
    cout << "teacher 2 staff id: ";
    cin >> b;
    cout << "teacher 2 union_status(y/n): ";
    cin >> w;
    cout << "teacher 2 workload:";
    cin >> y;
// CREATES 2 TEACHERS
    teacher t1(a,q,x);
    teacher t2(b,w,y);
    cout <<endl<< "---Teacher 1-----"<<endl;
// PRINTING THE 2 TEACHERS
    t1.printTeacher();
     cout << "---Teacher 2-----"<<endl;
     
    t2.printTeacher();
     

    teacher t3(x,x,x);
// COMBINNIG THE 2 TEACHERS
    t3 = t1.combineTeacher(t2);
    cout << "---Teacher 3-----"<<endl;
    t3.printTeacher();
    return 0;



}














