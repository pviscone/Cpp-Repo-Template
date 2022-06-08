#include "Sample.h"

Sample::Sample()
{
}

Sample::~Sample()
{
}

void Sample::SetData(std::vector<double> newdata)
{
    this->data = newdata;
}

std::vector<double> Sample::GetData()
{
    return this->data;
}

template <typename T1>
void Sample::PrintData(std::vector<T1> vec)
{
    for (auto i : vec)
    {
        std::cout << i << " ";
    }
    std::cout << std::endl;
}

void Sample::PrintData()
{
    Sample::PrintData(this->data);
}