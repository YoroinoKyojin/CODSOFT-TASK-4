#include<iostream>
#include<fstream>
#include <string>
#include <sstream>
using namespace std;

int main()
{
    std::cout<<"In this program, we have already written our sentence in sample.txt and we have to access the sentence from the text file and bring out the word count"<<"\n";    
    ifstream fin("sample.txt");//open function with default input mode for read,seek,etc
    if(!fin.is_open())
    {
        std::cout<<"Sorry we encountered an error opening the file";//condition for checking existence for file
        return 1;
    }
    string line; //line declaration
    int count=0;
    std::cout<<"The line in the text file is : ";
    while(getline(fin,line))//accessing lines from the text file
    {
        stringstream ss(line);//treating string as stream like std::cout or cin
        string word;
        while(ss>>word)//accessing words one by one
        {
            std::cout<<word<<" ";
            count++;
        }
    }
    std::cout<<"\n";
    fin.close();
    std::cout<<count;//we have got our word count
    return 0;
}

#Sample.txt IS THE FILE FROM WHERE WE READ THE GIVEN LINE AND CODE ACCORDINGLY
