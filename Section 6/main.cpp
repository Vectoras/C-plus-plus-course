#include <iostream>

int main () {
    int small_rooms {0};
    int large_rooms {0};
    const int small_room_price {25};
    const int large_room_price {35};
    const double tax {0.06};

    std::cout << "Welcome to Frank's Carpet Cleaning Service" << std::endl;
    std::cout << "\nHow many small rooms would you like cleaned? ";
    std::cin >> small_rooms;
    std::cout << "How many large rooms would you like cleaned? ";
    std::cin >> large_rooms;

    std::cout << "\nEstimate for carpet cleaning service" << std::endl;
    std::cout << "Number of small rooms: " << small_rooms << std::endl;
    std::cout << "Number of large rooms: " << large_rooms << std::endl;

    std::cout << "\nPrice per small room: $" << small_room_price << std::endl;
    std::cout << "Price per large room: $" << large_room_price << std::endl;
    int total = small_room_price * small_rooms + large_room_price * large_rooms;
    std::cout << "Cost: $" << total << std::endl;
    std::cout << "Tax: $" << total * tax << std::endl;
    std::cout << "==================================================================" << std::endl;
    std::cout << "Total Estimate: $" << total * tax +  total << std::endl;
    std::cout << "This estimate is valid for 30 days";


    return 0;
}