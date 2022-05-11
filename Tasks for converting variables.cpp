#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    //1ST TASK. The user enters two fractional numbers from the keyboard. Display the sum of integer parts and the sum of fractional parts.
    double num1, num2, frac_part1, frac_part2, sum_frac_parts;
    int int_part1, int_part2, sum_int_parts;
    
    cout << "Enter first number: ";
    cin >> num1;
    
    cout << "Enter second number: ";
    cin >> num2;
    
    int_part1 = (int)num1;
    int_part2 = (int)num2;
    sum_int_parts = int_part1 + int_part2;
    
    frac_part1 = num1 - int_part1;
    frac_part2 = num2 - int_part2;
    sum_frac_parts = frac_part1 + frac_part2;
    
    cout << "The sum of fractional parts of this numbers is equal to " << sum_frac_parts << endl;
    cout << "The sum of integer parts of this numbers is equal to " << sum_int_parts << endl;


    //2ND TASK. The user enters the distance to the airport from the keyboard (in kilometers, may be a fractional value) and time, for which you need to get there (in minutes). Calculate the speed (km/h) at which you need to go.
    double distance_to_airport, time_mins, time_hours, speed;
    
    cout << "Enter distance to the airport: ";
    cin >> distance_to_airport;
    
    cout << "Enter in how many minutes do you have to be at the airport: ";
    cin >> time_mins;
    
    time_hours = time_mins / 60;
    
    speed = distance_to_airport / time_hours;
    cout << "You have to move at a speed of " << (int)speed + 1 << " km/h" << endl;


    //3TH TASK. The user enters the time in seconds from the keyboard, elapsed since the beginning of the working day.Calculate how much whole hours left for him to sit at work, if the working day is 8 hours.
    const int working_day = 28800;
    int seconds;
    float rem_hours;
    
    cout << "Enter how many seconds have passed since the start of the working day: ";
    cin >> seconds;
    
    rem_hours = (working_day - seconds) / 3600;
    
    if (rem_hours > 0) {
        cout << "You have " << (int)rem_hours << " whole hours left to work" << endl;
    }
    else if (rem_hours == 0) {
        cout << "Go home, your work day is over";
    }
    else {
        cout << "You should be paid overtime, you overworked your 8 hours" << endl;
    }


    //4TH TASK. The user enters the cost of one laptop from the keyboard, their number and discount percentage. Calculate the total cost of the order.
    int laptop_number;
    float laptop_price, discount_percentage, total_cost;
    
    cout << "Enter number of laptops: ";
    cin >> laptop_number;
    
    cout << "Enter price of laptops: ";
    cin >> laptop_price;
    
    cout << "Enter discount percentage: ";
    cin >> discount_percentage;
    
    total_cost = laptop_number * laptop_price * (1 - discount_percentage / 100);
    cout << "The total cost of the order is equal to " << total_cost << endl;


    //5TH TASK. The user enters the size of one movie from the keyboard in gigabytes and speed of Internet-connection in bits per second. Define, how long (hours, minutes and seconds) the movie will download.
    float film_size, mins, hours;
    int internet_speed, secs;

    cout << "Enter the size of the movie in gigabytes: ";
    cin >> film_size;

    cout << "Enter the speed of Internet-connection (Mbit/s): ";
    cin >> internet_speed;

    film_size = film_size * pow(2, 13);

    secs = film_size / internet_speed;

    hours = secs / 3600.0;
    mins = (hours - (int)hours) * 60;
    secs = (mins - (int)mins) * 60;

    cout << "The movie will download " << (int)hours << " hours " << (int)mins << " minutes " << secs << " seconds " << endl;
}