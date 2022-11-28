#include <iostream>
#include <string>
#include <string.h>

class Book
{
private:
    int* pagecount;
    int* age;

public:
    Book(int pages = 0, int age = 0)
    {
        std::cout << "Конструктор Book" << std::endl;
        pagecount = new int(pages);
        this->age = new int(age);
    }

    ~Book()
    {
        std::cout << "Деструктор Book" << std::endl;
        delete pagecount;
        delete age;
    }

    int getAge()
    {
        return *age;
    }

    int getPageCount()
    {
        return *pagecount;
    }
};

class Magazine : public Book
{
private:
    int* raiting;
    std::string* name;

public:
    Magazine(int raiting = 0, std::string name = "no name", int pages = 0, int age = 0) : Book(pages, age)
    {
        std::cout << "Конструктор Magazine" << std::endl;
        this->raiting = new int(raiting);
        this->name = new std::string(name);
    }

    ~Magazine()
    {
        std::cout << "Деструктор Magazine" << std::endl;
        delete raiting;
        delete name;
    }

    int getRaiting()
    {
        return *raiting;
    }

    std::string getName()
    {
        return *name;
    }
};

class Vocabulary : public Book
{
private:
    int* wordcount;
    std::string* language1;
    std::string* language2;

public:
    Vocabulary(int words = 0, std::string lang1 = "no l1", std::string lang2 = "no l2", int pages = 0, int age = 0) : Book(pages, age)
    {
        std::cout << "Конструктор Voc" << std::endl;
        wordcount = new int(words);
        language1 = new std::string(lang1);
        language2 = new std::string(lang2);
    }

    ~Vocabulary()
    {
        std::cout << "Деструктор Voc" << std::endl;
        delete wordcount;
        delete language1;
        delete language2;
    }

    int getWordCount() { return *wordcount; }

    std::string getLang1() { return *language1; }
    
    std::string getLang2() { return *language2; }
};

class Uchebnik : public Book
{
private:
    int* grade;
    std::string* subj;

public:
    Uchebnik(int gr = 1, std::string s = "no subj", int pages = 0, int age = 0) : Book(pages, age)
    {
        std::cout << "Конструктор Uchebnik" << std::endl;
        grade = new int(gr);
        subj = new std::string(s);
    }

    ~Uchebnik()
    {
        std::cout << "Деструктор Uchebnik" << std::endl;
        delete grade;
        delete subj;
    }

    int getGrade() { return *grade; }

    std::string getSubj() { return *subj; }
};

int main()
{
    //Установить русскую кодировку консоли
    setlocale(LC_ALL, "Russian");
    
    Uchebnik* uch = new Uchebnik(2, "Matan", 13, 8);
    Vocabulary* voc = new Vocabulary(228, "Russish", "Engl", 15, 0);
    Magazine* forbs = new Magazine(13, "Forbes", 1, 18);

    delete voc;
    delete forbs;
    delete uch;
}