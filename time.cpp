#include <cstdio>
#include <iostream>
#include <ctime>

//example using the time library

using namespace std;

int main() {

	time_t now = time(0); //this returns the current calender time of the system in number of seconds elapsed 
						  //since january 1, 1970
						  //if the system has no time, .1 is returned	
						  //also, anytime you see a function of type 
						  //time_t time(time_t *time); in any api or library document in c/c++ 
						  //initialise it by doing 
						  //time_t now=time(0);
							//*create some examples with this knowledge	
	char *currtime = ctime(&now);
						  //This returns a pointer to a string of the form	
						  //day		month	year hours:minutes:seconds year \n\0.
						  //anytime you see a function which returns a pointer to either a string, int or any other data type
						  //of the form char *ctime(const time_t * time); in any api or library document in c/c++
						  //you can only initialise it by passing a memory location as an argument, 
						  //this time you give it the memory location/address of a time variable in seconds
						  //initialise it by doing
						  //char *currtime=ctime($value of time in seconds elapsed since jan 1,1970 e.g &now)
							
						  //*create some examples with this knowledge	 
		cout << "The current local time is" << endl;
		cout << currtime << endl; // prints the current time in the form day month date hours:minutes:seconds year \n\0

	tm *gmt_time = gmtime(&now);  //struct tm *gmtime(const time_t *time);
								  //this function returns a pointer to the time in the form of a tm structure
								  //this time is represented in coordinated universal time (UTC), which is essentially
								 //Greenwich Mean time
								 //notice we didn't have to redifine tm as a struct since it is already defined in 
								//ctime library
	char *currtimegmt;
	currtimegmt = asctime(gmt_time); //char *asctime (const struct tm * time);
									 //this returns a pointer to a string that contains the information stored in a 
									 //structure pointed to by time converted into the form: 
									//day month date hours:minutes:seconds year\n\0
	cout << "The current GMT time is" << endl;
	cout << currtimegmt << endl;
	


	return 0;
}
