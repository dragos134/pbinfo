#include <iostream>
#include <vector>

using namespace std;

vector<double> convertTemperature(double celsius)
{
    vector<double> ans;
    ans.push_back(celsius + 273.15);
    ans.push_back(celsius * 1.8 + 32.00);
    return ans;
}

int main()
{
    return 0;
}