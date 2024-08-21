#include <iostream>
#include <string>
#include <fstream>
using namespace std;

struct BakeryItem {
    string Item_Name;
    string category;
    string Available_Item;
    float Item_Price;
};


struct SalesDetails {
    int quantity;
    string Item_Name;
    string category;
    float Total;
};


BakeryItem bakeryitem[30];
SalesDetails salesdetails;

// Function prototype declaration
void addNewBakeryItem();
void viewNewBakeryItem();
void viewBakeryItem();
void addOrderDetails();
void viewOrderDetails();
void makeSalesDetails();
void viewSalesDetails();
void manageBakeryItemSalesDetails();
void viewMySalesDetails();
void viewCompanyDetails();
void login();
void mainMenu();
void admin_function();
void cashier_function();


int main() {

    cout << ".......................................................... " << endl; // function calling
    cout << ".........Amber Bakery automated Information system........ " << endl; // function calling
    cout << "................Welcome to our Bakery Platform............." << endl;
    mainMenu();

    return 0;
}


void addNewBakeryItem() {
    fstream myfile;

    string NItem_Name, category, Available_Item;
    float NItem_Price;

    cout << endl;
    cout << "Enter New Bakery Item Name: ";
    cin >> NItem_Name;
    cout << "Enter Category: ";
    cin >> category;
    cout << "Enter Available Bakery Item: ";
    cin >> Available_Item;
    cout << "Enter New Bakery Item Price: ";
    cin >> NItem_Price;

    myfile.open("NewBakeryItem.txt", ios::out | ios::app);
    myfile << "New Item Name: " << NItem_Name << endl;
    myfile << "Category: " << category << endl;
    myfile << "Available Bakery Item: " << Available_Item << endl;
    myfile << "New Bakery Item Price: " << NItem_Price << endl;
    myfile.close();
}


void viewNewBakeryItem()
{
    fstream myfile;
    myfile.open("NewBakeryItem.txt", ios::in);

    string line;
    while (getline(myfile, line)) {
        cout << line << endl;
    }

    myfile.close();
}


void viewBakeryItem() {
    fstream myfile;
    myfile.open("bakeryitem.txt", ios::in);

    string line;
    while (getline(myfile, line)) {
        cout << line << endl;
    }

    myfile.close();
}


void addOrderDetails() {
    fstream myfile;

    string OrderItem_Name, Customer_Name, Order_Date, Order_Time, Order_RequiredDate;
    float Order_Price, Customer_HomeAddress, Order_Number;

    cout << endl;
    cout << "Enter Order Item Name: ";
    cin >> OrderItem_Name;
    cout << "Enter Customer Name: ";
    cin >> Customer_Name;
    cout << "Enter Order Date: ";
    cin >> Order_Date;
    cout << "Enter Order Price: ";
    cin >> Order_Price;
    cout << "Enter Order Time: ";
    cin >> Order_Time;
    cout << "Enter Order Required Date: ";
    cin >> Order_RequiredDate;
    cout << "Enter Customer Home Address: ";
    cin >> Customer_HomeAddress;
    cout << "Enter Order Number: ";
    cin >> Order_Number;

    myfile.open("OrderDetails.txt", ios::out | ios::app);
    myfile << "Order Item Name: " << OrderItem_Name << endl;
    myfile << "Customer Name: " << Customer_Name << endl;
    myfile << "Order Date: " << Order_Date << endl;
    myfile << "Order Price: " << Order_Price << endl;
    myfile << "Order Time: " << Order_Time << endl;
    myfile << "Order RequiredDate: " << Order_RequiredDate << endl;
    myfile << "Customer Home Address: " << Customer_HomeAddress << endl;
    myfile << "Order Number: " << Order_Number << endl;
    myfile.close();

}


void viewOrderDetails()
{
    fstream myfile;
    myfile.open("OrderDetails.txt");

    string line;
    while (getline(myfile, line)) {
        cout << line << endl;
    }

    myfile.close();
}


void makeSalesDetails() {
    fstream myfile;

    string Item_Name, category, CName;
    int quantity;
    float Total;

    cout << endl;
    cout << "Enter Customer Name: ";
    cin >> CName;
    cout << "Enter Item Name: ";
    cin >> Item_Name;
    cout << "Enter Bakery Item Category: ";
    cin >> category;
    cout << "Enter Item quantity: ";
    cin >> quantity;
    cout << "Enter Total of Items: ";
    cin >> Total;

    myfile.open("SalesDetails.txt", ios::out | ios::app);
    myfile << "Customer Name: " << CName << endl;
    myfile << "Item Name: " << Item_Name << endl;
    myfile << "Bakery Item Category: " << category << endl;
    myfile << "Item quantity: " << quantity << endl;
    myfile << "Total of Items: " << Total << endl;
    myfile.close();

}


void viewSalesDetails()
{
    fstream myfile;
    myfile.open("SalesDetails.txt");

    string line;
    while (getline(myfile, line)) {
        cout << line << endl;
    }

    myfile.close();
}


