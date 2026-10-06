#include <iostream>

int evalCommission(int smartphoneRevenue, int laptopRevenue){
    int commission = 0;

    commission += smartphoneRevenue * (smartphoneRevenue > 5000 ? 0.1 : 0.05);

    commission += laptopRevenue * (laptopRevenue > 10000 ? 0.12 : 0.04); 

    commission += (smartphoneRevenue + laptopRevenue) * ((smartphoneRevenue + laptopRevenue) > 50000 ? 0.12 : 0); 

    return commission;
}

int main(){
    int smartphoneRevenue, laptopRevenue;

    std::cout << "Smartphone sold: $";
    std::cin >> smartphoneRevenue;
    
    std::cout << "Laptop revenue: $";
    std::cin >> laptopRevenue;

    std::cout << "Your commission is $" << evalCommission(smartphoneRevenue, laptopRevenue) << std::endl;

    return 0;
}
