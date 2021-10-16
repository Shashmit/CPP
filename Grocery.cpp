#include<iostream>
using namespace std;

class GroceryItem
{
private:
    int item_stock_number;
    float price;
    int quantity_stock;
    float total_value;
public:
    int dataEntry(){
    int itemNum = 0;
    item_stock_number = itemNum;
    int stockNum = itemNum;
    cout << "Enter an item number >> ";
    cin >> itemNum;
    while(itemNum <= 9999 || itemNum >= 1000)
    {
        cout << "Invalid item number. Enter a valid item number between 1000 and 9999 >> ";
        cin >> itemNum;
    }
    return stockNum;        
    }
    int price(){
        float itemPrice = 0;
        price = itemPrice;
        cout << "Enter the item price >> ";
        cin >> itemPrice;
        if(itemPrice < 0)
    {
        cout << "Invalid price. Enter a positive number >> ";
        cin >> itemPrice;
    }
    return price;
    }
    int quantity_stock(){
    int itemQuantity = 0;
    quantity_stock = itemQuantity;
    cout << "Enter a quantity >> ";
    cin >> itemQuantity;
    if(itemQuantity < 0)
    {
        cout << "Invalid quantity. Enter a positive number >> ";
        cin >> itemQuantity;
    }
    return quantity_stock;
    }
};