void manageBakeryItemSalesDetails() {
    fstream myfile;

    string CName, Item_Name, category;
    int quantity;
    float Total, Bill_Num, Bill_Date;

    cout << endl;
    cout << "Enter Customer Name: ";
    cin >> CName;
    cout << "Enter Bakery Item Name: ";
    cin >> Item_Name;
    cout << "Enter Bakery Item Category: ";
    cin >> category;
    cout << "Enter Item quantity: ";
    cin >> quantity;
    cout << "Enter Total of Items: ";
    cin >> Total;
    cout << "Enter Payment Bill Number: ";
    cin >> Bill_Num;
    cout << "Enter Payment Bill Date: ";
    cin >> Bill_Date;

    myfile.open("MSalesDetails.txt", ios::out | ios::app);
    myfile << "Customer Name: " << CName << endl;
    myfile << "Bakery Item Name: " << Item_Name << endl;
    myfile << "Bakery Item Category: " << category << endl;
    myfile << "Item quantity: " << quantity << endl;
    myfile << "Total of Item: " << Total << endl;
    myfile << "Payment Bill Number: " << Bill_Num << endl;
    myfile << "Payment Bill Date: " << Bill_Date << endl;

    myfile.close();

}


void viewMySalesDetails() {
    fstream myfile;
    myfile.open("MSalesDetails.txt", ios::in);

    string line;
    while (getline(myfile, line)) {
        cout << line << endl;
    }

    myfile.close();
}


void viewCompanyDetails() {
    fstream myfile;
    myfile.open("Company.txt", ios::in);

    string line;
    while (getline(myfile, line))
    {
        cout << line << endl;
    }

    myfile.close();
}


bool admin_login() {
    string AdminName, Password;

    cout << "Please Enter Admin Name:";
    cin >> AdminName;
    cout << "Please Enter Password:";
    cin >> Password;

    if (AdminName == "Admin" && Password == "0987") {
        cout << "Successfully logged into the system" << endl;
        return true;
    }
    else {
        cout << "Invalid admin name or password" << endl;
        return false;
    }
}


bool cashier_login() {
    string CashierName, Password;

    cout << "Please Enter Cashier Name:";
    cin >> CashierName;
    cout << "Please Enter Password:";
    cin >> Password;

    if (CashierName == "Cashier" && Password == "0987") {
        cout << "Successfully logged into the system" << endl;
        return true;
    }
    else {
        cout << "Invalid cashier name or password" << endl;
        return false;
    }
}


void mainMenu() {
    string option;

    while (true) {
        cout << "Enter 1 to Login as Admin" << endl;
        cout << "Enter 2 to Login as Cashier" << endl;
        cout << "Enter 3 to Exit" << endl;
        cout << "Enter your option: ";
        cin >> option;

        if (option == "1") {
            if (admin_login()) {
                admin_function();
            }
        }
        else if (option == "2") {
            if (cashier_login()) {
                cashier_function();
            }
        }
        else if (option == "3") {
            cout << "EXIT" << endl;
            break;
        }
        else {
            cout << "Invalid option. Try again." << endl;
        }
    }
}


void admin_function() {
    int choice;
    bool adminYes = true;

    while (adminYes) {
        cout << ".....................ADMIN......................" << endl << endl;
        cout << "Enter number 1 to Add New bakery item details" << endl;
        cout << "Enter number 2 to view bakery item details" << endl;
        cout << "Enter number 3 to view Sales Details" << endl;
        cout << "Enter number 4 to Manage bakery item sales details" << endl;
        cout << "Enter number 5 to logout" << endl;


        cout << "Please choose an option: ";
        cin >> choice;

        cout << endl;
        cout << endl;

        switch (choice) {
        case 1:
            addNewBakeryItem();
            break;

        case 2:
            viewBakeryItem();
            break;

        case 3:
            viewSalesDetails();
            break;

        case 4:
            manageBakeryItemSalesDetails();
            cout << "Sales Details Added Successfully" << endl;
            break;

        case 5:
            cout << "Logout..." << endl;
            adminYes = false;
            break;

        default:
            cout << "Invalid input" << endl;
            break;
        }
    }
}


void cashier_function() {
    int choice;
    bool cashierYes = true;

    while (cashierYes) {
        cout << "........................CASHIER..........................." << endl << endl;
        cout << "Enter number 1 to view bakery item" << endl;
        cout << "Enter number 2 to add order details " << endl;
        cout << "Enter number 3 to view order detalis" << endl;
        cout << "Enter number 4 to view sales details" << endl;
        cout << "Enter number 5 to view my sales details" << endl;
        cout << "Enter number 6 to EXIT" << endl;
        cout << "Enter number 7 to view company details" << endl;
        cout << endl;
        cout << "Please choose an option: ";
        cin >> choice;

        switch (choice) {
        case 1:
            viewBakeryItem();
            break;

        case 2:
            addOrderDetails();
            break;

        case 3:
            viewOrderDetails();
            break;

        case 4:
            viewSalesDetails();
            break;

        case 5:
            viewMySalesDetails();
            break;

        case 6:
            cout << "Exit..." << endl;
            cashierYes = false;
            break;

        case 7:
            viewCompanyDetails();
            break;

        default:
            cout << "Invalid input" << endl;
            break;
        }
    }
}

