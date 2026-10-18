#include<iostream>
using namespace std;
class Book{
    protected:
    string title;
    string author;
    public:
    Book(string t,string a){
        title= t;
        author= a;

    }
};
class EBook: public Book{
    private:
    int filesize;
    string fileformat;
    public:
    EBook(string t, string a, int s,string f):Book(t,a){
        filesize= s;
        fileformat= f;
    }
    void display(){
        cout<<"BOOK DETAILS: "<<endl;
        cout<<"Title: "<<title<<endl;
        cout<<"Author: "<<author<<endl;
        cout<<"File Size: "<<filesize<<endl;
        cout<<"File Formate: "<<fileformat<<endl;
    }
};
int main(){
    EBook book[3]={
        EBook("Alone Bird","Rashid",20,"pdf"),
        EBook("Inspiring Cat","Tanush",3.5,"ppt"),
        EBook("Lovely Son","Dristi",12,"pdf")
    };
    for(int i=0;i<3;i++){
        book[i].display();
    }
    return 0;
}