#include <iostream>
using namespace std;

class Government
{
private:
    static  Government* _president;
    Government() {}

public:
    static Government* GetPresident() 
    {
        if (_president == nullptr) _president = new Government();
        return _president;
    }

    void Election() 
    {
        cout << "The president is number " << this<< endl;
    }
};

Government* Government::_president = nullptr;

int main() {
    Government* president1= Government::GetPresident();
    president1->Election();

    Government* president2 = Government::GetPresident();
    president2->Election();

    if (president1 == president1) cout << "The elections has been successful" << endl;
    else cout << "The elections hasn't been successful" << endl;
    system("pause");
    return 0;
}

