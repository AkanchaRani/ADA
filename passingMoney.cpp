/*23 students are sitting in a circle. Each student starts with ₹100. 
Whenever a student receives money, they keep ₹1 and pass the remaining money to the next student.
 We need to find how much each student finally has and who is the last student.*/

 #include <iostream>
using namespace std;

void distributeMoney()
{
    int surplus = 100;
    int s[23] = {0};
    int lastStudent = 0;

    while (surplus != 0)
    {
        for (int i = 0; i < 23 && surplus != 0; i++)
        {
            s[i]++;
            surplus--;
            lastStudent = i + 1;
        }
    }

    cout << "Money received by each student:\n";

    for (int i = 0; i < 23; i++)
    {
        cout << "Student " << i + 1 << " = " << s[i] << " rupees" << endl;
    }

    cout << "\nLast student = Student " << lastStudent << endl;
}

int main()
{
    distributeMoney();

    return 0;
}