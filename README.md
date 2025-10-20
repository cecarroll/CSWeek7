# CSWeek7
This is the Heap of Students Part 1
Let's start with the algorithm. 

We need an object-based system that will end up storing student objects, and their data objects, all on the heap. We therefore also want to use valgrind when we build. 

Let's think through the makefile and headers. Luckily, I've done my UML, but I almost think that I should write in a journal like this to think through it because I can't hold all of the information with all of their technicalities as readily as I need to think of it all at once and draw up even an algo. 

So, let's go. 

We need a student class that when we call it, it will print out a bunch of info:
some of which can be drectly held in variables 
some of which will be in their own data classes
and all of which will be in the heap instead of the stack. 

The two object classes we are going to need is for Addresses and Dates 

makefile woes: 
So, each main.o: object will be dependent on its own cpp, but also, each class we make that references it. So main is dependent on student, which is dependent on date and address. We will have to compile all previous objects which will require that we compile all previous cpp's. The dependency part a la "horse.o: horse.cpp race.o xyz.o" is separate from the command that it does underneath: command command compile the cpp "horse.cpp" for horse.o 

'''

Algo cpp's: 
Student Class
string firstName
string lastName

Address studenthouseaddress

Date birthdate
Date expected graduation date 
int completed credits

Student()
~Student()
void init(studentString)
void printStudent()
string getFirstName()
string getLastName()
int getCreditHours()

Date Class whose objects belong to student
string datestring 
int year
int month
int day
Date()
void init(dateString)

Address Class whose objects belong to Student
Address class holds
string zip 
string street
string city
string state
Address()
void init(street, city, state, zip)


main
open the file, 
for each line in the file,
initialize student using student string 

student init(string studentstring) 
    first chunk is first name
    second chunk is last name
    third chunk is Address street
    fourth chunk is Address city 
    fifth chunk is Address state
    sixth chunk is Address zip 
    seventh is gonna be the Date birthdate string init
    eighth is gonna be the Date expected graduation date  
(could this be done with a while loop and could we store a phat string on the stack that is the print result so that we dont have to recall and maniuplate everything agian later?)

void Date:: init (dateString) 
    create this date on the stack (might need done when the init is called)
    init 3 stack variables called int tempYear, tempMonth, and tempDay
    assign int Date.year = tempYear
    assign int Date.month = tempMonth
    assign int Date.dat = tempDay 

void Address:: init(tempStreet, tempCity, tempState, tempZip)
    new address string as all four together
    set Date.street = street
    set Date.city = city
    set Date.state = state
    set Date.zip = zip 

int Student::getcreditHours()
    return credithours
String Student::getfirstName()
    return firstName
String Student::getlastName()
    return lastName


'''
