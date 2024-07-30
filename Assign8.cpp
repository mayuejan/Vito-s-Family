/**

* File Name: Assign8.cpp

*

* Academic Integrity Statement:

* I certify that, while others may have assisted me in brainstorming, debugging, and validating this program,

* the program itself is my own work. I understand that submitting code that is the work of other individuals

* is a violation of the course Academic Integrity Policy and may result in zero credit for the assignment, or

* course failure and a report to the Academic Dishonesty Board. I also understand that if I knowingly give my

* original work to another individual could also result in zero credit for the assignment, or course failure

* and a report to the Academic Dishonesty Board. See Academic Integrity for Students

Links to an external site.

*

* Assisted by and Assisted line numbers:Assisted by yourube video https://www.youtube.com/watch?v=VNb3VLIu1PA&t=1324s regarding

* the application about vector due to lack of application introduction of course videos, Assised line ( 55 ).Assisted by

* https://stackoverflow.com/questions/13473/how-does-one-rank-an-array-sort-by-value-with-a-twist regarding the way to rank

* numbers at an array, because i plan to use array to find its median number, Assisted line ( 59 ).

* Your Name: YUERAN MA

* Your PSU user ID:  ymm5252

* Course title: CMPSC122 Summer 2024

* Description: This is a simple project to find the optimal street address that is close to most other relatives and print out

* the minimal distance that we purcured. At this project, i impletemted dynamic array, used vector that i just learned, sorting algorithm that i learned

* at a stage of emergency, and impletemted the STL knowledge I learned over this week. Through my obervation on assignment

* requirement, I discovered that the optimal address is exactly the median number of relative addressws, and my mission is clear:

* rank those street number in proper order so i can find the median easier, and use vector to store array data because the possibility

* of altering original array, and able to calculate minimum distance.

**/

#include <iostream>

#include <vector>//vector used

#include<cmath>//seems that sqrt needs it

#include<algorithm>//I leaned this thing from external website that i will specify, I really can't find alternative way.

using namespace std;



int main() {

    int size;

    int minsumDstc;

   

    vector<int>stNumbers;

    cout << "Welcome to the new test case! Please grab a pen and a paper to note down computation results." << endl;

    cout << "Now then, Please kindly input number of relatives." << endl;

    cin >> size;

    cout << "Number of relatives: " << size << endl;

    int* origArray;

    origArray = new int[size];//To clear up some space
    int* newArray = new int[size];

    cout << "Please input street numbers of relatives" << endl;

    for (int i = 0; i < size; i++) {//have data in hand

        cin >> origArray[i];



    }

    cout << endl;

    cout << "Street numbers in proper order: ";

    sort(origArray, origArray + size);

    for (int i = 0; i < size; i++) {//sorting to proper order

        cout << origArray[i] << " ";

        stNumbers.push_back(origArray[i]);



    }

    cout << endl;



    cout << "Optimal Vito's house number: " << stNumbers.at(size / 2);

    cout << endl;

    minsumDstc = 0;

    for (int i = 0; i < size; i++) {//result through numbers

        minsumDstc = minsumDstc + sqrt((stNumbers.at(size / 2) - origArray[i]) * (stNumbers.at(size / 2) - origArray[i]));

    }

    cout << "The minimum sum of distances: " << minsumDstc;//pre-defined statement



    return 0;

}

/*sample run result:

test case #1

Welcome to the new test case! Please grab a pen and a paper to note down computation results.

Now then, Please kindly input number of relatives.

3

Number of relatives: 3

Please input street numbers of relatives

2 4 6



Street numbers in proper order: 2 4 6

Optimal Vito's house number: 4

The minimum sum of distances: 4



test case #2

Welcome to the new test case! Please grab a pen and a paper to note down computation results.

Now then, Please kindly input number of relatives.

10

Number of relatives: 10

Please input street numbers of relatives

2 12 23 10 3 40 20 19 4 10



Street numbers in proper order: 2 3 4 10 10 12 19 20 23 40

Optimal Vito's house number: 12

The minimum sum of distances: 85

*/