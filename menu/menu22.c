#include <iostream>
#include <time.h>
using namespace std;

class user
{
public:
    time_t asctime;
    int choice;
    string name;
    int qty, price = 0, tprice = 0, moreodr;
    void level1()
    {
        cout << endl
             << "Please Enter Your Name:";
        cin >> name;
        cout << endl
             << "Hello " << name << "!!"
             << "Its " << __DATE__ << " " << __TIME__ << endl
             << "\n\t What Would ypu like to have??" << endl;
        cout << endl
             << "\t[=[=[=[=[=[= MENU =]=]=]=]=]=]\t" << endl;
    }
    void level2()
    {
        cout << endl
             << "(1)Dim Sum!!\t\t\t(2)Regular Options\n\n\t\t(3)Non-vegetarian\n\n(4)Dessert   \t\t\t(5)Press for previous\n";
        cout << "\nEnter Your Choice:: ";
        cin >> choice;
        
        switch (choice)
        {
        case 1:
            cout << "\t\tChoose Your Dim Sum " << endl;
            cout << endl
                 << "(1)MIXED VEGETABLE SIU MAI\t\t 800 Rs." << endl
                 << "(2)BROCCOLI,CORN AND PINE NUT POUCH\t 800 Rs." << endl
                 << "(3)ASPARAGUS,TRIO PEPPERS\t\t 800 Rs." << endl;
            cout << "Enter Your Choice: ";
            cin >> choice;
            cout << "enter quantity: ";
            cin >> qty;
            price = qty * 800;
            cout << endl
                 << "Price is: " << price << endl;
            tprice += price;
            cout << "Total Price is: " << tprice << endl;
            break;

        case 2:
            cout << "\n\t\tSmall Plates and Bowls " << endl;
            cout << endl
                 << "(1)WOK TOSSED WATER CHESTNUTS, GARLIC, PEPPER \t\t ? 975" << endl
                 << "(2)STIR-FRIED LOTUS STEM, HONEY AND DRY RED CHILLI \t ? 975" << endl
                 << "(3)STUFFED MUSHROOMS, PAK CHOY, SOY GARLIC SAUCE\t ? 975" << endl
                 << "(4)SOUR PEPPER VEGETABLE SOUP\t\t\t\t ? 700";
            cout << "Enter Your Choice: ";
            cin >> choice;
            cout << "enter quantity: ";
            cin >> qty;
            if (choice <= 3)
            {
                price = qty * 975;
            }
            else
            {
                price = qty * 700;
            }
            cout << endl
                 << "Price is: " << price << endl;
            tprice += price;
            cout << "Total Price is: " << tprice << endl;
            break;
        case 3:
            cout << "\n\t\tNon-vegetarian menu " << endl;
            cout << "(1)PAN FRIED CHICKEN NOODLES\t\t ? 1100" << endl
                 << "(2)KING PRAWNS\t\t\t\t ? 2100" << endl
                 << "(3)WEST COAST SEAFOOD\t\t\t ? 2900" << endl
                 << "(4)LAMB\t\t\t\t\t ? 1300" << endl
                 << "(5)STEAMED CHICKEN\t\t\t ? 1300";
            cout << "Enter Your Choice: ";
            cin >> choice;
            cout << "enter quantity: ";
            cin >> qty;
            if (choice == 1)
            {
                price = qty * 1100;
            }
            else if (choice == 2)
            {
                price = qty * 2100;
            }
            else if (choice == 3)
            {
                price = qty * 2900;
            }
            else if (choice == 4 || choice == 5)
            {
                price = qty * 1300;
            }
            cout << endl
                 << "Price is: " << price << endl;
            tprice += price;
            cout << "Total Price is: " << tprice << endl;
            break;
        case 4:
            cout << "\n\t\tDessert menu " << endl;
            cout << "(1)CARAMEL WILD RICE PUDDING\t\t ? 725" << endl
                 << "(2)Gulab-Jamun\t\t\t\t ? 250";
            if (choice == 1)
            {
                price = qty * 725;
            }
            else
            {
                price = qty * 250;
            }
            tprice += price;

            break;
        case 5:
            cout << "";
            break;
        default:
            break;
        }
        cout << "Would you like to have anything else??";
        cin >> moreodr;
        if (moreodr == 1)
        {
             level2();
        }
    
    
    }
    void level3(){
        cout << "Total Price is " << tprice << endl;
    }
};
int main()
{
    cout << endl
         << "\t[=[=[=[=[=[= HUNGRY CAVE =]=]=]=]=]=]\t" << endl;
    user obj;
    obj.level1();
    obj.level2();
    obj.level3();
    return 0;
}
