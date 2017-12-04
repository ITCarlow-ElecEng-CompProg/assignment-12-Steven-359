/**< Steven O' Brien
Exercise 12
Complex Number Calculations
 */


#include <iostream>

//Structure definition
struct complexnumber
{
    float real;
    float imag;
};
// sub functions declarations
complexnumber add(complexnumber struct1, complexnumber struct2);
complexnumber subtract(complexnumber struct1, complexnumber struct2);
complexnumber multiply(complexnumber struct1, complexnumber struct2);
complexnumber divide(complexnumber struct1, complexnumber struct2);

using namespace std;



int main()
{
    // print heading
    cout << " Complex Number Calculations" << endl;


    //variables declaired type struct
    struct complexnumber entry1, entry2, sum, sub, mul, div;

    //Allows the user enter values
    cout << "Enter a Real number: " << endl;
    cin >> entry1.real;

    cout << "Enter an Imaginary number: " << endl;
    cin >> entry1.imag;

    cout << "Enter another Real number: " << endl;
    cin >> entry2.real;

    cout << "Enter another Imaginary number: " << endl;
    cin >> entry2.imag;

    // calling funtions to add,subtract,multiply and divide values
    sum = add(entry1, entry2);
    sub = subtract(entry1, entry2);
    mul = multiply(entry1, entry2);
    div = divide(entry1, entry2);

        //Displays the results to the ur=ser
        cout << "The sum of "<<entry1.real<< "+" << entry1.imag<< "j"<< " + "<<entry2.real<< "+" << entry2.imag<< "j"<<
        " = " << sum.real << "+" << sum.imag << "j" << endl;

        cout << "The sum of "<<entry1.real<< "+" << entry1.imag<< "j"<< " - "<<entry2.real<< "+" << entry2.imag<< "j"<<
        " = " << sub.real << "+" << sub.imag << "j" << endl;

        cout << "The sum of "<<entry1.real<< "+" << entry1.imag<< "j"<< " x "<<entry2.real<< "+" << entry2.imag<< "j"<<
        " = " << mul.real << "+" << mul.imag << "j" << endl;

        cout << "The sum of "<<entry1.real<< "+" << entry1.imag<< "j"<< " / "<<entry2.real<< "+" << entry2.imag<< "j"<<
        " = " << div.real << "+" << div.imag << "j" << endl;


    return 0;
}

//Function to add complex numbers
complexnumber add(complexnumber struct1, complexnumber struct2)
{

    struct complexnumber Sum;


    Sum.real = struct1.real + struct2.real;

    Sum.imag = struct1.imag + struct2.imag;

    return Sum;
}

//Function to subtract complex numbers
complexnumber subtract(complexnumber struct1, complexnumber struct2)
{

    struct complexnumber Sub;

    Sub.real = struct1.real - struct2.real;
    Sub.imag = struct1.imag - struct2.imag;

    return Sub;
}

//Function to multiply complex numbers
complexnumber multiply(complexnumber struct1, complexnumber struct2)
{

    struct complexnumber Mul;


    Mul.real = struct1.real*struct2.real - struct1.imag*struct2.imag;
    Mul.imag = struct1.imag*struct2.real + struct1.real*struct2.imag;

    return Mul;
}

//Function to divide complex numbers
complexnumber divide(complexnumber struct1, complexnumber struct2)
{

    struct complexnumber Div;

    float denominator;


    Div.real = struct1.real*struct2.real + struct1.imag*struct2.imag;
    Div.imag = struct1.imag*struct2.real - struct1.real*struct2.imag;
    denominator = struct2.real*struct2.real + struct2.imag*struct2.imag;
    Div.real = Div.real/denominator;
    Div.imag = Div.imag/denominator;

    return Div;
}
