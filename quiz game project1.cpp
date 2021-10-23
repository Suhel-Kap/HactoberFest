#include <iostream>
#include <string>

using namespace std;

int guess;
int total;

class question
{
    private:
    string Question_text;
    string Answer_1;
    string Answer_2;
    string Answer_3;
    string Answer_4;

    int Correct_Answer;
    int Question_Score;

    public:
    void setvalues (string, string, string, string, string, int, int);
    void askQuestion();
};

   int main();
   {
       cout << "* * * * * * * * * * * * * * * * * * * * * * * * *" << endl;
       cout << "*                                               *" << endl; 
       cout << "*          * WELCOME TO THE C++ QUIZ!*          *" << endl;
       cout << "*     --------------------------------------    *" << endl;
       cout << "*                      By                       *" << endl;
       cout << "*                                               *" << endl;
       cout << "*                  Ishika Mishra                *" << endl;
       cout << "*                                               *" << endl;
       cout << "* * * * * * * * * * * * * * * * * * * * * * * * *" << endl;
       cout << endl;

       cout << "Press Enter to start the Quiz .... " << endl;
       cin.get();

       string name;
       int Age;
       cout<<"What's your name?" << endl;
       cin >> name ;
       cout << endl;
       cout << "How old are you?"<< endl;
       cin >> Age ;
       string Respond;
       cout << "Are you ready to take the quiz" << name << "? Yes/No." << endl;
       cin >> Respond;
       if (Respond == "yes")
       {
           cout<<endl;
           cout << "ok, good luck!" << endl;
           cout<< endl;
       }
        else
        {
            cout << "Ok, Goodbye!" << endl;
            return 0;
        }

        question q1;
        question q2;
        question q3;
        question q4;
        question q5;
        question q6;
        question q7;
        question q8;
        question q9;
        question q10;



        q1.setvalues("What is the only function of all C++ program must contain?",
                     "start()",
                     "system ()",
                     "main ()",
                     "program ()",
                     3,
                     10);

        q2.setvalues("Which of the following is use as a comment?",
                     "*/ Comments */",
                     "/* Comments */",
                     "** Comments **",
                     "{comments}",
                     2,
                     10);

        q3.setvalues ("The statement i++ is equivalent to: ",
                      "i = i + i",
                      "i = i + 1",
                      "i = i - 1",
                      "i--",
                      2,
                      10);

        q4.setvalues("In C++ 14 % 4 =",
                     "3",
                     "1",
                     "4",
                     "2",
                     4,
                     10);                                       
        
        q5.setvalues("When a data type must contain decimal numbers, assign the type: ",
                     "int",
                     "char",
                     "double",
                     "long int",
                     3,
                     10);

        q6.setavalues("The name of variable is known as its: ",
                      "identifier",
                      "constant",
                      "data type",
                      "base",
                      1,
                      10);

        q7.setvalues("In int main(), what does the int stand for?",
                     "initialize",
                     "integer",
                     "inheritance",
                     "nothing",
                     2,
                     10);
        q8.setavlues("The relationaloperator is equal is: ",
                     "=",
                     "/=",
                     "=/",
                     "==",
                     4,
                     10); 

        q9.setvalues("Which of the following is true :",
                     "All object of a class share all data members of class",
                     "Objects of a class do not share non-static members. Every members have there own static members.",
                     "Objects of a class do not share codes of non static methods, they have there own methods.",
                     "None of the above",
                     2,
                     10);

        q10.setvalues("What is the roll of constructor in classes?",
                      "To modify the data whenever required",
                      "To destroy an Object",
                      "To initialize the data members of an object when it is created",
                      "To call private functions from outer world",
                      3,
                      10);

       q1.askQuestion();
       q2.askQuestion();                                                                           
       q3.askQuestion();
       q4.askQuestion();
       q5.askQuestion();
       q6.askQuestion();
       q7.askQuestion();
       q8.askQuestion();
       q9.askQuestion();
       q10.askQuestion();


       cout<< " Your total score is " << Total << "out of 100" << endl;
       cout << endl;

       if (Total >=70 )
       {
           cout << "Great you passed the quiz!" << endl;
           cout << endl;
           cout << "$ $ $ $ $ $ $ $ $ $ $ $ $ $ $ $ $ $ $ $ $ $" << endl;
           cout << "$                                         $" << endl;
           cout << "$            *CONGRATULATIONS!*           $" << endl;
           cout << "$                                         $" << endl;
           cout << "$                                         $" << endl;
           cout << "$ $ $ $ $ $ $ $ $ $ $ $ $ $ $ $ $ $ $ $ $ $" << endl;
       }
       else
       {
           cout << "Sorry you failed the quiz." << endl;
           cout << endl;
           cout << "Better luck next time" << endl;
       }
       return 0;
   }
   void Question::setvalues (string q, string a1, string a2, string a3, string a4, int ca, int pa)
   {
       Question_Text = q;
       Answer_1 = a1;
       Answer_2 = a2;                                         
       Answer_3 = a3;     
       Answer_4 = a4;
       Correct_Answer = ca;
       Question_score = pa;
   }

   void Question::askquestion()
   {
       cout << endl;
       cout << Question_text << endl;
       cout << "1. " << Answer_1 << endl;
       cout << "2. " << Answer_2 << endl;
       cout << "3. " << Answer_3 << endl;
       cout << "4. " << Answer_4 << endl;
       cout << endl;

       cout << "What is your answer?" << endl;
       cin >> guess;
       if (guess == Correct_Answer)
       {
           cout << endl;
           cout << "Great! you are correct." << endl;
           Total = total + Question_score;
           cout << "Score:" << question_score << " Out of " << Question_Score << "!" << endl;
           cout << endl;
       }
       else
       {
           cout<<endl;
           cout << "OH No! you are wrong." << endl ;
           cout << "Score: 0" << "out of" << Question Score << "!" << endl;
           cout << "The correct answer is " << Correct_Answer << "." << endl;
           cout << endl;
       }
   }
