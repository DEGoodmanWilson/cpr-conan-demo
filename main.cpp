#include <string>
#include <iostream>
#include <cpr/cpr.h>

int main(void)
{
    std::cout << "Getting google.com..." << std::endl;
    auto res = cpr::Get(cpr::Url{"https://slack.com/api/api.test"});
    std::cout << res.text << std::endl;
}
