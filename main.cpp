#include "Sample.h"

int main(){
    Sample s;
    std::vector<double> data=s.GetData();
    s.PrintData(data);
    s.PrintData();
    s.SetData({2,2,2});
    s.PrintData();



    return 0;
}