#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <numeric>
#define __STUDENT_PRNT std::cout << "Name\t\t" \
                                 << "Score\n--------------------\n\n";
struct Student
{
    std::string name{};
    int score{};
    Student(const std::string &name, const int &score)
    {
        this->name = name;
        this->score = score;
    };
    friend std::ostream &operator<<(std::ostream &out, const Student &student)
    {
        out << student.name << "\t\t" << student.score << "\n";
        return out;
    };
};

template <typename T>
void printVector(const std::vector<T> &param)
{
    for (const auto &p : param)
        std::cout << p;
};
bool isEqual(const std::string &str1, const std::string &str2)
{
    if (str1.length() == str2.length())
    {
        for (size_t i = 0; i < str1.size(); ++i)
        {
            if (str1[i] != std::tolower(str2[i]))
                return false;
        };
    }
    else
    {
        return false;
    };
    return true;
};

int main()
{
    {

        // srand(time(nullptr));
        // std::vector<int> num(10);
        // for (int &n : num)
        //     n = rand() % 100;
        // printVector<int>(num);
        // std::sort(std::begin(num),std::end(num));
        // printVector<int>(num);
        // // printVector<int>(num);
        // std::cout << "Luck Score : " << (std::accumulate(std::begin(num), std::end(num), 0) / num.size()) << "\n";
        // std::vector<std::string> names{};
        // std::cout << "Enter name & to exit program type quit:\n";
        // while (true)
        // {
        //     std::string temp{};
        //     std::getline(std::cin, temp);
        //     if (isEqual("quit", temp))
        //         break;
        //     names.push_back(temp);
        // };
        // printVector<std::string>(names);
        // std::sort(std::begin(names), std::end(names));
        // printVector<std::string>(names);
    }
    __STUDENT_PRNT
    std::vector<Student> students{Student("Vishal Ahirwar", 67), Student("Sameer Roy", 89), Student("Aryan Mishra", 78), Student("Akil", 9)};
    printVector<Student>(students);
    std::sort(std::begin(students), std::end(students), [](const Student &s1, const Student &s2)
              { return s1.name < s2.name; });
    std::cout << "\n\nafter doing basic sorting on names\n\n";
    __STUDENT_PRNT
    printVector<Student>(students);
    std::sort(std::begin(students), std::end(students), [](const Student &s1, const Student &s2)
              { return s1.score > s2.score; });
    std::cout << "\n\nafter doing basic sorting on score\n\n";
    __STUDENT_PRNT
    printVector<Student>(students);

    std::stable_sort(std::begin(students), std::end(students), [](const auto &s1, const auto &s2)
                     { return s1.name < s2.name; });
    printf("\nstable sort\n");
    __STUDENT_PRNT
    printVector<Student>(students);

    if(std::is_sorted(std::begin(students),std::end(students),[](const Student&s1,const auto&s2){return s1.score>s2.score;}))
    {
        printf("students data is already sorted!\n");
    }else
    {
        printf("data is not sorted :( sorting the data on the way...\n");
        std::sort(std::begin(students),std::end(students),[](const Student&s1,const auto&s2){return s1.score>s2.score;});
        printf("sorted students data  : ");
        printVector<Student>(students);
    };


    return 0;
}