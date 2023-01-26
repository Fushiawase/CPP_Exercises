#include <iostream>
#include <unordered_set>

unordered_set<std::string> make_exit_commands(){
    unordered_set<std::string> set;
    set.insert("q");
    set.insert("quit");
    set.insert("e");
    set.insert("exit");
    return set;
}

int main()
{
    auto exit_commands = make_exit_commands();
    
    while (true)
    {
        std::string input;
        std::cin >> input;

        if(exit_commands.contains(input))
            exit(0);

    }

    return 0;
}