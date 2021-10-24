/*

    Program Description:  A C++ program to demonstrate inheritance.
    
    Author: Nilay Gupta
                   

    
    INPUT: //SINCE THE INPUT IS VERY LONG, IT HAS BEEN PRE-SET//
    
        However, if you want to provide custom input and check the execution of the code,
        please uncomment the block of code from line 214 to line 268 and comment out the
        block of code from line 137 to line 209.
    
    OUTPUT: (for the pre set input)
    
        Under Graduate Students:
        
        No students in semester 1!
        
        No students in semester 2!
        
        Average age of semester 3 students is: 19
        
        No students in semester 4!
        
        Average age of semester 5 students is: 20
        
        No students in semester 6!
        
        Average age of semester 7 students is: 21
        
        No students in semester 8!
        
        Post Graduate Students:
        
        Average age of semester 1 students is: 22
        
        No students in semester 2!
        
        Average age of semester 3 students is: 24
        
        No students in semester 4!
        
        Average age of semester 5 students is: 23
        
        Average age of semester 6 students is: 24
        
        No students in semester 7!
        
        Average age of semester 8 students is: 25
    
    Algorithm:
    
        Step 0: Start
       
        Step 1: Declare the header files
       
        Step 2: Create a class STUDENT and declare the required data members
       
        Step 3: Create a class UGSTUDENT and declare the required data members
            Step 3.1: Inherit the base class STUDENT to the sub class UGSTUDENT
       
        Step 4: Create a class PGSTUDENT and declare the required data members
            Step 4.1: Step 3.1: Inherit the base class STUDENT to the sub class PGSTUDENT
           
        Step 5: Create a main function
            Step 5.1: In the main function, declare the necessary variables
            Step 5.2: Ask the user to input the necessary data
            Step 5.3: Calculate the average age of students of each semester from the UG Batch and the PG Batch
            Step 5.4: Print the average age
           
        Step 6: Stop

*/

//declaring the header files
#include<iostream>
#include<string.h>

//pre defining the value of MAX as 5
#define MAX 5

using namespace std;

//creating the base class STUDENT and declaring its data members
class STUDENT
{
   
    public:
       
        int USN;
        string name;
        int age;
       
};

//creating the sub class UGSTUDENT and declaring its data members
class UGSTUDENT : public STUDENT
{
   
    public:
   
        int semester;
        int fees;
        int stipend;
       
};

//creating the sub class PGSTUDENT and declaring its data members
class PGSTUDENT : public STUDENT
{
   
    public:
   
        int semester;
        int fees;
        int stipend;
       
};

