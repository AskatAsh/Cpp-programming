#include <bits/stdc++.h>
using namespace std;

class Shop
{
public:
    int no_of_products;
    string product_name[10];
    int product_price[10];
    int product_quantity[10];

private:
    int total_income = 0;

public:
    int get_total_income()
    {
        return total_income;
    }
    void set_total_income(int income)
    {
        total_income += income;
    }
};

void set_products(Shop &shop)
{
    int no_of_products;
    cout << "Number of Products: ";
    cin >> no_of_products;
    shop.no_of_products = no_of_products;

    for (int i = 0; i < no_of_products; i++)
    {
        cout << "Product " << i + 1 << " Name: ";
        cin >> shop.product_name[i];
        cout << "Product " << i + 1 << " Price: ";
        cin >> shop.product_price[i];
        cout << "Product " << i + 1 << " Quantity: ";
        cin >> shop.product_quantity[i];
    }
}

void show_products(Shop &shop)
{
    cout << endl;
    cout << "\t\t"
         << "BUY PRODUCT" << endl;
    cout << "\t"
         << "............................." << endl;

    cout << "Product Index"
         << "\t\t";
    for (int i = 0; i < shop.no_of_products; i++)
    {
        cout << i + 1 << "\t";
    }
    cout << endl;

    cout << "Product Name"
         << "\t\t";
    for (int i = 0; i < shop.no_of_products; i++)
    {
        cout << shop.product_name[i] << "\t";
    }
    cout << endl;

    cout << "Product Price"
         << "\t\t";
    for (int i = 0; i < shop.no_of_products; i++)
    {
        cout << shop.product_price[i] << "\t";
    }
    cout << endl;

    cout << "Product Quantity"
         << "\t";
    for (int i = 0; i < shop.no_of_products; i++)
    {
        cout << shop.product_quantity[i] << "\t";
    }
    cout << endl
         << endl;
}

void buy_products(Shop &shop)
{
    int product_index, product_quantity;
    int income;
    cout << "Which product do you want? from 1 to " << shop.no_of_products << ": ";
    cin >> product_index;

    cout << "Enter quantity of " << shop.product_name[product_index - 1] << ": ";
    cin >> product_quantity;
    cout << endl;

    if (shop.product_quantity[product_index - 1] >= product_quantity)
    {
        income = shop.product_price[product_index - 1] * product_quantity;
        shop.set_total_income(income);
        shop.product_quantity[product_index-1] -= product_quantity;

        cout << product_quantity << " pieces of " << shop.product_name[product_index - 1] << " bought successfully!" << endl;
        cout << "Your total income: " << shop.get_total_income() << endl;
    }
    else
    {
        cout << "You don't have enough quantity of " << shop.product_name[product_index - 1] << "s" << endl;
    }
}

int main()
{
    Shop shop;
    set_products(shop);
    while (true)
    {
        show_products(shop);
        buy_products(shop);
    }
    // show_products(shop);
    // buy_products(shop);
}