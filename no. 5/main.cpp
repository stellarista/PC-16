#include <iostream>

using namespace std;

template <class total>
int sum(total arr, int numArr)
{
    int i;
    int result = 0;
    for(i = 0; i < numArr; i++)
    {
        result += arr[i];
    }
  return result;
}

int main()
{
    int number;

    cout << "How many number that you want to sum? ";
    cin >> number;
    cout << "Number(s):" << endl;

    int arr[number];

    for (int i = 0; i < number; i++)
    {
        cin >> arr[i];
    }

    cout << "Total: "<<sum(arr, number);
    return 0;
}
