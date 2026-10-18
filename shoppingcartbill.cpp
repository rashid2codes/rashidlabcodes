//SET 3.P 9
#include <iostream>
using namespace std;
class Product{

   string productname;
   float price;
   int quantity;
    public:
     void input(){
        cout<<"Enter name of the product: ";
        cin.ignore();   
        cout<<"Enter price: ";
        cin>>price;
        cout<<"Enter quantity: ";
        cin>>quantity;
     }
     Product combine(Product P){
        Product result;
        result.price = price + P.price;
        result.quantity = quantity + P.quantity;
        return result;
     }
     void display(){
        cout<<"Product name: "<<productname<<endl;
        cout<<"Price: "<<price<<endl;
        cout<<"Quantity: "<<quantity<<endl;
     }
     friend Product higherValue(Product p1, Product p2);
    };
       Product higherValue(Product p1, Product p2)
       
       { if(p1.price > p2.price)
            return p1;
        else
            return p2;
}
int main(){
    
    Product p1, p2, p3;
    cout<<"Enter details for Product 1:"<<endl;
    p1.input();
    cout<<"Enter details for Product 2:"<<endl;
    p2.input();
    cout<<"Combining product details..."<<endl;
    p3 = p1.combine(p2);
    cout<<"Combined product details:"<<endl;
    p3.display();
    cout<<"Product with higher value:"<<endl;
    Product topProduct = higherValue(p1, p2);
    topProduct.display();
    return 0;
}