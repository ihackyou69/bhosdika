
// Q3. Simulate and implement go back n sliding window protocol

#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;
int main()
{
    int nf, N;
    int no_tr = 0;
    srand(time(NULL));
    cout << "Enter the number of frames : ";
    cin >> nf;
    cout << "Enter the Window Size : ";
    cin >> N;
    int i = 1;
    while (i <= nf)
    {
        int x = 0;
        for (int j = i; j < i + N && j <= nf; j++)
        {
            cout << "Sent Frame " << j << endl;
            no_tr++;
        }
        for (int j = i; j < i + N && j <= nf; j++)
        {
            int flag = rand() % 2;
            if (!flag)
            {
                cout << "Acknowledgment for Frame " << j << endl;
                x++;
            }
            else
            {
                cout << "Frame " << j << " Not Received" << endl;
                cout << "Retransmitting Window" << endl;
                break;
            }
        }
        cout << endl;
        i += x;
    }
    cout << "Total number of transmissions : " << no_tr << endl;
    return 0;
}

//OUTPUT

// Enter the number of frames : 3
// Enter the Window Size : 3
// Sent Frame 1
// Sent Frame 2
// Sent Frame 3
// Acknowledgment for Frame 1
// Frame 2 Not Received
// Retransmitting Window

// Sent Frame 2
// Sent Frame 3
// Acknowledgment for Frame 2
// Acknowledgment for Frame 3

// Total number of transmissions : 5



//-----------------------------------------------------------------------------------------------------
