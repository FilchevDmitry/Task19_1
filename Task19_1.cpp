#include <iostream>
#include<fstream>
#include<string>
int main()
{
    std::ifstream word;
    word.open("Text.txt");
    std::string wor;
    std::string wordsearch;
    std::cout << "Enter a search word : ";
    std::cin >> wordsearch;
    int count = 0;
    while (!word.eof())
    {
        word >> wor;
        if (wor == wordsearch)
            count++;
    }
    std::cout << "The text found " << count <<" word" << std::endl;
    word.close();
}
    

