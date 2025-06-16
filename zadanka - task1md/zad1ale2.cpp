#include <iostream> 
#include <vector>
#include <numeric>

class Statystyka{
private:
    std::vector<float> _data;

public:
    void setOneData(float d)
    {
        _data.push_back(d);
    }

    //srednia
    float getMean()
    {
        if (_data.empty()) 
            throw std::runtime_error("Cannot calculate mean of empty data set.");

        auto sum = std::accumulate(_data.begin(), _data.end(), 0, 
                                    [](int a, int b)
                                    {
                                        return a + b;
                                    });
        return static_cast<float>(sum) / _data.size();

    }

    //odchylenie standardowe
    float getStandardDeviation()
    {

    }

    //mediana
    float getMedian()
    {

    }

};

int main()
{
    Statystyka s;
}
