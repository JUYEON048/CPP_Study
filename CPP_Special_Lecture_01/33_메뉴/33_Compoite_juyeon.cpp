//33_Composite.cpp
#include <iostream>
#include <string>
#include <vector>
using namespace std;

// 1. File / Folder
//  => 공통의 부모: Item

class Item {
    std::string name;
    int size;

public:
    Item(const std::string& s, int size_ = 0)
        : name(s), size(size_)
    {
    }

    std::string GetTitle() const { return name; }

    int SizeReturn() const {return size;}

    virtual int GetSize() = 0;
};



class Folder : public Item{
    std::vector<Item*> item;

public:
    Folder(const std::string& s)
    : Item(s, 0)
    {
    }

    void AddItem(Item* p)
    {
        item.push_back(p);
    }

    int GetSize() override
    {

    }

};

class File : public Item{
    std::vector<Item*> item;
public:
    File(const std::string& s, int size_ = 0)
    : Item(s, size_)
    {
    }

    int GetSize() override
    {
        return Item::SizeReturn();
    }
};



int main()
{
    Folder* fol1 = new Folder("ROOT");
    Folder* fol2 = new Folder("A");

    File* f1 = new File("a.txt", 10); // 이름, 크기
    File* f2 = new File("b.txt", 20);

    fol2->AddItem(f1);
    fol1->AddItem(f2);
    fol1->AddItem(fol2);
    //cout << f2->GetSize() << endl;
    //cout << fol2->GetSize() << endl;
    //cout << fol1->GetSize() << endl;
}