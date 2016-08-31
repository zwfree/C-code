#include <iostream>
#include<fstream>
#include<vector>
using namespace std;

int main()
{
    ifstream file_read("highscores.txt");
    if(!file_read.is_open())
    {
        cout<<"Could not open file!";
        return 0;
    }
    vector<int> scores;
    for(int i=0;i<10;i++)
    {
        int score;
        //if(file_read.eof())
          //  break;
       // file_read>>score;
        if(! (file_read>>score))
            break;
        scores.push_back(score);
       // scores.size()++;
      //  file_read>>(scores[i]);
    }


    for(int i=0;i<scores.size();i++)
    {
        cout<<scores[i]<<endl;

    }
    return 0;
}
