#include <stack>
#include <iostream>

/**
    work in progress

    this code is intended to determine if a string is written in language L
    L = {asa$asa but does not conist of asa$qwq}
*/




/**
    @par: reference to a string variable
    @return: true if it is written in language L, false if not
    @post: creates a stack, astack, and pushes variables before the '$'.
            Then pops the second half of the string is it mirrors the first half
            if isempty, return true.
*/
bool isLanguageL(const std::string &str)
{
    int i = 0;
    char ch = str[i]; //creates a var ch which will contain each index of the string starting with 0

    int len = str.length();
    std::stack<char> astack;

    //interates through the first half of the string and pushes the chars into stack
    //stops once finds '$'.
    while(ch != '$' && i < len)
    {
        astack.push(ch); //pushes character onto stack
        i++; //advances to next postion
    }

    i++; //skips the position of $.

    bool isL = true;

    while(isL && i < len)
    {
        if(!astack.empty())
        {
            char top_stack = astack.top();
            astack.pop();
            
            if(ch == top_stack)
            {
                i++;
                if (i < len)
                {
                    ch = str[i];
                }
            } else
            {
                isL = false;
                return isL;
            }
        } else 
        {
            isL = false;
            return isL;
        }
    }
    return isL && astack.empty();
}

int main()
{
    //takes user input and stores it in string var, named str
    std::cout << "enter a string: ";
    std::string str;
    std::cin >> str;

    //outputs result for testing
    if(isLanguageL(str))
    {
        std::cout << str << " is indeed written in language L. \n";
    } else
    {
        std::cout << str << " is NOT written in languagae L. \n";
    }

    return 0;
}