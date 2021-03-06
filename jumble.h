#include <chrono>

class WordJumble {
public:
    char hint_array[30];
    char master_list[100][30];
    char random_word[30];
    double points;
    int iteration_counter;
    char* pnr;
    char word; // pointer to input word
    int lenOfRandom;
    bool checker;
    int overall_hint_counter;
    int hint_counter;
    int hintsleft;
    int tries;
    // methods
    int Play();
    void checkLetter();
    void create_dash(int);
    void initialize();
    void randomize(char*);
    bool cmp();
    void hint();
    void get_random_word();
    void guess_word();
    void swap(char*, int, int);
    void set_random_word();
    void set_checker();
    void set_iteration_counter(int);
    void calculateScore();

};
