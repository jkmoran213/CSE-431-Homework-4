#include <stdio.h>
#include <iostream>
#include <map>
#include <unordered_map>
#include <chrono> 
using namespace std;
using namespace chrono;

void ordered_test(multimap<int, int> o_map, int n)
{
    auto start = high_resolution_clock::now();
    for(int i = 0; i < n; i++)
    {
        o_map.insert(pair<int,int>(i, i));
    }
    auto end = high_resolution_clock::now();
    auto duration = duration_cast<microseconds>(end - start);
    printf("Ordered: %f\n", duration.count() * 0.000001);
}

void unordered_test(unordered_multimap<int, int> u_map, int n)
{
    auto start = high_resolution_clock::now();
    for(int i = 0; i < n; i++)
    {
        u_map.insert(pair<int,int>(i, i));
    }
    auto end = high_resolution_clock::now();
    auto duration = duration_cast<microseconds>(end - start);
    printf("Unordered: %f\n", duration.count() * 0.000001);
}

int main()
{
    multimap<int, int> ordered;
    unordered_multimap<int, int> unordered;
    int test_sizes[6] = {10,100,1000,10000,100000,1000000};
    for(int i = 0; i < 6; i++)
    {
        ordered_test(ordered, test_sizes[i]);
        unordered_test(unordered, test_sizes[i]);
    }
}
