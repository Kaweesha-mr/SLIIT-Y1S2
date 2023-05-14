#include<iostream>
using namespace std;

//creating a class
class Course{

    //declearing private variables
    int courseID;
    string courseName;
    int creditPoints;

    //public functions declearing(interface)
    public:
        void setCourseDetails();
        void displayCourseDetails();
        void setCreditPoints();

        //declear constructor
        Course(int id, string cName, int points);
};

//define constructor
Course::Course(int id, string cName, int points){

    courseID = id;
    courseName = cName;
    creditPoints = points;
}

void Course::setCreditPoints(){

    cout << "Input new " << courseName << " credit points :"<< endl;
    cin >> creditPoints;
}

void  Course::displayCourseDetails(){

    cout << "CourseID = " << courseID << endl;
    cout << "CourseName = " << courseName << endl;
    cout << "CourseName = " << creditPoints << endl;
}

int main(){

    //declearing the objects with values for constructor
    Course c1(1050,"OOC",2);
    Course c2(1060,"SPM",3);
    Course c3(1100,"IWT",4);
    Course c4(1090,"ISDM",4);


    //calling functions inside each objects
    c1.setCreditPoints();
    c2.setCreditPoints();
    c3.setCreditPoints();
    c4.setCreditPoints();

    //calling functions inside each objects
    c1.displayCourseDetails();
    c2.displayCourseDetails();
    c3.displayCourseDetails();
    c4.displayCourseDetails();

    return  0;
}