#if false
/*
 PFM::C++ For Musicians Task
 Project 1 - Part 1 / 1
 Video: Chapter 2 Part 1
 
Create a branch named Part1

Purpose:  This project will get you thinking correctly about choosing good names for the tasks that your objects will perform. 
This project will also introduce you to the review process, and how Pull Requests work.
I will request a change be made to one of your 10 nouns for the sole purpose of showing how the review process works.

 1) write out 10 nouns in the space provided below.
    Choose nouns that do things.  
    avoid choosing nouns that have things done TO them.
    If your noun consists of multiple words, use camelCaseToNameIt.
 
 2) for each of the 10 nouns, write out 3 actions it might perform, in plain english.
    a) AVOID state-checking actions, like "Car has a horn".  i.e.
        car.hasHorn()
    b) We use 'can' and 'has' to check the state of objects, so they aren't really 'action' verbs.
        "the Car blows its horn" is a better action, because the car is doing something.  its state is not being checked.  i.e.
            car.blowsHorn()
    c) choose actions that your noun does.  Do not write out actions that are performed on your noun.
        for example: 
            noun: lightBulb.
            action: turns on.  
                This is a bad action because someone else turns on the light.  the light doesn't turn itself on. 
            a better action would be: 
                illuminates room
                This is a better action, because this is what lightbulbs do.  
            other actions that would work:
                action: consume electricity
                action: burn out and destroy filament.

        
 3) write out how you'd call that action in pseudo code, in the space after the plain-english action
 
 4) If the action requires multiple words, use camelCaseToNameIt
     don't forget the semi-colon after each statement
 */


//  example)
//  Noun:       arm                     // 1)
//  action 1:   the arm extends         // 2)
arm.extend();                           // 3)
//  action 2:   the arm flexes          // 2)
arm.flex();                             // 3)
//  action 3:   the arm rotates conter-clockwise
arm.rotateCounterClockwise();           // 4) demonstrates camelCase


//  1)
//  Noun:        CPU
//  action 1:    the CPU executes an instruction
CPU.execute();
//  action 2:    the CPU resets its state
CPU.reset();
//  action 3:    the CPU reads from memory
CPU.read();


//  2)
//  Noun:        pencil
//  action 1:    the pencil draws
pencil.draw();
//  action 2:    the pencil erases
pencil.erase();
//  action 3:    the pencil does nothing else
pencil.doNothing();


//  3)            
//  Noun:        calculator
//  action 1:    the calculator adds
calculator.add();
//  action 2:    the calculator subtracts
calculator.subtract();
//  action 3:    the calculator multiplies
calculator.multiply();

//  4)
//  Noun:        dog
//  action 1:    the dog barks
dog.bark();
//  action 2:    the dog wags its tail
dog.wag();
//  action 3:    the dog smells things
dog.smell();

//  5)
//  Noun:        rome
//  action 1:    rome comes
rome.come();
//  action 2:    rome sees
rome.see();
//  action 3:    rome conqueres
rome.conquer();

//  6)            
//  Noun:        mouse
//  action 1:    the mouse right clicks
mouse.rightClick();
//  action 2:    the mouse left clicks
mouse.leftClick();    
//  action 3:    the mouse scrolls
mouse.scroll();

//  7)
//  Noun:        soldier
//  action 1:    the soldier readies
soldier.ready();
//  action 2:    the soldier aimes
soldier.aim();
//  action 3:    the soldier fires
soldier.fire();

//  8)            
//  Noun:        vector
//  action 1:    appends element to back
vector.push_back();
//  action 2:    returns its size
vector.size();
//  action 3:    returns first element
vector.front();

//  9)            
//  Noun:        voteCounter
//  action 1:    the voteCounter accepts votes
voteCounter.acceptVotes();
//  action 2:    the voteCounter tallies votes
voteCounter.tallyVotes();
//  action 3:    the voteCounter declares winner
voteCounter.declareWinner();

//  10)
//  Noun:        therapist
//  action 1:    the therapist listens
therapist.listen();
//  action 2:    the therapist advises
therapist.advise();
//  action 3:    the therpist charges you out your ass
therapist.charge();

#endif

/*
 MAKE SURE YOU ARE NOT ON THE MASTER BRANCH

 Commit your changes by clicking on the Source Control panel on the left,
 entering a message, and click [Commit and push].

 If you didn't already:
    Make a pull request after you make your first commit
    pin the pull request link and this repl.it link to our DM thread in a single
 message.

 send me a DM to review your pull request when the project is ready for review.

 Wait for my code review.
 */

#include <iostream>
int main() {
  std::cout << "good to go" << std::endl;
  return 0;
}
