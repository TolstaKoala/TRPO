#include <fstream>
#include <iostream>
#include <cstdlib>
#include <iterator>
#include <list>
#include <string>
#include <cstring>
#include <cctype>
#include <vector>
#include <algorithm>


int main()
{
using namespace std;
int n = 5;
//Вместо листа, воспользуемся вектором
vector <char> numbers = {'T','R','E','O','F' };

// перебор с помощью итераторов

for (int i = 0; i < n; i++)
{
cout << numbers[i] << " " ;
}
replace(numbers.begin(), numbers.end(), 'e', 'g');
replace(numbers.begin(), numbers.end(), 'E', 'G');

cout << endl;

for (int i = 0; i < n; i++)
{
cout << numbers[i] << " ";
}
return 0;
}
