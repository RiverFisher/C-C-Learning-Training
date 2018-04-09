#include <iostream>

/**
 * Basic usage
 */
struct Math
{
    template <typename T>
    static T abs(const T &value)
    {
        return value < 0 ? -value : value;
    }
};

/**
 * Templates without typenames
 */
template <size_t N>
struct MyStruct
{
    void whoami() const
    {
        std::cout << N << std::endl;
    }
};

/**
 *  Template parameters in templates
 */
template <typename BinPred, typename T>
void foo(T & obj1, T & obj2, BinPred pred)
{
    if (pred(obj1, obj2))
        std::swap(obj1,obj2);
}

/**
 * Arrays in templates
 */
template<class T>
// double GetAverage(int tArray[], int nElements);
// double GetAverage(float tArray[], float nElements);
double GetAverage(T tArray[], int nElements)
{
    T tSum = T(); // tSum = 0

    for (int nIndex = 0; nIndex < nElements; ++nIndex)
    {
        tSum += tArray[nIndex];
    }

    // Независимо, от того, какой тип T, он будет преобразован в тип double:
    return double(tSum) / nElements;
}

/**
 * Pointers in templates
 */
//template<class T>
//GetAverage(T* tArray, int nElements){}

/**
 * Links in templates
 */
template<class T>
void TwiceIt(T& tData)
{
    tData *= 2;
    std::cout << tData << std::endl;
}

int main()
{
    /**
     * Basic usage
     */
    std::cout << Math::abs(-3.67) << std::endl;

    /**
     * Templates without typenames
     */
    MyStruct<42> s1;
    s1.whoami();

    /**
     * Template parameters in templates
     */
    int x = 10;
    int y = 30;
    //foo<std::less>(x, y);
    foo(x, y, std::less<int>());
    std::cout << x << ' ' << y << std::endl;

    /**
     * Arrays in templates
     */
    int  IntArray[5] = {100, 200, 400, 500, 1000};
    float FloatArray[3] = {1.55f, 5.44f, 12.36f};
    std::cout << GetAverage(IntArray, 5) << std::endl;
    std::cout << GetAverage(FloatArray, 3) << std::endl;

    /**
     * Links in templates
     */
    int q = 40;
    TwiceIt(q);

    return 0;
}
