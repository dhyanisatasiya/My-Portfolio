#include<iostream>
#include<string>
using namespace std;

const int MAX_ITEMS = 100;
class LibraryItem
{
private:
    string title;
    string author;
    string dueDate;

public:
    LibraryItem(string t="",string a="",string d="")
    {
        title=t;
        author=a;
        dueDate=d;
    }
    string getTitle()
    {
        return title;
    }

    string getAuthor()
    {
        return author;
    }

    string getDueDate()
    {
        return dueDate;
    }

    // Setters
    void setTitle(string t)
    {
        title=t;
    }

    void setAuthor(string a)
    {
        author=a;
    }

    void setDueDate(string d)
    {
        dueDate=d;
    }

    virtual void checkOut()=0;
    virtual void returnItem()=0;
    virtual void displayDetails()=0;

    virtual ~LibraryItem(){}
};


class Book:public LibraryItem
{
private:
    string isbn;
    bool issued;

public:
    Book(string t,string a,string d,string i)
        :LibraryItem(t,a,d)
    {
        isbn=i;
        issued=false;
    }

    void checkOut()
    {
        if(!issued)
        {
            issued=true;
            cout<<"Book Issued Successfully.\n";
        }
        else
        {
            cout<<"Book already issued.\n";
        }
    }

    void returnItem()
    {
        if(issued)
        {
            issued=false;
            cout<<"Book Returned Successfully.\n";
        }
        else
        {
            cout<<"Book was not issued.\n";
        }
    }

    void displayDetails()
    {
        cout<<"\n----- BOOK -----\n";
        cout<<"Title : "<<getTitle()<<endl;
        cout<<"Author: "<<getAuthor()<<endl;
        cout<<"Due Date: "<<getDueDate()<<endl;
        cout<<"ISBN: "<<isbn<<endl;
    }
};



class DVD:public LibraryItem
{
private:
    int duration;
    bool issued;

public:
    DVD(string t,string a,string d,int dur)
        :LibraryItem(t,a,d)
    {
        duration=dur;
        issued=false;
    }

    void checkOut()
    {
        if(!issued)
        {
            issued=true;
            cout<<"DVD Issued Successfully.\n";
        }
        else
        {
            cout<<"DVD already issued.\n";
        }
    }

    void returnItem()
    {
        if(issued)
        {
            issued=false;
            cout<<"DVD Returned Successfully.\n";
        }
        else
        {
            cout<<"DVD was not issued.\n";
        }
    }

    void displayDetails()
    {
        cout<<"\n----- DVD -----\n";
        cout<<"Title : "<<getTitle()<<endl;
        cout<<"Author: "<<getAuthor()<<endl;
        cout<<"Due Date: "<<getDueDate()<<endl;
        cout<<"Duration: "<<duration<<" Minutes"<<endl;
    }
};


class Magazine:public LibraryItem
{
private:
    int issueNumber;
    bool issued;

public:
    Magazine(string t,string a,string d,int issue)
        :LibraryItem(t,a,d)
    {
        issueNumber=issue;
        issued=false;
    }

    void checkOut()
    {
        if(!issued)
        {
            issued=true;
            cout<<"Magazine Issued Successfully.\n";
        }
        else
        {
            cout<<"Magazine already issued.\n";
        }
    }

    void returnItem()
    {
        if(issued)
        {
            issued=false;
            cout<<"Magazine Returned Successfully.\n";
        }
        else
        {
            cout<<"Magazine was not issued.\n";
        }
    }

    void displayDetails()
    {
        cout<<"\n----- MAGAZINE -----\n";
        cout<<"Title : "<<getTitle()<<endl;
        cout<<"Author: "<<getAuthor()<<endl;
        cout<<"Due Date: "<<getDueDate()<<endl;
        cout<<"Issue Number: "<<issueNumber<<endl;
    }
};



int main()
{
    LibraryItem* libraryItems[MAX_ITEMS];
    int count=0;

    int choice;

    do
    {
        cout<<"\n========== LIBRARY MANAGEMENT SYSTEM ==========\n";
        cout<<"1. Add Book\n";
        cout<<"2. Add DVD\n";
        cout<<"3. Add Magazine\n";
        cout<<"4. Display All Items\n";
        cout<<"5. Search Item\n";
        cout<<"6. Check Out Item\n";
        cout<<"7. Return Item\n";
        cout<<"8. Exit\n";
        cout<<"Enter Choice: ";
        cin>>choice;

        cin.ignore();

        try
        {
            if(choice==1)
            {
                string title,author,due,isbn;

                cout<<"Enter Title: ";
                getline(cin,title);

                cout<<"Enter Author: ";
                getline(cin,author);

                cout<<"Enter Due Date: ";
                getline(cin,due);

                cout<<"Enter ISBN (13 digits): ";
                getline(cin,isbn);

                if(isbn.length()!=13)
                    throw "Invalid ISBN!";

                libraryItems[count++]=new Book(title,author,due,isbn);
            }

            else if(choice==2)
            {
                string title,author,due;
                int duration;

                cout<<"Enter Title: ";
                getline(cin,title);

                cout<<"Enter Author: ";
                getline(cin,author);

                cout<<"Enter Due Date: ";
                getline(cin,due);

                cout<<"Enter Duration: ";
                cin>>duration;
                cin.ignore();

                if(duration<0)
                    throw duration;

                libraryItems[count++]=new DVD(title,author,due,duration);
            }

            else if(choice==3)
            {
                string title,author,due;
                int issue;

                cout<<"Enter Title: ";
                getline(cin,title);

                cout<<"Enter Author: ";
                getline(cin,author);

                cout<<"Enter Due Date: ";
                getline(cin,due);

                cout<<"Enter Issue Number: ";
                cin>>issue;
                cin.ignore();

                if(issue<0)
                    throw issue;

                libraryItems[count++]=new Magazine(title,author,due,issue);
            }

            else if(choice==4)
            {
                for(int i=0;i<count;i++)
                    libraryItems[i]->displayDetails();
            }

            else if(choice==5)
            {
                string search;

                cout<<"Enter Title: ";
                getline(cin,search);

                bool found=false;

                for(int i=0;i<count;i++)
                {
                    if(libraryItems[i]->getTitle()==search)
                    {
                        libraryItems[i]->displayDetails();
                        found=true;
                    }
                }

                if(!found)
                    cout<<"Item Not Found.\n";
            }

            else if(choice==6)
            {
                string search;

                cout<<"Enter Title: ";
                getline(cin,search);

                for(int i=0;i<count;i++)
                {
                    if(libraryItems[i]->getTitle()==search)
                        libraryItems[i]->checkOut();
                }
            }

            else if(choice==7)
            {
                string search;

                cout<<"Enter Title: ";
                getline(cin,search);

                for(int i=0;i<count;i++)
                {
                    if(libraryItems[i]->getTitle()==search)
                        libraryItems[i]->returnItem();
                }
            }
        }

        catch(const char* msg)
        {
            cout<<"Exception: "<<msg<<endl;
        }

        catch(int)
        {
            cout<<"Exception: Negative value is not allowed.\n";
        }

        catch(...)
        {
            cout<<"Unknown Exception.\n";
        }

    }while(choice!=8);

    for(int i=0;i<count;i++)
        delete libraryItems[i];

    cout<<"\nMemory Released Successfully.\n";

    return 0;
}
