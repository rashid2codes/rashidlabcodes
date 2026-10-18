//SET 3.P8
#include <iostream>
using namespace std;
class Book{
    public:
    int bookId;
    string title;
    int copies;
    void input(){
        cout<<"Enter book ID: ";
        cin>>bookId;
        cout<<"Enter book title: ";
        cin.ignore();
        getline(cin, title);
        cout<<"Enter number of copies: ";
        cin>>copies;
    }
    void exchange(Book &other){
        swap(bookId, other.bookId);
        swap(title, other.title);
        swap(copies, other.copies);
    }
    void display(){
        cout<<"Book ID: "<<bookId<<endl;
        cout<<"Title: "<<title<<endl;
        cout<<"Number of copies: "<<copies<<endl;
    }
friend Book moreCopies(Book &b1, Book &b2);
};
Book moreCopies(Book &b1, Book &b2){
    if(b1.copies > b2.copies)
        return b1;
    else
        return b2;
}
int main(){
    Book b1, b2;
    cout<<"Enter details for Book 1:"<<endl;
    b1.input();
    cout<<"Enter details for Book 2:"<<endl;
    b2.input();
    cout<<"Book with more copies:"<<endl;
    Book topBook = moreCopies(b1, b2);
    topBook.display();
    cout<<"Exchanging book details..."<<endl;
    b1.exchange(b2);
    cout<<"After exchange, details of Book 1:"<<endl;
    b1.display();
    cout<<"After exchange, details of Book 2:"<<endl;
    b2.display();
    return 0;
}