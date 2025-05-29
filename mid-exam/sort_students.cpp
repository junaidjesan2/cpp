#include <iostream>
using namespace std;

int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        
        int best_id = 4; 
        char best_name[101] = {0};
        char best_section = 'Z' + 1;
        int best_marks = -1;

        for (int i = 0; i < 3; i++)
        {
            int id;
            char name[101];
            char section;
            int marks;

            cin >> id >> name >> section >> marks;

            if (marks > best_marks || (marks == best_marks && id < best_id))
            {
                best_id = id;
                best_section = section;
                best_marks = marks;

                int j = 0;
                while (name[j] != '\0')
                {
                    best_name[j] = name[j];
                    j++;
                }
                best_name[j] = '\0';
            }
        }

        cout << best_id << " " << best_name << " " << best_section << " " << best_marks << "\n";
    }

    return 0;
}
