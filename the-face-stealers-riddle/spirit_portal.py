import time
import os

print("Welcome, my old friend. It's been a long time. Why have you disturbed me?")
time.sleep(2)
os.system('clear')
print("Your face betrays your intentions. You are seeking an answer from me.")
time.sleep(2)
os.system('clear')
print("You are wise to have come to me for I am Koh and know many things...")
time.sleep(3)
os.system('clear')
print("but before I tell you, why don't we play a little game?")
time.sleep(3)
os.system('clear')
print("The rules are simple. I will ask you a series of questions, and your answer to the question will be a clue to answering the next question.")
time.sleep(3)
os.system('clear')
print("Are you ready to begin?")
input("Press Enter to Continue...")

questions = list()
questions.append("Who had the original birthright of Fire Lord after Azulon?\n")
questions.append("This person shares his name. Who is his grandfather on his mother's side?\n")
questions.append("Who once said, 'Maybe a _______ flew over'\n")
questions.append("In the episode where he says that quote, he has a flashback of feeding turtle ducks with whom?\n")
questions.append("She took her son every year to see what play?\n")
questions.append("Which was 'butchered' every year by what acting troupe?\n")
questions.append("In their play, The Boy in the Iceberg, which character is played by an actor of a different gender?\n")
questions.append("He is the only character in TLA besides whom to have parents who are both benders?\n")

key = ["Iroh", "Zuko", "Chicken", "Ursa", "Love Amongst the Dragons", "The Ember Island Players", "Aang", "Piandao"]
answers = list()

for q in questions[:5]:
    answer = input(q)
    answers.append(answer)
    os.system('clear')
    print("Good... now use your answer to solve this next question")
    time.sleep(2)
    os.system('clear')

print("I hope you're enjoy this game. Don't worry you're almost done")
time.sleep(2)
os.system('clear')
for q in questions[5:]:
    answer = input(q)
    answers.append(answer)
    os.system('clear')


for i in range(0,8):
    if answers[i].lower().strip() != key[i].lower():
        print("I'm sorry but you have answered one of my questions incorrectly. Try again")
        exit()
print("I am almost impressed. The answer you are looking for is pai_sho_for_dummies. Farewell")