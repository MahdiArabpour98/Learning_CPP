#include <iostream>
#include <string>
#include <cstdint>
using namespace std;

namespace
{
    enum e_color : std::uint8_t
    {
        red,
        green,
        blue,
        yellow,
    };
}


struct s_product
{
    string name;
    e_color color;
    float price;
    int quantity;

    void show_details() const
    {
        cout << "Name: " << name << "\n";
    }

    float get_total_prices() const
    {
        return price * quantity;
    }
};


int main()
{
    s_product product1 = {"t", e_color::red, 100.0f,10};
    product1.name = "test product";
    product1.color = e_color::yellow;
    product1.price = 1.5;
    product1.quantity = 2;
    product1.show_details();
    cout << product1.get_total_prices();

    return 0;
}
