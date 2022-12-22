#include <iostream>
#include <string>
#include <vector>
#include <list>
#include <algorithm>
#include <numeric>

using namespace std;

class User
{
    string name;
    int age;
public:
    User(string name, int age) : name{ name }, age{ age } {}
    friend ostream& operator<<(ostream& out, const User& u)
    {
        out << "(" << u.name << ") - [" << u.age << "]";
        return out;
    }
    string& Name() { return name; }
    int& Age() { return age; }

    friend bool operator==(const User& u1, const User& u2)
    {
        return u1.name == u2.name;
    }

    friend bool operator<(const User& u1, const User& u2)
    {
        return u1.name < u2.name&& u1.age < u2.age;
    }
};

int main()
{
    // set algorithm
    /*
    vector<int> v1{ 1, 2, 3, 4, 5, 6, 7 };
    vector<int> v2{ 5, 6, 7, 8, 9, 10, 11 };

    vector<int> res;

    copy(v1.begin(), v1.end(), ostream_iterator<int>(cout, " "));
    cout << "\n";
    copy(v2.begin(), v2.end(), ostream_iterator<int>(cout, " "));
    cout << "\n";

    set_difference(v1.begin(), v1.end(),
                    v2.begin(), v2.end(),
                    back_inserter(res));
    cout << "set_difference\n";
    copy(res.begin(), res.end(), ostream_iterator<int>(cout, " "));
    cout << "\n";

    res.clear();
    set_intersection(v1.begin(), v1.end(),
                    v2.begin(), v2.end(),
                    back_inserter(res));
    cout << "set_intersection\n";
    copy(res.begin(), res.end(), ostream_iterator<int>(cout, " "));
    cout << "\n";

    res.clear();
    set_symmetric_difference(v1.begin(), v1.end(),
                    v2.begin(), v2.end(),
                    back_inserter(res));
    cout << "set_symmetric_difference\n";
    copy(res.begin(), res.end(), ostream_iterator<int>(cout, " "));
    cout << "\n";

    res.clear();
    set_union(v1.begin(), v1.end(),
                    v2.begin(), v2.end(),
                    back_inserter(res));
    cout << "set_union\n";
    copy(res.begin(), res.end(), ostream_iterator<int>(cout, " "));
    cout << "\n";
    */

    // heap algorithm
    /*
    //vector<int> heap1{ 30, 25, 20, 26, 20, 15, 13, 10 };
    //copy(heap1.begin(), heap1.end(), ostream_iterator<int>(cout, " "));
    //cout << "\n";

    //cout << boolalpha << is_heap(heap1.begin(), heap1.end()) << "\n";
    ////cout << *is_heap_until(heap1.begin(), heap1.end()) << "\n";

    //make_heap(heap1.begin(), heap1.end());
    //cout << "after make heap:\n";
    //cout << boolalpha << is_heap(heap1.begin(), heap1.end()) << "\n";
    //copy(heap1.begin(), heap1.end(), ostream_iterator<int>(cout, " "));
    //cout << "\n";

    srand(time(nullptr));
    vector<int> vrand(10);

    copy(vrand.begin(), vrand.end(), ostream_iterator<int>(cout, " "));
    cout << "\n";

    generate(vrand.begin(), vrand.end(), []() { return rand() % 100; });
    copy(vrand.begin(), vrand.end(), ostream_iterator<int>(cout, " "));
    cout << "\n";

    auto back = vrand.end();
    while (back != vrand.begin())
    { 
        make_heap(vrand.begin(), back);
        swap(*vrand.begin(), *(--back));
    }

    cout << "result:\n";
    copy(vrand.begin(), vrand.end(), ostream_iterator<int>(cout, " "));
    cout << "\n";
    */

    // max min algorithm
    cout << max(100, 200) << "\n";
    cout << max({1, 6, 3, 8, 4, 10, 22, 7, 2}) << "\n";

    vector<int> v1{ 1, 2, 3, 4, 5, 6, 7, 8, 9 };

    cout << accumulate(v1.begin(), v1.end(), 0,
        [](auto acc, auto item)
        {
            if (!(item % 2))
                return acc + item;
            else
                return acc;
        }) << "\n";
}
