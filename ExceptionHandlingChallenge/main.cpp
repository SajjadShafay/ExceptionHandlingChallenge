#include <iostream>
#include <memory>
#include "Account.h"
#include "Checking_Account.h"
#include "Savings_Account.h"
#include "Trust_Account.h"
#include "Account_Util.h"
#include "IllegalBalanceException.h"
#include "InsufficientFundsException.h"

using namespace std;

int main() {
    // test your code here
    try {
        Savings_Account sav_account{ "Bill", 1000 };
        std::cout << sav_account << std::endl;
        sav_account.withdraw(2000); 
        std::cout << sav_account << std::endl;
    }
    catch (const IllegalBalanceException& ex) {
        std::cout << ex.what() << std::endl;
    }
    catch (const InsufficientFundsException& ex) {
        std::cout << ex.what() << std::endl;
    }

    try {
        Trust_Account trust{ "Joe", -50 };
        std::cout << trust << std::endl;
    }
    catch (const IllegalBalanceException& ex) {
        std::cout << ex.what() << std::endl;
    }
    std::cout << "Program completed successfully" << std::endl;
    return 0;
}

