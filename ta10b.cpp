/***********************************************************************
* Program:
*    Team Activity 10, STL and Iterators 
*    Brother Alvey, CS165
************************************************************************/

#include <iostream>
#include <vector>
#include <list>
using namespace std;

/**********************************************************************
 * promptNumbers
 *
 ***********************************************************************/
void promptNumbers(list <int> &numbers)
{
   int num = 1;

   while (num != 0)
   {
      cout << "Numbers: ";
      cin >> num;
      if (num != 0)
         numbers.push_back(num);
   }
}

/**********************************************************************
 * displayNumbers
 *
 ***********************************************************************/
void displayNumbers(const list <int> &numbers)
{
   const list <int>::iterator it;
   
   for (it = numbers.begin(); it != numbers.end(); ++it)
      cout << *it << endl;
}

/**********************************************************************
 * removeOdds
 *
 ***********************************************************************/
void removeOdds(list <int> &numbers)
{
   list <int>::iterator it;
   for (it = numbers.begin(); it != numbers.end(); )
   {
      if ((*it)%2 != 0)
         it = numbers.erase(it);
      else
         it++;
   }

}

/**********************************************************************
 * main
 * 
 ***********************************************************************/
int main()
{
   list < int > numbers;

   promptNumbers(numbers);
   displayNumbers(const numbers);
   removeOdds(numbers);
   cout << "Odds Removed:\n";
   displayNumbers(numbers);

   return 0;
}
