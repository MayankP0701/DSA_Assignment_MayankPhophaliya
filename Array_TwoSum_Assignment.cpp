#include <iostream>
using namespace std;

class ary
{
private:
    int a[10];
    int ub, lb, asize;

public:
    ary()
    {
        ub = -1;
        lb = -1;
        asize = 10;
    }

    void Insert(int element)
    {
        if (ub == -1)
        {
            ub = 0;
            lb = 0;
        }
        else
        {
            if (ub == asize - 1)
            {
                cout << "Array is Full\n";
                return;
            }
            else
            {
                ub = ub + 1;
            }
        }
        a[ub] = element;
    }

    void TwoSum(int target)
    {
        int b[2];
        int found = 0;

        for (int i = lb; i <= ub; i++)
        {
            for (int j = i + 1; j <= ub; j++)
            {
                if (a[i] + a[j] == target)
                {
                    cout << "Indices are: ";
                    b[0] = i;
                    b[1] = j;
                    found = 1;
                    for (int k = 0; k < 2; k++)
                    {
                        cout << b[k] << " ";
                    }
                    cout << endl;
                    return;
                }
            }
        }

        if (found == 0)
        {
            cout << "Sum not possible\n";
        }
    }
};

int main()
{
    ary a1;
    int ch,e,target;

    cout << "Choose option\n";
    cout << "1 Insert element in array \n";
    cout << "2 Find Two Sum and store indices\n";
    cout << "0 To exit \n";
    cin >> ch;

    while (ch != 0)
    {
        switch (ch)
        {
        case 1:
            cout << "Enter element to be inserted: ";
            cin >> e;
            a1.Insert(e);
            break;
        case 2:
            cout << "Enter target sum: ";
            cin >> target;
            a1.TwoSum(target);
            break;
        }
        cout << "Choose option\n";
        cout << "1 Insert element in array \n";
        cout << "2 Find Two Sum and store indices\n";
        cout << "0 To exit \n";
        cin >> ch;
    }

    return 0;
}
