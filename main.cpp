#include <iostream>
#include <string>
#include <map>
#include <list>
#include <vector>
#include <experimental/iterator>

using namespace std;
void print(vector<string> const &list) {
    copy(list.begin(),list.end(), experimental::make_ostream_joiner(std::cout,"" ));
}

int main() {

    // create a mapping between items and price
//    map <string,int> items;
//    map <string,int> :: iterator iter;
//    items.insert(pair<string,int>("A",50));
//    items.insert(pair<string,int>("B",30));
//    items.insert(pair<string,int>("C",20));
//    items.insert(pair<string,int>("D",10));
    //add elements to carts
    // you can do that using lists
    vector<string> ShoppingCart;
    ShoppingCart.push_back("D");
    ShoppingCart.push_back("A");
    ShoppingCart.push_back("B");
    ShoppingCart.push_back("B");
    ShoppingCart.push_back("A");
    ShoppingCart.push_back("A");




// counters for all items

    int countA = 0,countB = 0,countC = 0,countD = 0;
    int total = 0;
    string s;

    for (vector <string> :: const_iterator iter = ShoppingCart.cbegin(); iter != ShoppingCart.cend(); iter++) {
        if (*iter == "A") {
            ++countA;
        } else if (*iter == "B") {
            ++countB;
        } else if (*iter == "C") {
            ++countC;
        } else if (*iter == "D") {
            ++countD;
        }
    }

        total = (countA * 50) + (countB * 30) + (countC * 20) + (countD * 10);
        if (countA % 3 == 0) {
            total += (((countA / 3) * 130) - (countA * 50));
        }
        if (countB % 2 == 0) {
            total += (((countB / 2) * 37) - (countB * 30));
        } else {
            total = (countA * 50) + (countB * 30) + (countC * 20) + (countD * 10);
        }
    print(ShoppingCart) ;
    cout << endl << "Total of this Product: " << total << endl;

    return 0;
}

