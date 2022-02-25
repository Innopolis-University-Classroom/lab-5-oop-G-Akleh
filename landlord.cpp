//
//  landlord.cpp
//  Landlord
//
//  Created by Gbrigens on 1/11/22.
//

//landlord.cpp
//models the finances for an apartment building

#include "landlord.h" //for class declarations, etc.

using namespace std;

int main() {
    //    std::cout << "Hello, World!" << std::endl;
    userInterface theUserInterface;
    theUserInterface.interact();

    return 0;
}

tenant::tenant(string n, int aNo) {
    name = n;
    aptNumber = aNo;
}

tenant::~tenant() {

}

int tenant::getAptNumber() {
    return aptNumber;
}

bool operator<(const tenant& t1, const tenant& t2) {
    return t1.name < t2.name;
}

bool operator==(const tenant& t1, const tenant& t2) {
    return t1.name == t2.name;
}

ostream &operator<<(ostream& a, const tenant& b) {
    a << b.name << " " << b.aptNumber;
}

bool compareTenants::operator()(tenant* t1, tenant* t2) const {
    return false;
}
