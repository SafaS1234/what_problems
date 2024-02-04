#include <iostream>
#include <string>
#include <vector>
#include <cctype>
#include <sstream>

using namespace std;

//reads lesson and problem numbers
void read_problems(char& lesson_letter, int& prob_num)
{
    cout << "\nEnter the problem set:  ";
    cin  >>  lesson_letter >> prob_num;

    //stores the lesson letter
    lesson_letter = static_cast<char>(toupper(lesson_letter));

    return;
}

//lists out the problems 
int find_set(int prob_num)
{
    int set_nums ;//= figure it out
    return set_nums;
}

int main(void)
{
    char lesson_letter;
    int prob_num = 0, lesson;

    read_problems(lesson_letter, prob_num);
    lesson = find_set(prob_num);
    cout << "\nDo problems " << prob_num << " of " << lesson_letter 
         << "." << endl;

    
}
