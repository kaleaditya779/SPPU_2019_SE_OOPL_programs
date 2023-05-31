/*Write a program in C++ to use map associative container. The keys will be the
names of states and the values will be the populations of the states. When the
program runs, the user is prompted to type the name of a state. The program then
looks in the map, using the state name as an index and returns the population of the
State
*/

#include <iostream>
#include <map>
#include <string>
// #include <utility>
using namespace std;
int main()
{
    map<string, int> populationMap;
    populationMap.insert({"Maharashtra", 11});
    populationMap["Skkiam"] = 1;
    populationMap.insert({"Punjab", 2});
    populationMap.insert({"Tamil Nadu ", 7});
    populationMap.insert({"Goa", 1});
    populationMap.insert({"Rajasthan", 6});
    map<string, int>::iterator iter;
    string state;
    int flag = 0;
    cout << "Enter State Population You Want : ";
    cin >> state;
    cout << "Size of population map: " << populationMap.size() << '\n';
    for (iter = populationMap.begin(); iter != populationMap.end(); ++iter)
    {
        if (iter->first == state)
        {
            cout << "\n"
                 << iter->first << " : " << iter->second << " Crore\n";
            flag = 1;
        }
    }
    if (flag == 0)
        cout << "\nState Not Found!!";

    populationMap.clear();
}