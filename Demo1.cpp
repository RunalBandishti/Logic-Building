#include <iostream>
#include <vector>
using namespace std;

bool checkPrime(int num)
{
	if(num <= 1)
		return false;
    int i = 2;
    while(i <= (num / 2))
    {
        if(num % i == 0)
        {
            return false;
        }
        i++;
    }
    return true;
}

int sumOfAllPrime(vector<int>& vobj)
{
    int sum = 0;
    for(int i = 0; i < vobj.size(); i++)
    {
        if(checkPrime(vobj[i]) == true)
        {
            sum += vobj[i];
        }
    }
    return sum;
}

int main()
{
    vector<int> vobj{1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	cout << sumOfAllPrime(vobj);
    return 0;
}