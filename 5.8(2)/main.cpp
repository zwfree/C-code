#include <iostream>

using namespace std;
enum key{open,close,vol_add,vol_dec};

int main()
{
    int key_;
    while(1){
    cout<<"Select key(0/open, 1/close, 2/v_add, 3/v_dec):";
    cin>>key_;
    if(key_<4&&key_>=0){
    key next_key=key(key_);
    switch(next_key)
    {
    case open:
        cout<<"open";
        break;
    case close:
        cout<<"close";
        break;
    case vol_add:
        cout<<"vol_add";
        break;
    case vol_dec:
        cout<<"vol_dec";
        break;
    default:
        break;
    }
    break;
    }
    cout<<"Wrong! Input again."<<endl;
    }
    return 0;
}
