#include <iostream>

using namespace std;

class TestScore
{
    double score;
public:
    void setScore(int score)
    {
        if(score<0 || score>100)
        {
            string e = "Invalid score\n";
            throw e;
            this->score=score;
        }
    }
    int getScore()
    {
        return score;
    }

};

int main()
{
TestScore test;
   int scores, mean;
   int total=0;

   cout<<"How many scores? ";
   cin>>scores;

   int arr[scores];
    cout<<"Score(s): "<<endl;
    for (int i = 0; i < scores; i++)
    {
        cin >> arr[i];
        test.setScore(arr[i]);
    }

    for (int i = 0; i < scores; i++)
    total += arr[i];
    mean = total / scores;

    cout<<"The average is: "<<mean;

    return 0;
}
