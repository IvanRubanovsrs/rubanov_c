#include<stdio.h>

enum course {FIRST, SECOND, THIRD, FOURTH};

struct Student
{
    char * name;
    int age;
    enum course current_course;
    float score;
};

struct Student students[12] =
{
    {"Ivan", 16, FIRST, 5.0}
};

int main(){
}