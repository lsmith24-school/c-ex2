#include <iostream>
using namespace std;
// Lauren smith ext#2: practice with the assigment statement int 
int main()
{
	// program example  #1 using doubles 
	cout << "program example#1 " << endl;
	double amount = 10.;    //in this example of coercion, since it is assignment an integar
	//to a double. avoild coercion by adding a decimal point
	cout << " amount is " << amount << endl;


	// program example #2 shows integer arithmetic : addition 
	cout << endl << " program example #2 " << endl;
	int numb = 100.7;     //coercion, assignment an double to an int.
	cout << "numb is " << numb << endl;   //what happen to be .7?       the .7 is chopped off and the whole number is saved

	//program example #3 computer the area of a triangle using the formula: 1/2basexhight
	cout << endl << "program example#3 " << endl;
	double area, base, height;
	//write the statement that will assign values to base and height 
	base = 10.5;
	height = 12.5;
	//add the statement that computer that using the 
	//formula area= 1/2basexheight
	area = (base / 2) * height;
	//print the area 
	cout << "the area of the triangle that has the base " << base << "cm and the height of " << height << "cm is " << area << "cm" << endl;
	//check your answer with the calculator


	//program example #4 shows division and remainder(%)
	cout << endl << "program example #4 " << endl;
	//add the ccode that will print 11 devided by 3 using integers only - no deciaml
	int div = 11 / 3;
	cout << "11 / 3 = " << div << endl;
	//add the code that will print the remainder of 11 devided by 3.
	int answer = 11 % 3;
	cout << "when 11 mod 3 the remainder is " << answer << endl;


 /*program example #5: suppose you have $3.85 in pocket change. how many quarters could you have ?
 how much change after quarters are spend?*/
	cout << endl << "program example#5 " << endl;
	int amountOfMoney = 385;
	int amtquaters = 385 / 25;
	int remainder = amountOfMoney %25;
	cout << "Amount of quaters in $3.85 = " << amtquaters << endl;
	cout << "Amount of change left in $3.85 = " << remainder << endl;


	//declare and assign this to a variable called change. we will use cents only no dollars.
	cout << endl << "program example#6 " << endl;
	int change = 385, quarters, cents;
	quarters = change / 25;
	//print the number of quarters there are.
	cout << "Number of quarters = " << quarters<< endl;
	//hint: find the number of quarters by dividing change by 25.
	//print the number of cents left over.
	cents = change % 25;
	cout << "Remainder = " << cents << endl;
	//hint: find the remainder after dividing change by 25.
	cout << endl << "program ended successfully" << endl;

	system("pause");
}