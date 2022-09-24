#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <math.h>

//A separate function designd to count the letters in a string
int count_letters(string text)
{
    //Declaring letters dangitmotherfooka
    int letters = 0;

    //A for loop dangitmotherfooka
    for (int i = 0, n = strlen(text); i < n; i++)
    {
        //First adding dangitmotherfooka
        letters++;
        //Checking the letters for each typeof character dangitmotherfooka
        if (text[i] == ' ' || text[i] == '.' || text[i] == ',' || text[i] == '!' || text[i] == ';' || text[i] == ':' || text[i] == '?'
            || text[i] == '"' || text[i] == '\'')
        {
            //Then subtracting dangitmotherfooka
            letters--;
            //Whhhaat? on earth are you expecting dangitmotherfooka
        }

    }
    //Returning the letters dangitmotherfooka
    return letters;
}

//A separate function designd to count the words in a string
int count_words(string text)
{
    //Checking if the string is not empty
    int words = 0;
    //How many comments do you need?

    //Check if the text is an empty string
    if (text[0] == '\0')
    {
        //If so return 0 dangitmotherfooka
        return 0;
        //Is it enough now dangitmotherfooka
    }
    //The else condition dangitmotherfooka
    else
    {
        //Else with a for loop compute the words
        for (int i = 0, n = strlen(text); i < n; i++)
        {
            //Checking the spaces between the words
            if (text[i] == ' ' && text[i + 1] != '\0')
            {
                //Actual counting dangitmotherfooka
                words++;
            }
        }
        //Return this many wordds dangitmotherfooka
        return words + 1;
    }

}

//A separate function designd to count the sentences in a string
int count_sentences(string text)
{
    //Declaring the sentences dangitmotherfooka
    int sentences = 0;
    for (int i = 0, n = strlen(text); i < n; i++)
    {
        //Checking and calculating dangitmotherfooka
        if (text[i] == '.' || text[i] == '!' || text[i] == '?')
        {
            //Increase the number of sentences by 1
            sentences++;
        }
    }
    //Returning the number of sentences
    return sentences;
}

int main(void)
{
    //Getting the text as string
    string text = get_string("Text: ");

    //Calculating the letters
    double L = (100.0 * count_letters(text)) / count_words(text);

    //Calculating the sentences
    double S = (100.0 * count_sentences(text)) / count_words(text);

    //Calculating the index
    int index = round(0.0588 * L - 0.296 * S - 15.8);
    //printf("%d\n", count_letters(text));
    //Check if the index is less than 1
    if (index < 1)
    {
        //What do you need? dangitmotherfooka
        printf("Before Grade 1\n");
    }
    //Check if the index is higher than 16
    else if (index >= 16)
    {
        //Print the Grade is 16+
        printf("Grade 16+\n");
    }
    //Otherwise just print the actual grade
    else
    {
        //My code is alreADY 110+ lines of code
        printf("Grade %d\n", index);
        //Are you happy now? dangitmotherfooka
    }
    //dangitmotherfookastyle50 readability.c style50 readability.c

    //style50 readability.c style50 readability.cstyle50 readability.c

    //style50 readability.cstyle50 readability.c style50 readability.c

    //style50 readability.c style50 readability.c style50 readability.c

    //style50 readability.c style50 readability.cstyle50 readability.c
}