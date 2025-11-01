#include <iostream>
using namespace std;

class stacks {

    char a[50];
    int top;
    int size;

public:
    stacks()
    {
        top = -1;
        size = 50;
    }

    void push(char ele)
    {
        if (top == size - 1) //check whether stack is full or not
        {
            cout << "overflow \n";
        }
        else
        {
            top++;
            a[top] = ele;
        }
    }

    void pop() {
        if (top == -1) //check whether stack is empty or not
        {
            cout<<"under flow \n";
        }
        else
        {
            top--;
        }
    }

    bool isEmpty() //will check whether stack is empty or not
    {
        return (top == -1);
    }

    void peek()
    {
        if (top == -1) //check whether stack is empty or not
        {
            cout << "underflow";
        }
        else
        {
            for (int i = 0; i <= top; i++)
            {
                cout << a[i];
            }
        }
    }

    void removeDigits(string s)
    {
        for (int i = 0; i < s.length(); i++)
        {
            if (s[i] >= '0' && s[i] <= '9')
            {
                if (!isEmpty())
                {
                    pop();
                }
            }
            else
            {
                push(s[i]);
            }
        }

        cout << "Resulting string after operations: ";
        peek(); //prints the string
        cout << endl;
    }
};

int main()
{
    stacks s1;
    string str;

    cout << "Enter the string: ";
    cin >> str;

    s1.removeDigits(str);

    return 0;
}
