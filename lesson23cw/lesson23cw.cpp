#include "Array.h"
#include <string>

#include <vector>
#include <algorithm>
#include <ctime>
int main()
{
   /* Array<int> a(10, 0);
    Array<float> b(5, 9.99);
    Array<string> c(3, "undefined");

    a.print();
    b.print();
    c.print();*/



    //0
    //srand(time(0));

    //vector<int> v1{ 4,-7,5,6,1 };
    //v1.push_back(-99);

    //for (int i = 0; i < 4; i++)
    //{
    //    v1.push_back(rand() % 50 - 25);
    //}

    //for (int i = 0; i < v1.size(); i++)
    //{
    //    cout << v1[i] << " ";
    //}cout << endl;

    //vector<int>::iterator it;
    //for (it = v1.begin(); it != v1.end(); it++)
    //{
    //    cout << *it << " ";
    //}cout << endl;

    //for (int a : v1)
    //{
    //    cout << a << " "; //копия
    //}cout << endl;

    //for (int& a : v1)
    //{
    //    cout << a << " "; //посилання
    //}cout << endl;

    //for (auto a : v1) //auto = int
    //{
    //    cout << a << " "; //копия
    //}cout << endl;


    //1
    //vector<int> v{ 1,3,5,7,8,9 };
    //for (auto a : v) //auto = int
    //{
    //    cout << a << " ";
    //}cout << endl;

    //vector<int>::iterator middle = v.begin()+v.size()/2;
    //v.insert(middle, 5, 0);

    //for (auto a : v) //auto = int
    //{
    //    cout << a << " ";
    //}cout << endl;


    //2
    //vector<int> v{ 1,3,5,7,8 };
    //for (auto a : v) //auto = int
    //{
    //    cout << a << " ";
    //}cout << endl;

    ////vector<int>::iterator middle = v.begin() + v.size() / 2;
    //v.erase(v.begin()+1, v.end()-1);

    //for (auto a : v) //auto = int
    //{
    //    cout << a << " ";
    //}cout << endl;


    //3
    vector<int> v{2, 1,-2,5,12,5, };
    for (auto a : v) //auto = int
    {
        cout << a << " ";
    }cout << endl;

    cout << *max_element(v.begin(), v.end()) << endl;
    cout << *min_element(v.begin(), v.end()) << endl;
    cout << *min_element(v.begin(), v.end(), [](int a, int b) {return a < b && a % 2 == 0; }) << endl;


    //4 - incomplete
    ////vector<int> v{ 1,0,5,0,5, };
    ////std::vector<int>::iterator zero;
    ////for (auto a : v) //auto = int
    ////{
    ////    cout << a << " ";
    ////}cout << endl;

    ////zero = find(v.begin(), v.end(), 0);
    ////cout << *zero;
    
}
