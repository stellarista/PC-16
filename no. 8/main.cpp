#include<iostream>
#include<vector>
#include<algorithm>

// simple vector ^^

using namespace std ;


int main()
{
    vector<int> vect;

    for(int i = 0; i < 10; i++)
        vect.push_back(i);

    cout <<"Display vector: "<<endl;
    for(int j = 0; j < vect.size(); j++)
        cout << " "<<vect[j];

    cout <<endl;

    cout <<"Random vector: "<<endl;
    random_shuffle(vect.begin(), vect.end());
    for(int j = 0; j < vect.size(); j++)
    cout<<" "<<vect[j];

    cout<<endl;
/*
    for(int j = 0; j < 10; j++)
        vect.push_back(j);*/

    cout<<endl;

    cout <<"From the smallest to the largest vector: "<<endl;
    sort(vect.begin(), vect.end());
    for(int j = 0; j < vect.size(); j++)
    cout<<" "<<vect[j];





  /*  if(binary_search(vect.begin(), vect.end, 7))
    cout << "found!";
    else cout <<"not found!";*/


	return 0;
}
