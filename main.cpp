#include <iostream>

using namespace std;

int main()

{
    int num;

    cout << "Enter : ";

    cin >> num;

    if (num < 100000 || num > 999999)

    {

        cout << "Error" << endl;

        return 0;

    }

    int a = num / 100000;

    int b = (num / 10000) % 10;

    int c = (num / 1000) % 10;

    int d = (num / 100) % 10;

    int e = (num / 10) % 10;

    int f = num % 10;


    int sum1 = a + b + c;

    int sum2 = d + e + f;


    if (sum1 == sum2)

    {

        cout << "This number" << endl;

    }

    else

    {

        cout << "This is not number" << endl;

    }

    return 0;

}




#include <iostream>
#include <string>

int main() {
    std::string input;
    std::cout << "Enter a four-digit number: ";
    std::cin >> input;

    if (input.length() != 4) {
        std::cerr << "Error: Please enter a four-digit number." << std::endl;
        return 1;
    }

    std::swap(input[0], input[1]);
    std::swap(input[2], input[3]);

    std::cout << "New number after swapping digits: " << input << std::endl;

    return 0;
}




#include <iostream>
using namespace std;
int main() {
    setlocale(0, "");
    int now = 0, old = 0;
    for (int i = 0; i < 7; i++) {
        cout << i + 1 << "-ое число: ";
        cin >> now;
        if (now > old) {
            old = now;
        }
    }
    cout << "max number: " << old;
}



#include <iostream>

#include <cmath>

using namespace std;

int main()

{

    int AB, BC, weight, fuelAB, fuelBC, fuel;

    cout << "Enter distance between A and B: ";

    cin >> AB;

    cout << "Enter distance between B and C: ";

    cin >> BC;

    cout << "Enter weight of cargo: ";

    cin >> weight;

    if (weight <= 500)

    {

        fuelAB = AB;

        fuelBC = BC;

    }

    else if (weight <= 1000)

    {

        fuelAB = AB * 4;

        fuelBC = BC * 4;

    }

    else if (weight <= 1500)

    {

        fuelAB = AB * 7;

        fuelBC = BC * 7;

    }

    else if (weight <= 2000)

    {

        fuelAB = AB * 9;

        fuelBC = BC * 9;

    }

    else

    {

        cout << "The plane does not lift more than 2000 kg." << endl;

        return 0;

    }

    fuel = fuelAB + fuelBC;

    if (fuelAB >= 300 || fuelBC >= 300)

    {

        cout << "Impossible to cover any of the distances." << endl;

    }

    else

    {

        cout << "Minimum fuel needed: " << fuel << endl;

        cout << "Fuel needed for AB: " << fuelAB << endl;

        cout << "Fuel needed for BC: " << fuelBC << endl;

    }

    return 0;

}