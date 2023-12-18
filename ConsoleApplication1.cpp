#include <iostream>
#include <vector>

using namespace std;

class myvector
{
private:
    double nums, sa, sum, all, p;
    vector<double> arr;
public:
    void set(vector<double> massive, double n)
    {
        nums = n;
        arr.resize(nums);
        for (int i = 0; i < arr.size(); i++)
        {
            arr[i] = massive[i];
        }
    }
    void operations()
    {
        sum = 0;
        sa = 0;
        all = 0;
        for (int i = 0; i < arr.size(); i++)
        {
            sum += arr[i];
        }
        sa = sum / arr.size();
        all = sum * 2 + sa;
    }
    void substraction()
    {
        for (int i = 0; i < arr.size(); i++)
        {
            arr[i] -= all;
        }
    }
    void return_size()
    {
        cout << arr.size() << endl;
    }
    void del_el()
    {
        arr.pop_back();
    }
    void plus_el(double _p)
    {
        p = _p;
        arr.push_back(p);
    }
    void push_back()
    {
        arr.push_back(sum);
        arr.push_back(sa);
    }
    void get_sum_sa()
    {
        printf("%.3f", sum);
        cout << " ";
        printf("%.3f", sa);
        cout << endl;
    }
    void get()
    {
        for (int i = 0; i < arr.size(); i++)
        {
            printf("%.3f", arr[i]);
            cout << " ";
        }
    }
};

int main()
{
    vector<double> massive;
    myvector mass;
    int n, oper;
    double p;

    cin >> n;
    massive.resize(n);
    for (int i = 0; i < massive.size(); i++)
    {
        cin >> massive[i];
    }

    mass.set(massive, n);
    mass.return_size();
    mass.get();
    cout << endl;
    mass.operations();
    mass.get();
    mass.get_sum_sa();
    mass.push_back();
    mass.substraction();
    mass.get();
    while (true)
    {
        cin >> oper;
        switch (oper)
        {
        case 1:
        {
            cin >> p;
            mass.plus_el(p);
            cout << "+: ";
            mass.return_size();
            mass.get();
            cout << endl;
            mass.operations();
            mass.get();
            mass.get_sum_sa();
            mass.push_back();
            mass.substraction();
            mass.get();
            cout << endl;
            continue;
        }
        case 2:
        {
            mass.del_el();
            cout << "-: ";
            mass.return_size();
            mass.get();
            cout << endl;
            mass.operations();
            mass.get();
            mass.get_sum_sa();
            mass.push_back();
            mass.substraction();
            mass.get();
            cout << endl;
            continue;
        }
        case 0: return 0;
        }
    }
    return 0;
}