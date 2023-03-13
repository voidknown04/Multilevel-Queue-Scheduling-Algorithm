#include <iostream>
using namespace std;

class process
{
public:
    int priority;
    int burst_time;
    int turnaround_time;
    int total_time = 0;
};

class queues
{
public:
    int P_Start;
    int P_End;
    int total_time = 0;
    int length = 0;
    process *p;
};

int main()
{
    queues q[3];
    q[0].P_Start = 11;
    q[0].P_End = 15;
    q[1].P_Start = 6;
    q[1].P_End = 10;
    q[2].P_Start = 1;
    q[2].P_End = 5;


    int no_of_processes, priority_of_process, burst_time_of_process;
    cout << "Enter the number of processes\n";
    cin >> no_of_processes;
    process p[no_of_processes];

    for (int i = 0; i < no_of_processes; i++)
    {
        cout << "Enter the priority of the process " << i + 1 << endl;
        cin >> priority_of_process;
        cout << "Enter the burst time of the process " << i + 1 << endl;
        cin >> burst_time_of_process;
        p[i].priority = priority_of_process;
        p[i].burst_time = burst_time_of_process;
        p[i].turnaround_time = burst_time_of_process;
        for (int j = 0; j < 3; j++)
        {
            if (q[j].P_Start <= priority_of_process <= q[j].P_End)
            {
                q[j].length++;
            }
        }
    }

    return 0;
}