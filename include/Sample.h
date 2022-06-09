#pragma once
#include <iostream>
#include <vector>

/**
 * @brief  Just a sample class
 *
 */
class Sample
{
public:
    /**
     * @brief std::vector<double> data attribute (default {1,2,3,4,5,6})
     *
     */
    std::vector<double> data{1., 2., 3., 4., 5., 6.};

    /**
     * @brief Construct a new Sample object
     *
     */
    Sample();

    /**
     * @brief Destroy the Sample object
     *
     */
    ~Sample();

    /**
     * @brief Set the Data object
     *
     * @param data The data to set.
     */
    void SetData(std::vector<double> data);

    /**
     * @brief Get the Data object
     *
     * @return std::vector<double> Return data attribute
     */
    std::vector<double> GetData();

    /**
     * @brief Method to print a generic vector
     *
     * @tparam T1 Data Type of the elements of the vector
     * @param vec The vector to print
     */

    template <typename T1>
    void PrintData(std::vector<T1> vec);

    /**
     * @brief Print the data attribute of the Sample class
     *
     */
    void PrintData();
};
