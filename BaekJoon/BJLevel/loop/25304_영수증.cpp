#include <iostream>
using namespace std;

bool checkSecondCondition(int price, int count) {
    if (price < 1 || price > 1000000) {
        cout << "check price" << endl;
        return false;
    }

    if (count < 1 || count > 10) {
        cout << "check count" << endl;
        return false;
    }
    return true;
}

void solve(int totalPrice, int type) {
    int calculatedPrice = 0;
    int price, count;
    while (type != 0) {
        cin >> price >> count;

        if (!checkSecondCondition(price, count)) {
            break;
        }

        calculatedPrice += price * count;
        type--;
    }
    if (type != 0 || totalPrice != calculatedPrice) {
        cout << "No" << endl;
    } else if (type == 0 || totalPrice != calculatedPrice){
        cout << "Yes" << endl;
    }


}

bool checkFirstCondition (int totalPrice, int type) {
    if (totalPrice < 1 || totalPrice > 1000000000) {
        cout << "check Total Price" << endl;
        return false;
    }

    if (type < 1 || type > 100) {
        cout << "check type counts" << endl;
        return false;
    }

    return true;
}

int main () {
    int totalPrice, type;

    cin >> totalPrice >> type;

    if (!checkFirstCondition(totalPrice, type)) {
        return 0;
    }

    solve(totalPrice, type);

    return 0;
}