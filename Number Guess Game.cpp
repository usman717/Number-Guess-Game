
#include <iostream>
#include <cstdlib> 
#include <ctime>    
using namespace std;

int main() {
srand(time(NULL)); 
	
while(true) { 
int number = rand() % 50+1; 
int guess; 
int tries = 1; 
char answer; 
cout << "\t\t*****************************\n";
cout << "\t\tWELLCOME TO NUMBER GUESS GAME\n";
cout << "\t\t*****************************\n\n";
cout << "\t\t > LET'S GET STARTED < \n\n";

while(true) { 

cout << "\tEnter a number between 1 and 50 (" << 5 - (tries-1) << " tries left): ";
cin >> guess;
			

if(tries >= 5) {
break;
}
			
			
if(guess > number) {
cout << "\tToo high! Try again.\n";
} else if(guess < number) {
cout << "\tToo low! Try again.\n";
} 
else {
break;
}
tries++;
}
if(tries >= 5) {
cout << "\n\tYou ran out of tries! (^=^)\n\n";
} else {

cout<<"\n\tCongratulations!! (^_^)" << endl;
cout<<"\tYou got the right number in " << tries << " tries!\n";
}
		
while(true) { 
cout << "\n\tWould you like to play again (Y/N)? ";
cin >> answer;
			
if(answer == 'n' || answer == 'N' || answer == 'y' || answer == 'Y') {
break;
}
 else {
cout << "\tPlease enter \'Y\' or \'N\'\n";
}
}
		

if(answer == 'n' || answer == 'N') {
cout << "\n\tThank you for playing!";
break;
}
 else {
cout << "\n\n\n";
}
}
	
cout << "\n\nEnter anything to exit. . . ";
return 0;
}
