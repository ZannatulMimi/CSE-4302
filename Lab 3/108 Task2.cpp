#include <bits/stdc++.h>
using namespace std;

class Medicine
{
private:
    char name[100];
    char genericName[100];
    double discountPercent=5;
    double unitPrice=0;

public:
    void assignName(char bname[], char genName[])
    {
        strcpy(name,bname);
        strcpy(genericName,genName);
    }
    void assignPrice(double price)
    {
        if (price >= 0)
            unitPrice = price;
    }
    void setDiscountPercent(double percent)
    {
        if(percent>45 || percent<0){
            cout << "Invalid Discount!.\n";
            return;
        }
        discountPercent = percent;
    }
    double getSellingPrice(int nos)
    {
        int sellingPrice;
        sellingPrice= nos*unitPrice*(1-discountPercent/100);
        return sellingPrice;
    }
    void display()
    {
        printf("%s (%s) ", name, genericName);
        printf("has a unit price BDT %.2lf. Current Discount= %.0lf%%", unitPrice, discountPercent);
    }
};
int main()
{
    Medicine Par;
    char str[100],str1[100];
    cout << "Enter Name: ";
    cin >> str;
    cout << "Enter generic Name: ";
    cin >> str1;
    Par.assignName(str,str1);
    Par.assignPrice(0.80);
    Par.setDiscountPercent(10);
    Par.display();
}

