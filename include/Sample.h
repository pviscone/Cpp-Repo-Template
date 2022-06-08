#include <iostream>
#include <vector>

class Sample{
public:
    std::vector<double> data {1.,2.,3.,4.,5.,6.};
    Sample();
    ~Sample();
    void SetData(std::vector<double> data);
    std::vector<double> GetData();

    template <typename T1>
    void PrintData(std::vector<T1> vec);
    void PrintData();
};
