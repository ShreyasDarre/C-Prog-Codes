#include <stdio.h>
#include <string.h>

void findfreq(char *s);
void printfreq(int freq[]);

void findfreq(char *s)
{
    int i = 0;
    int freq[26] = {0};

    while (s[i] != '\0')
    {
        freq[s[i] - 'a']++;
        i++;
    }
    printfreq(freq);
}

void printfreq(int freq[])
{
    for (int i = 0; i < 26; i++)
    {
        if (freq[i] != 0)
        {
            printf("%c%d", i + 'a', freq[i]);
        }
    }
}

int main()
{
    char s[100] = "aaabbcccc";
    findfreq(s);

    return 0;
}
