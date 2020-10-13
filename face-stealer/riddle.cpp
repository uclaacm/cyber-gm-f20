// #!/usr/bin/env python

// import time
// import os

// SLEEP_TIME = 1

// def print_clear(string):
// 	os.system('clear')
// 	print(string)
// 	time.sleep(2)

// questions = [
// 	"Who had the original birthright of Fire Lord after Azulon?",
// 	"This person shares his name. Who is his grandfather on his mother's side?",
// 	"He once said, 'Maybe a _______ flew over'. What is the blank?",
// 	"In the flashback containing that quote, who else was feeding the turtle ducks?"
// ]

// answers = ["iroh", "zuko", "chicken", "ursa"]

// print_clear("Welcome, my old friend. It's been a long time. Why have you disturbed me?")
// print_clear("Your face betrays your intentions. You are seeking an answer from me.")
// print_clear("You are wise to have come to me for I am Koh and know many things...")
// print_clear("but before I tell you, why don't we play a little game?")
// print_clear("The rules are simple. I will ask you a series of questions.")
// print_clear("Your one-word answer will be a clue to answering the next question.")
// print_clear("Are you ready to begin?")
// raw_input("Press enter to continue...")

// for i, question in enumerate(questions):
// 	print_clear(question)
// 	answer = raw_input()
// 	if answer.lower().strip() != answers[i]:
// 		print_clear('Ha, incorrect.')
// 		exit()
// 	print_clear('... Correct.')

// print_clear("I am almost impressed. The answer you are looking for is pai_sho_for_dummies. Farewell")

#include <string>
#include <cstdlib>
#include <iostream>
#include <algorithm>
#include <cctype>
#include <unistd.h>
#include <limits>

using namespace std;

int SLEEP_TIME = 1;

void clear_screen()
{
    cout << string(100, '\n');
}

void print_clear(string s)
{
    system("clear");
    cout << s << endl;
    sleep(2);
}

string questions[] = {
	"Who had the original birthright of Fire Lord after Azulon?",
	"This person shares his name. Who is his grandfather on his mother's side?",
	"He once said, 'Maybe a _______ flew over'. What is the blank?",
	"In the flashback containing that quote, who else was feeding the turtle ducks?"
};

string answers[] = {"iroh", "zuko", "chicken", "ursa"};

string trim(const string& str,
                 const string& whitespace = " \t")
{
    const auto strBegin = str.find_first_not_of(whitespace);
    if (strBegin == string::npos)
        return ""; // no content

    const auto strEnd = str.find_last_not_of(whitespace);
    const auto strRange = strEnd - strBegin + 1;

    return str.substr(strBegin, strRange);
}

string lower(string data) {
    string lowercase = "";
    for (int i = 0; i < data.length(); i++) {
        lowercase += tolower(data[i]);
    }
    return lowercase;
}

int main()
{
    string tmp;
    print_clear("Welcome, my old friend. It's been a long time. Why have you disturbed me?");
    print_clear("Your face betrays your intentions. You are seeking an answer from me.");
    print_clear("You are wise to have come to me for I am Koh and know many things...");
    print_clear("but before I tell you, why don't we play a little game?");
    print_clear("The rules are simple. I will ask you a series of questions.");
    print_clear("Your one-word answer will be a clue to answering the next question.");
    print_clear("Are you ready to begin?");
    cout << "Press enter to continue..." << endl;
    cin.ignore(std::numeric_limits<streamsize>::max(),'\n');

    for (int i = 0; i < 4; i++) {
        print_clear(questions[i]);
        string answer;
        getline(cin, answer);
        if ((trim(lower(answer))) != answers[i]) {
            print_clear("Ha, incorrect.");
            exit(2);
        }
        print_clear("... Correct.");
    }
    print_clear("I am almost impressed. The answer you are looking for is pai_sho_for_dummies. Farewell");
}