//The main function which will contain all the driver code for the execution of the program
int main()
{
   
    //declaration of variables
    int i, term = 0, age = 0, pop = 0;
   
    double avgAge = 0;
   
    //creation of array of objects for sub classes UGSTUDENT and PGSTUDENT
    UGSTUDENT obj1[MAX];
    PGSTUDENT obj2[MAX];
   
    /*
   
    If you want to provide custom input and check the execution of the code,
    please uncomment the block of code from line 214 to line 268 and comment out
    the block of code from line 137 to line 209
   
    */
   
    //data for UG Students
   
    obj1[0].USN = 1;
    obj1[1].USN = 2;
    obj1[2].USN = 3;
    obj1[3].USN = 4;
    obj1[4].USN = 5;
   
    obj1[0].name = "Nilay";
    obj1[1].name = "Varun";
    obj1[2].name = "Rachit";
    obj1[3].name = "Shobhit";
    obj1[4].name = "Maitrayee";
   
    obj1[0].age = 18;
    obj1[1].age = 20;
    obj1[2].age = 21;
    obj1[3].age = 17;
    obj1[4].age = 19;
   
    obj1[0].semester = 3;
    obj1[1].semester = 5;
    obj1[2].semester = 7;
    obj1[3].semester = 5;
    obj1[4].semester = 3;
   
    obj1[0].fees = 300000;
    obj1[1].fees = 300000;
    obj1[2].fees = 170000;
    obj1[3].fees = 300000;
    obj1[4].fees = 170000;
   
    obj1[0].stipend = 1500;
    obj1[1].stipend = 5000;
    obj1[2].stipend = 2000;
    obj1[3].stipend = 2500;
    obj1[4].stipend = 5000;
   
    //data for PG Students
   
    obj2[0].USN = 1;
    obj2[1].USN = 2;
    obj2[2].USN = 3;
    obj2[3].USN = 4;
    obj2[4].USN = 5;
   
    obj2[0].name = "Nilay";
    obj2[1].name = "Varun";
    obj2[2].name = "Rachit";
    obj2[3].name = "Shobhit";
    obj2[4].name = "Maitrayee";
   
    obj2[0].age = 33;
    obj2[1].age = 34;
    obj2[2].age = 35;
    obj2[3].age = 34;
    obj2[4].age = 32;
   
    obj2[0].semester = 5;
    obj2[1].semester = 3;
    obj2[2].semester = 8;
    obj2[3].semester = 6;
    obj2[4].semester = 1;

    obj2[0].fees = 300000;
    obj2[1].fees = 300000;
    obj2[2].fees = 170000;
    obj2[3].fees = 300000;
    obj2[4].fees = 170000;
   
    obj2[0].stipend = 1500;
    obj2[1].stipend = 5000;
    obj2[2].stipend = 2000;
    obj2[3].stipend = 2500;
    obj2[4].stipend = 5000;
   
   
    /*
   
   
    cout<<"\nPlease note that the semester can be from 1 to 8 only (including 1 and 8)\n";
   
    //asking the user to input data for the UGSTUDENTS
   
    cout<<"\nEnter the data for 5 UG students:\n";
   
    for(i=0;i<MAX;i++)
    {
       
        cout<<"\nSTUDENT "<<(i+1)<<" :\n";
       
        cout<<"\nEnter the USN:\n";
        cin>>obj1[i].USN;
       
        cout<<"\nEnter the name:\n";
        cin>>obj1[i].name;
       
        cout<<"\nEnter the age:\n";
        cin>>obj1[i].age;
       
        cout<<"\nEnter the Semester:\n";
        cin>>obj1[i].semester;
       
        cout<<"\nEnter the fees:\n";
        cin>>obj1[i].fees;
       
        cout<<"\nEnter the stipend:\n";
        cin>>obj1[i].stipend;
       
    }
   
    //asking the user to input data for the PGSTUDENTS
    cout<<"\nEnter the data for 5 PG students:\n";
   
    for(i=0;i<MAX;i++)
    {
       
        cout<<"\nSTUDENT "<<(i+1)<<" :\n";
       
        cout<<"\nEnter the USN:\n";
        cin>>obj2[i].USN;
       
        cout<<"\nEnter the name:\n";
        cin>>obj2[i].name;
       
        cout<<"\nEnter the age:\n";
        cin>>obj2[i].age;
       
        cout<<"\nEnter the Semester:\n";
        cin>>obj2[i].semester;
       
        cout<<"\nEnter the fees:\n";
        cin>>obj2[i].fees;
       
        cout<<"\nEnter the stipend:\n";
        cin>>obj2[i].stipend;
       
    }
   
    */
   
    //Calculating the average age of students of each semester in the UG Batch and printing it
    cout<<"\nUnder Graduate Students:\n";
   
    while (term < 8)
    {
       
        ++term;
       
        for(i=0;i<MAX;i++)
        {
           
            if(obj1[i].semester == term)
            {
               
                age = age + obj1[i].age;
               
                if(age > 0)
                {
               
                    pop++;
                   
                }
               
            }
           
        }
       
        if(age == 0)
        {
           
            cout<<"\nNo students in semester "<<term<<"!\n";
           
        }
       
        else
        {
           
            avgAge = (double) age / pop;
            cout<<"\nAverage age of semester "<<term<<" students is: "<<avgAge<<"\n";
           
        }
       
        age = pop = 0;
        avgAge = 0;
       
    }
   
    term = 0;
   
    //Calculating the average age of students of each semester in the PG Batch and printing it
    cout<<"\nPost Graduate Students:\n";
   
    while (term < 8)
    {
       
        ++term;
       
        for(i=0;i<MAX;i++)
        {
           
            if(obj2[i].semester == term)
            {
               
                age = age + obj2[i].age;
               
                if(age > 0)
                {
               
                    pop++;
                   
                }
               
            }
           
        }
       
        if(age == 0)
        {
           
            cout<<"\nNo students in semester "<<term<<"!\n";
           
        }
       
        else
        {
           
            avgAge = (double) age / pop;
            cout<<"\nAverage age of semester "<<term<<" students is: "<<avgAge<<"\n";
           
        }
       
        age = pop = 0;
        avgAge = 0;
       
    }
   
    return 0;
   
}