// My solution
// Hardward University
// CS50 - pset-2 - readability solution


#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <math.h>


int main(void)
{


    float letterscount= 0;
    float wordscount = 0;
    float sentencecount = 0;



    string text = get_string("Text: \n");  //prompting user for input


    for (int i = 0, n = strlen(text); i < n; i++)
    {
        if (text[i] >= 65 && text[i] <= 122)
        {
            letterscount++;
        }
        else if (text[i] == 32 && (text[i - 1] != 33 && text[i - 1] != 46 && text[i - 1] != 63))
        {
            wordscount++;
        }
        else if (text[i] == 33 || text[i] == 46 || text[i] == 63)
        {
            sentencecount++;
            wordscount++;
        }
    }

    float L = letterscount * 100 / wordscount;
    float S = sentencecount * 100 / wordscount;


    float answer = round(0.0588 * L - 0.296 * S - 15.8); //formula

    if (answer < 1)
    {
        printf("Before Grade 1\n");
    }
    else if (answer >= 16)
    {
        printf("Grade 16+\n");
    }
    else
    {
        printf("Grade %i\n", (int) answer);
    }
}
