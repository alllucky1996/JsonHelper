#include <iostream>
#include "Json.hpp"
#include <fstream>

int main()
{
    std::ifstream ifs{"test.json"};
    auto j = nlohmann::json::parse(ifs);
    //std::cout << j << "\n";
    
   // j["Hieu"]["age"] = 19;
   // std::cout << j << "\n";

    auto hieu = j["Hieu"];
    std::cout << hieu << "\n";
}