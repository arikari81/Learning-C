//classes
#include <iostream>
using namespace std;

class Book{
    private:
        int cost;
    public:
        string title;
        string author;
        int pagenum;
//a constructor is a function that gets called
//whenever an object is created of a class.eg:

        void costpr(){
            cout << "The price is: " << cost << endl;

        }  
        Book(string atitle, string aauther,int apages,int acost){
            title = atitle;
            author = aauther;
            pagenum = apages;
            setcost(acost);
        }       
        
        bool isShort(){
            if(pagenum < 400){
                return true;
            }else{
                return false;
            }
        }
        void setcost(int acost){
            cost = acost;
        }
        void bookdo(){
            cout << "normal book named: " << title << "\n";
        }
};
 //inheritance:
class PictureBook : public Book{
    public:
        PictureBook(string atitle, string aauther,int apages,int acost)
        : Book(atitle, aauther, apages, acost){

        };

    void colourful(){
        cout << "The book is very colourful\n";
    }
};

int main(){
    PictureBook pb1("Avengers", "Neil Gaiman", 250, 3000);

    Book b1("Das Kapital", "Marx", 1000, 1200);
    bool ppp = b1.isShort();
    b1.setcost(120);
    
    cout << b1.title << " " << ppp << endl;
    b1.costpr();

    b1.bookdo();
    pb1.bookdo();
    cout << pb1.title << endl;
    
    return 0;
}