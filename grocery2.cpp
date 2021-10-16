#include<iostream>
using namespace std;

class GroceryItem
{
    private:
        int stockNum;
        double price;
        int quantityInStock;
        double totalValue;
        int getStockNum();
        double getPrice();
        int getQuantityInStock();
        double calculateTotal(); 
    public:
        void dataEntry(int, double, int);
        void setStockNum(int);
        void setPrice(double);
        void setQuantity(int);
        void displayGroceryItem(int, double, int, double); 
};
    int GroceryItem::getStockNum()
    {
    int itemNum = 0;
    stockNum = itemNum;
    int LOW = 1000;
    int HIGH = 9999;
    int stockNum = itemNum;
    cout << "Enter an item number >> ";
    cin >> itemNum;
    while(itemNum < LOW || itemNum > HIGH)
    {
        cout << "Invalid item number. Enter a valid item number between 1000 and 9999 >> ";
        cin >> itemNum;
    }
    return stockNum;        
}
double GroceryItem::getPrice()
{
    double itemPrice = 0;
    price = itemPrice;
    cout << "Enter the item price >> ";
    cin >> itemPrice;
    if(itemPrice < 0)
    {
        cout << "Invalid price. Enter a positive number >> ";
        cin >> itemPrice;cxszc
    }
    return price;
};
int GroceryItem::getQuantityInStock()
{
    int itemQuantity = 0;
    quantityInStock = itemQuantity;
    cout << "Enter a quantity >> ";
    cin >> itemQuantity;
    if(itemQuantity < 0)
    {
        cout << "Invalid quantity. Enter a positive number >> ";
        cin >> itemQuantity;
    }
    return quantityInStock;
};
double GroceryItem::calculateTotal()
{
    int itemQuantity = 0;
    double itemPrice = 0, totalValue;
    quantityInStock = itemQuantity;
    price = itemPrice;
    totalValue = itemQuantity * itemPrice;
    return totalValue;
}
void GroceryItem::setStockNum(int itemNum)
{
    stockNum = itemNum;
}
void GroceryItem::setPrice(double itemPrice)
{
    price = itemPrice;
    displayGroceryItem(stockNum, price, quantityInStock, totalValue);
}
void GroceryItem::setQuantity(int itemQuantity)
{
    quantityInStock = itemQuantity;
}
void GroceryItem::displayGroceryItem(int itemNum, double itemPrice, int itemQuantity, double grandTotal)
{
    this->stockNum = itemNum;
    this->totalValue = grandTotal;
    this->quantityInStock = itemQuantity;
    this->price = itemPrice;
    totalValue = quantityInStock * price;
    cout << "The stock number is #" << itemNum << endl <<
        "The price of the item is $" << itemPrice << endl <<
        "The quantity in stock is " << itemQuantity << endl <<
        "Total value is: $" << totalValue << endl;
}
void GroceryItem::dataEntry(int, double, int)
{
    GroceryItem::getStockNum();
    GroceryItem::getPrice();
    GroceryItem::getQuantityInStock();
};
int main()
{
    GroceryItem stock;
    int stockNum, quantityInStock, itemNum, quantity;
    double price, totalValue, itemPrice, grandTotal;

    stock.dataEntry(stockNum, price, quantityInStock); 
    stock.displayGroceryItem(stockNum, price, quantityInStock, totalValue); 
    return 0;
}