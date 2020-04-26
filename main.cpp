#if false
/*
 PFM::C++ For Musicians Task
 Project 1 - Part 1 / 1
 Video: Chapter 2 Part 1
 
Create a branch named Part1

Purpose:  This project will get you thinking correctly about choosing good names for the tasks that your objects will perform. 
This project will also introduce you to the review process, and how Pull Requests work.

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
 
 5) When you finish, commit your changes by clicking on the Source Control panel on the left, entering a message, and click [Commit and push].

Make a pull request after you make your first commit and pin the pull request link to our DM thread.

send me a DM to check your pull request

 Wait for my code review.
 */


//  example)
//  Noun:       arm                     // 1)
//  action 1:   the arm extends         // 2)
arm.extend();                           // 3)
//  action 2:   the arm flexes          // 2)
arm.flex();                             // 3)
//  action 3:   the arm rotates conter-clockwise
arm.rotateCounterClockwise();           // 4) demonstrates CamelCase


//  1)
//  Noun: woman
//  action 1: the woman kicks
woman.kick();
//  action 2: the woman speaks
woman.speaks();
//  action 3: the woman shouts 
woman.shouts();
//  2)
//  Noun:  team
//  action 1: the team wins
team.wins();
//  action 2: the team loses
team.lose();
//  action 3: the team goes
team.goes();
//  3)
//  Noun: landspeeder
//  action 1: the landspeeder flies
landSpeeder.fly()
//  action 2: the landspeeder stops
landSpeeder.stop();
//  action 3: the landspeeder turns
landSpeeder.turn();
//  4)
//  Noun: dragon
//  action 1:  the dragon eats
dragon.eat();
//  action 2:  the dragon breathes
dragon.breath();
//  action 3:  the dragon flies
dragon.fly();
//  5)
//  Noun:  light
//  action 1: the light shines
light.shine();
//  action 2: the light blinks
light.blink();
//  action 3: the light shimmers
light.shimmer();
//  6) 
//  Noun: cat 
//  action 1:  the cat jumps
cat.jump();
//  action 2: the cat purrs
cat.purr();
//  action 3: the cat meows
cat.meow();
//  7)
//  Noun:  eye
//  action 1: the eye sees
eye.see();
//  action 2: the eye blinks
eye.blink();
//  action 3: the eye squints
eye.squint();
//  8)
//  Noun: synth
//  action 1: the synth generates sounds
synth.generateSound();
//  action 2: the synth outputs frequencies
synth.outputFrequency();
//  action 3:  the synth generates noise
synth.generateNoise();
//  9)
//  Noun: musician
//  action 1: the musician plays
musician.play();
//  action 2:  the musician hears
musician.hear();
//  action 3: the musician sings
musician.sing();
//  10)
//  Noun: dog
//  action 1: the dog barks
dog.bark();
//  action 2:  the dog sits
dog.sit();
//  action 3: the dog runs
dog.runs();


#endif

#include <iostream>
int main()
{
    std::cout << "good to go" << std::endl;
    return 0;
}
