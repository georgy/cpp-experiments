#include <iostream>

using std::cout;
using std::endl;

int main() {

    int the_answer = 42;

    cout << "The answer is: " << the_answer << " But what is the question?" << endl;
    cout << "Can I make a const reference to the_answer?" << endl;

    const int &ref_to_the_answer = the_answer;

    cout << "Yes, I can... Can I change original value?" << endl;

    the_answer = 75;

    // CLion thinks this condition is always fasle. Ha-ha
    if (ref_to_the_answer == 75)
    {
        cout << "Yes, sir!" << endl;
    }

    cout << "ref_to_the_answer is: " << ref_to_the_answer << endl;

    // this one is illegal. But we are in Texas! Still illegal!
    //ref_to_the_answer = 75;

    return 0;
}