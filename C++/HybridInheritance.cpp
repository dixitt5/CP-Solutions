#include <iostream>
using namespace std;

class student
{
    protected:
        int roll_number;
        public:
            void get_number(int a)
            {
                roll_number = a;
            }
            void put_number(void)
            {
                cout << "Roll No: " << roll_number << endl;
            }
};

class test:public student
{
    protected:
        float part1, part2;
        public:
            void get_marks(float x, float y)
            {
                part1 = x;
                part2 = y;
            }
            void put_marks(void)
            {
                cout << "Marks obtained: " << endl;
                cout << "Part1 = " << part1 << endl;
                cout << "Part2 = " << part2 << endl;
            }
};

class sports
{
    protected:
        float score;
        public:
            void get_score(float s)
            {
                score = s;
            }
            void put_score(void)
            {
                cout << "Sports wt: " << score << endl;
            }
};

class result:public test, public sports
{
    float total;
    public:
        void display(void);
};

void result::display(void)
{
    total = part1 + part2 + score;
    put_number();
    put_marks();
    put_score();
    cout << "Total score: " << total << endl;
}

int main()
{
    result student1;
    student1.get_number(1234);
    student1.get_marks(27.5, 33.2);
    student1.get_score(6.6);
    student1.display();
    return 0;
}

