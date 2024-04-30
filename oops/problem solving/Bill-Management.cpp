#include <bits/stdc++.h>
using namespace std;

class Restaurant
{
public:
    int no_of_items;
    int food_item_codes[12];
    string food_item_names[12];
    int food_item_prices[12];

private:
    double total_tax;

public:
    void set_tax(double tax)
    {
        total_tax = tax;
    }
    double get_tax()
    {
        return total_tax;
    }
};

class Bill_summery
{
public:
    int no_of_items;
    int food_item_codes[12];
    string food_item_names[12];
    int food_item_prices[12];
    int total_price[12];
    int food_quantity[12];
    int table_no;
    double total_amount = 0;
    double final_amount;
    int valid_code;

    void check_code(Restaurant &restaurant, int food_code)
    {
        for (int i = 0; i < restaurant.no_of_items; i++)
        {
            if (food_code == restaurant.food_item_codes[i])
            {
                this->valid_code = 1;
                // cout<<"valid code "<<valid_code<<endl;
                break;
            }else{
                this->valid_code = 0;
                // cout<<"valid code "<<valid_code<<endl;
            }
        }
    }

    void ordered_menu(Restaurant &restaurant, int food_code, int food_quantity)
    {
        for (int i = 0; i < restaurant.no_of_items; i++)
        {
                this->food_item_codes[i] = restaurant.food_item_codes[i];
                this->food_item_names[i] = restaurant.food_item_names[i];
                this->food_item_prices[i] = restaurant.food_item_prices[i];
                this->food_quantity[i] = food_quantity;
                total_price[i] = restaurant.food_item_prices[i] * food_quantity;
        }
    }
};

void create_menu(Restaurant &restaurant)
{
    int no_of_items;
    cout << "Number of Items: ";
    cin >> no_of_items;
    restaurant.no_of_items = no_of_items;

    for (int i = 0; i < no_of_items; i++)
    {
        cout << "Item " << i + 1 << " code: ";
        cin >> restaurant.food_item_codes[i];
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cout << "Item " << i + 1 << " name: ";
        getline(cin, restaurant.food_item_names[i]);

        cout << "Item " << i + 1 << " price: ";
        cin >> restaurant.food_item_prices[i];
    }
}

void show_menu(Restaurant &restaurant)
{
    cout << "\t\t"
         << "MAKE BILL" << endl;
    cout << "\t"
         << "______________________________" << endl;

    cout << "Item Code"
         << "\t\t"
         << "Item Name"
         << "\t\t\t"
         << "Item Price" << endl;
    for (int i = 0; i < restaurant.no_of_items; i++)
    {
        cout << restaurant.food_item_codes[i] << "\t\t\t" << restaurant.food_item_names[i] << "\t\t" << restaurant.food_item_prices[i] << endl;
    }
}

void take_order(Restaurant &restaurant, Bill_summery &bill_summery)
{
    int no_of_items, table_no, food_quantity, food_code;
    cout<<endl;
    cout << "Enter table no: ";
    cin >> table_no;
    cout << "Number of Items: ";
    cin >> no_of_items;
    cout<<endl;

    bill_summery.table_no = table_no;
    bill_summery.no_of_items = no_of_items;
    for (int i = 0; i < no_of_items; i++)
    {
        cout << "Item " << i + 1 << " code: ";
        cin >> food_code;

        bill_summery.check_code(restaurant, food_code);
        // cout<<"valid code "<<bill_summery.valid_code<<endl;

        if (bill_summery.valid_code)
        {
            cout << "Item " << i + 1 << " quantity: ";
            cin >> food_quantity;
            cout<<endl;

            bill_summery.ordered_menu(restaurant, food_code, food_quantity);
        }
        else{
            break;
        }
    }
}

void show_bill(Bill_summery &bill_summery)
{
    cout << "\t\t"
         << "BILL SUMMERY" << endl;
    cout << "\t"
         << "____________________________" << endl;

    cout << "Table No: " << bill_summery.table_no << endl;
    cout << "Item Code"
         << "\t"
         << "Item Name"
         << "\t"
         << "Item Price"
         << "\t"
         << "Item Quantity"
         << "\t"
         << "Total Price" << endl;
    for (int i = 0; i < bill_summery.no_of_items; i++)
    {
        cout << bill_summery.food_item_codes[i]
             << "\t\t"
             << bill_summery.food_item_names[i]
             << "\t"
             << bill_summery.food_item_prices[i]
             << "\t"
             << bill_summery.food_quantity[i]
             << "\t"
             << bill_summery.total_price[i] << endl;
    }
}

void final_price(Restaurant &restaurant, Bill_summery &bill_summery)
{
    for (int i = 0; i < bill_summery.no_of_items; i++)
    {
        bill_summery.total_amount += bill_summery.total_price[i];
    }
    double total_tax;
    total_tax = (bill_summery.total_amount * 5) / 100;
    restaurant.set_tax(total_tax);
    bill_summery.final_amount = restaurant.get_tax() + bill_summery.total_amount;

    cout << "Total Tax: "
         << "\t\t\t\t\t" << restaurant.get_tax() << endl;
    string st(70, '_');
    cout << st << endl;
    cout << "Final Price: "
         << "\t\t\t\t\t" << bill_summery.final_amount << endl;
}

int main()
{
    Restaurant restaurant;
    Bill_summery bill_summery;
    create_menu(restaurant);
    show_menu(restaurant);

    while (true)
    {
        take_order(restaurant, bill_summery);
        // cout<<bill_summery.valid_code<<endl;
        if (bill_summery.valid_code)
        {
            show_bill(bill_summery);
            final_price(restaurant, bill_summery);
        }
        else
        {
            cout << "Invalid Food Code" << endl;
        }
    }
}