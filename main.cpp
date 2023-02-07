#include <iostream>

template<typename ...T>
void ignoreUnused(T&&...) { }

/*
Project 2 - Part 1 / 1
video: Chapter 2 - Part 3
 Declarations Tasks

 Create a branch named Part1

 Purpose:  This project will teach you how to declare variables and free functions.  
 This will be the first project where the code you write will be compiled and you will be responsible for making sure it compiles before submitting it for review.
 
 
 1) Write down the names of the 6 major primitive types available in C++  here:

int
float
double
char
bool
void
 
 
 
 
 
 
 
 
 
2) for each primitive type, write out 3 variable declarations inside the variableDeclaration() function on line 59.
    a) give each variable declaration an initial value
        - just ignore wchar_t. you do not need to declare 3 variables of type 'wchar_t'
        - 'void' is a return type. you do not need to declare 3 variables of type 'void'.
    b) at the end of the function, call ignoreUnused once and pass all of your variables to it. see line 71 for an example
 
3) Declare 10 free functions
    each declaration should have a random number of parameters in the function parameter list.
    When naming your parameters, choose names that are relevant to the task implied by the function's name.
    remember:
    Name functions what they do
        takeDogForWalk(int distanceInYards);
    Name variables what they are.
        int numStepsSinceStart;

4) add { ignoreUnused( ); } after each declaration in place of the closing semicolon
5) pass each of your function parameters to the ignoreUnused function like you did in b)
6) if your function returns something other than void, add 'return { };' at the end of it.
7) provide default values for an arbitrary number of parameters in the function parameter list.

8) consult the coding style guide found in the Readme.MD and adjust the formatting of your 10 functions.  At this point, you might have something that looks like this:
    float someFunc2(bool yes, int bar=2) { ignoreUnused(yes, bar ); return { }; }
    This does not conform with the coding standard for this course (check the Readme.MD) and needs to be corrected
    
9) in the main function at the end: 
    for each of those functions declared, 
        a) write out how the function would look if called with correct arguments
        b) if the function returned anything, store it in a local variable via the 'auto' keyword.
        c) pass the local variables to ignoreUnused() as you did in 2b)
    see main() for an example of this.
 
10) click the [run] button.  Clear up any errors or warnings as best you can.
 */

//2)
void variableDeclarations()
{
    //example:
    int number = 2; //declaration of a variable named "number", that uses the primitive type 'int', and the variable's initial value is '2'
    int number2 = 3;
    int number3 = 100;

    float floatNum1 = 1.2f;
    float floatNum2 = 3.54f;
    float floatNum3 = 24.3f;

    double doubleNum1 = 1.2;
    double doubleNum2 = 3.54;
    double doubleNum3 = 24.3;

    char charVal1 = 'a';
    char charVal2 = 'f';
    char charVal3 = 'B';

    bool boolVal1 = true;
    bool boolVal2 = false;
    bool boolVal3 = false;

    ignoreUnused(number, number2, number3, floatNum1, floatNum2, floatNum3, doubleNum1, doubleNum2, doubleNum3, charVal1, charVal2, charVal3, boolVal1, boolVal2, boolVal3); //passing each variable declared to the ignoreUnused() function
}

/*
 10 functions
 example:
 note: this example shows the result after completing steps 3-8
 */
bool rentACar(int rentalDuration, int carType = 0)  //function declaration with random number of arguments, arbitrary number of arguments have default value
{ 
    ignoreUnused(rentalDuration, carType); //passing each function parameter to the ignoreUnused() function
    return {}; //if your function returns something other than void, add 'return {};' at the end of it.
} 

/*
 1)
 */
int makeMathOperation(int firstOperand, int secondOperand, int operationType = 0)
{
    ignoreUnused(firstOperand, secondOperand, operationType);
    return {};
}
/*
 2)
 */
bool bookARoom(int numberOfDays, int numberOfBeds = 1)
{
    ignoreUnused(numberOfDays, numberOfBeds);
    return {};
}
/*
 3)
 */
bool isDressSizeAvailable(int typeOfDress, char dressSize = 'S' ) 
{
    ignoreUnused(typeOfDress, dressSize);
    return {};  
}
/*
 4)
 */
int numOfMangaAvailable(char initialLetterOfTitle ,int typeOfManga = 2)
{
    ignoreUnused(initialLetterOfTitle, typeOfManga);
    return {};
}
/*
 5)
 */
void increaseVolume(float volumeValue, float gainValue = 1.0f)
{
    ignoreUnused(volumeValue, gainValue);
}
/*
 6)
 */
void addFiltersToChain(int numOfFilters, char filterCutType = 'l', float gainValue = 1.0f)
{
    ignoreUnused(numOfFilters, filterCutType, gainValue);
}
/*
 7)
 */
void orderBeer(int debitCardNumber, int numberOfBeers = 1)
{
    ignoreUnused(debitCardNumber, numberOfBeers);
}
/*
 8)
 */
void resumeSong(int momentTimeStamp, int sampleRate = 44100)
{
    ignoreUnused(momentTimeStamp, sampleRate);
}
/*
 9)
 */
float OfferToAuction(float actualOffer, float yourOffer = 50.0f)
{
    ignoreUnused(actualOffer, yourOffer);
    return {};
}
/*
 10)
 */
void accelerateCar(double pressureRate, bool turboOn = false)
{
    ignoreUnused(pressureRate, turboOn);
}
/*
 MAKE SURE YOU ARE NOT ON THE MASTER BRANCH

 Commit your changes by clicking on the Source Control panel on the left, entering a message, and click [Commit and push].
 
 If you didn't already: 
    Make a pull request after you make your first commit
    pin the pull request link and this repl.it link to our DM thread in a single message.

 send me a DM to review your pull request when the project is ready for review.

 Wait for my code review.
 */

int main()
{
    //example of calling that function, storing the value, and passing it to ignoreUnused at the end of main()
    auto carRented = rentACar(6, 2); 
    
    //1)
    auto mathOperation = makeMathOperation(2, 3, 0);
    //2)
    auto isRoomBooked = bookARoom(7, 3);
    //3)
    auto isSizeAvailable = isDressSizeAvailable(3, 'M');
    //4)
    auto numberOfManga = numOfMangaAvailable('M', 1);
    //5)
    increaseVolume(54.5f, 3.0f);
    //6)
    addFiltersToChain(2, 'h', 1.0f);
    //7)
    orderBeer(1234567, 4);
    //8)
    resumeSong(851, 44100);
    //9)
    auto actualAuctionOffer = OfferToAuction(250.43f, 300.0f);
    //10)
    accelerateCar(32.5, true);
    
    ignoreUnused(carRented, mathOperation, isRoomBooked, isSizeAvailable, numberOfManga, actualAuctionOffer);
    std::cout << "good to go!" << std::endl;
    return 0;    
}
