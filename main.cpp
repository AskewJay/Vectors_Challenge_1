#include <iostream>
#include <string>

const std::string DAYS[7] = {
    "Sunday", "Monday", "Tuesday", "Wednesday",
    "Thursday", "Friday", "Saturday"
};

const std::string MONTHS[12] = {
    "January", "February", "March", "April",
    "May", "June", "July", "August",
    "September", "October", "November", "December"
};

int main()
{
    int choice;

    do
    {
        std::cout << "\n1. Get Day Name by Number (1-7)\n";
        std::cout << "2. Get Month Name by Number (1-12)\n";
        std::cout << "3. Quit\n";
        std::cout << "Enter choice: ";
        std::cin >> choice;

        switch (choice)
        {
            case 1:
            {
                int day;
                std::cout << "Enter day number (1-7): ";
                std::cin >> day;

                if (day >= 1 && day <= 7)
                    std::cout << "Day: " << DAYS[day - 1] << "\n";
                else
                    std::cout << "Invalid Day\n";

                break;
            }

            case 2:
            {
                int month;
                std::cout << "Enter month number (1-12): ";
                std::cin >> month;

                if (month >= 1 && month <= 12)
                    std::cout << "Month: " << MONTHS[month - 1] << "\n";
                else
                    std::cout << "Invalid Month\n";

                break;
            }

            case 3:
                std::cout << "Goodbye!\n";
                break;

            default:
                std::cout << "Invalid choice\n";
        }

    } while (choice != 3);

    return 0;
}