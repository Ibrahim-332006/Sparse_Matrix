#include <iostream>
using namespace std;
//  Task >> Array

int Arrey[6]; // this is arrayint
int level = 0;

void Add(int val) // this is function addition
{
    if (level >= 5)
        cout << "THis is over flow \n";

    else
        Arrey[level] = val;
    cout << "The element add is " << val << endl;
    level++;
}
int main()
{

    int choise, value, n = 5;
    for (;;)
    {
        cout << "\n1: for enter your elements lest :\n";
        cout << "2: Display element list\n";
        cout << "3: Insert element\n";
        cout << "4: Delete element\n";
        cout << "5: Update element\n";
        cout << "6: Exit\n";
        cout << "Choise an option \n";
        cin >> choise;

        switch (choise)

        {
        case 1: // add in arrey

            if (n == 6)
            {
                cout << "Array overflow" << endl;
                break;
            }

            else
            {
                cout << "Enter your value " << endl;
                cin >> value;
                Add(value);
            }
            break;

        case 2: // all arey

            if (n == 0)
                cout << "Arrey is empty \n";

            else
                cout << "\nAll element\n ";
            for (int i = 0; i < n; i++)
            {
                cout << Arrey[i] << "  "; // desplay all element
            }
            break;

        case 3: // Insert element in lest
            if (n == 6)
            {
                cout << "Array overflow \n";
            }
            else
            {
                for (int i = 0; i < n; i++)
                {
                    cout << Arrey[i] << "  "; // Display all element
                }
                n++;
                cout << "\nEnter the location Number \n";
                int k;
                cin >> k;

                cout << "Enter the Number \n";
                int j;
                cin >> j;
                int t = n - 1;
                while (t >= k)
                {
                    Arrey[t + 1] = Arrey[t];
                    t--;
                }
                Arrey[k] = j;

                cout << "After Ubdate \n";
                for (int i = 0; i < n; i++)
                {
                    cout << Arrey[i] << "  "; // Display all element
                }

                break;
            }

        case 4: // Deleat Element
            if (n == 0)
            {
                cout << "This is  empty \n";
            }

            else
            {
                {
                    for (int i = 0; i < n; i++)
                        cout << Arrey[i] << "  "; // Display all element
                }

                cout << "\nEnter your location Element \n";
                int k;
                cin >> k;

                while (k < n)
                {
                    Arrey[k - 1] = Arrey[k];
                    k++;
                }
                n--;

                {
                    for (int i = 0; i < n; i++)
                        cout << Arrey[i] << "  "; // Display all element
                }

                break;
            }

        case 5: // Update Element
            if (n == 0)
            {
                cout << "lest is empty  \n";
            }

            else
            {
                for (int i = 0; i < n; i++)
                    cout << Arrey[i] << "  "; // Display all element
            }

            cout << "\nEntr your element Update from 1 to 6 \n ";
            int k;
            cin >> k;

            cout << "What is ELement Add :\n";
            int j;
            cin >> j;

            Arrey[k - 1] = j;
            cout << "After Ubdate \n";
            for (int i = 0; i < n; i++)
                cout << Arrey[i] << "  ";

            break;

        case 6:
            return 0;
        }
    }
}