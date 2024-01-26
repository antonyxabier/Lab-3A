#include <math.h>
#include <string>


/*  Instructions
* ========================
* Each method below will be called within a separate "Test" class.
* These methods will be passed several random values as arguments.
*
* Read the instructions for each test and complete
* the method so that it outputs the expected result.
*
* Tips:
* - For this lab, do not override the value provided as a parameter
* 
* - Do not alter any of the given code unless specifically told otherwise.
* - Make sure to run your application regularly to make sure you're receiving
*   the expect output.
* 
* - Syntax errors (red squiggly lines) indicate an error that will prevent your
*   code from building and running. Even if it seems as if your application is
*   running, Visual Studio is simply showing your the last "working" version
*   of your code.
*/

class Submission {
public:
    /* Test 1
* ==================
* Given an integer parameter "years", return the
* given value convert into days.
*
* Example input:
* - 5
*
* Expected output:
* - 1,825
*/
    static int Test1(int years)
    {
        // Result Placeholder  
        int result = 0;

        // Set the result to years converted into days
        result = years * 365;

        // Return result
        return result;

    }

    /* Test 2
    * ==================
    * Given two double parameters "number1" and "number2, return the
    * value of number1 divided by number2.
    *
    * Example input:
    * - 5.00
    * - 2.00
    *
    * Expected output:
    * - 2.50
    */
    static double Test2(double number1, double number2)
    {
        //Result placeholder
        double result = 0;

        //Set the result to number1 divided by number2
        result = number1 / number2;

        // Return result
        return result;

    }

    /* Test 3
    * ==================
    * Given two integer parameters "number1" and "number2, return the
    * value of the remainder of number1 divided by number2.
    *
    *
    * Example input:
    * - 7
    * - 2
    *
    * Expected output:
    * - 1
    */
    static int Test3(int number1, int number2)
    {
        //Result placeholder
        int result = 0;

        // Set the result to the remainder of number1 divided by number2
        result = number1 % number2;

        //Return result
        return result;

    }

    /* Test 4
    * ==================
    * Given a double parameter "input", find square root
    * of the input value using the sqrt() method,
    * then return the result converted float by using a cast.
    *
    * References:
    * - https://www.geeksforgeeks.org/sqrt-sqrtl-sqrtf-cpp/
    * - https://cplusplus.com/reference/cmath/sqrt/
    * - https://www.geeksforgeeks.org/type-conversion-in-c/
    *
    * Example input:
    * - 36
    *
    * Expected output:
    * - 6
    */
    static float Test4(double input)
    {
        //Root placeholder
        double root = input;
        //Find square root of the input value
        double square = sqrt(root);

        //convert double square into float by using a cast
        float x = (float)square;

        //Return the result
        return x;

    }

    /* Test 5
    * ==================
    * Given two integer parameters "number" and "power",
    * return the value of number raised to power by using the
    * pow() method.
    *
    * References:
    * - https://cplusplus.com/reference/cmath/pow/
    * - https://www.geeksforgeeks.org/power-function-c-cpp/
    *
    * Example input:
    * - 5
    * - 2
    *
    * Expected output:
    * - 25
    */
    static double Test5(int number, int power)
    {
        //a and b Placeholder 
        int a = number, b = power;

        //Set the result of number raised to power
        int result = pow(a, b);

        //Return result
        return result;

    }

    /* !!!!!!!!!!!!!!!!!!!!!!!!!!!!!   IMPORTANT   !!!!!!!!!!!!!!!!!!!!!!!!!!!!!
    * ============================================================================================
    * From this point on, you will need to create your own methods.
    *
    * ALL of the methods must use the follwing keywords:
    * - public: the access for the method must be set to public
    * - static: the access for the method must also be static
    *
    * See the above methods for an example.
    *
    * Once the method has been created, locate and uncomment the
    * corresponding line at the top of the Test.cs file.
    *
    * DO NOT alter any other part of the file as this could cause
    * unexpected output and would be considered academic dishonesty.
    * ============================================================================================
    * !!!!!!!!!!!!!!!!!!!!!!!!!!!!!   IMPORTANT   !!!!!!!!!!!!!!!!!!!!!!!!!!!!!
    */

    /* Test 6
    * ==================
    * Create a method named "Test6" that accepts three string parameters.
    * Return the value of all three paramaters combined to form a question.
    *
    * Tips:
    * - You may use either concatenation or interpolation to complete this.
    * - Pay attention to the output of the console to make sure your are providing
    *   the expected result.
    *
    * Example input:
    * - "Hey,"
    * - "what's up"
    * - "man"
    *
    * Expected output:
    * - "Hey, what's up man?"
    */

    static std::string Test6(std::string number1, std::string number2, std::string number3)
    {
        //d, e and f placeholder
        std::string d = number1;
        std::string e = number2;
        std::string f = number3;

        //Set result using concatenation
        std::string result = d + " " + e + " " + f + "?";

            //Return result
            return result;

    }

    /* Test 7
    * ==================
    * Create a method named "Test7" that accepts one double parameter.
    * Return the value of the double parameter converted
    * to a float by using a cast.
    *
    * References:
    * - https://www.geeksforgeeks.org/type-conversion-in-c/
    *
    * Example input:
    * - 5.25
    *
    * Expected output:
    * - 5.25f
    */

    static double Test7(double number1) 
    { 
        //Result placeholder
        double result = number1;

        //Convert double result to float by using a cast
        float x = (float)result;

        //Return x
        return x;

    }

    /* Test 8
    * ==================
    * Create a method named "Test8" that accepts three double parameters.
    * Return a double value that contains the average of the three double parameters.
    *
    * Example input:
    * - 25.0
    * - 45.0
    * - 65.0
    *
    * Expected output:
    * - 45.0
    */
    static double Test8(double number1, double number2, double number3) 
    {
        //g, h and i placeholder
        double g = number1;
        double h = number2;
        double i = number3;

        //Set the result that contains the average of a, b and c
        double average = (g + h + i) / 3;

        //Return average
        return average;


    }
    /* Test 9
    * ==================
    * Create a method named "Test9" that accepts two double parameters named "triBase" and "triHeight".
    * Using the given values for base and height, determine the area of a triangle and return the
    * result as a double.
    *
    * Tips:
    * - The formula for the area of a triangle is 1/2 * base * height.
    * - This solution should not require any type of conversion.
    *
    * References:
    * - https://www.cuemath.com/measurement/area-of-triangle/
    *
    * Example input:
    * - 10, 7
    *
    * Expected output:
    * - 35
    */
    static double Test9(double triBase, double triHeight) 
    
   {
        // a and b placeholder
        double j = triBase, k = triHeight;

        //Determine the area of a triangle
        double area = 0.5 * j * k;

        //return area
        return area;


    }
    /* Test 10
    * ==================
    * Create an overload for Test2 that accepts 3 double values, instead of 2.
    * Return the value of number1 divided by number2 divided by number3.
    *
    * Tips:
    * - Remember that a method overload is a different version of a method
    *   that has the same identifier but accepts different parameters,
    *   has a different return type, or both.
    *
    * References:
    * - https://www.geeksforgeeks.org/function-overloading-c/
    * - https://learn.microsoft.com/en-us/cpp/cpp/function-overloading?view=msvc-170
    *
    * Example input:
    * - 5.0
    * - 2.0
    * - 6.0
    *
    * Expected output:
    * - 4.167
    */

    static double Test2(double number1, double number2, double number3)
    {
        //Result placeholder
        double result = 0;

        //Set the result to number1 divided by number2 divided by number3
        result = number1 / number2 / number3;

        // Return result
        return result;

    }
};
