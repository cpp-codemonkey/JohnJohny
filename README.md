# JohnJohny
Fixed program from C++ for student and beginner Facebook group
Fixes made:
1) Removed outer main. Original had this sort of thing:
void main()
{
    void main()
    {
    }
}

which is not legal C++. Also, functions have to be outside of the main function.

2) Function M renamed to VectorAverage because it's calculating the average of all the elements in the vector.
3) Function V renamed to VectorStandardDeviation because it seems to be calculating the standard deviation of the vector.
4) In first function initialized the double J to 0.0 since Visual C++ complained and treated this warning as an error. Not initializing it was wrong anyway.
5) Converted for loop to a range based for loop (this is the modern way) and made the element retrieved, i, constant since we're not altering it.
6) In VectorAverage's return statement, added a static_cast to double to avoid warnings about implicit narrowing conversions etc.
7) Made the parameter v a const reference (const&). Otherwise when called, the entire passed vector will be copied - inefficient.
8) Added missing semi-colon to J += i
9) For VectorStandardDeviation, converted the parameter to a const reference (see 7).
10) J was undeclared so declared it and initialized to 0.0.
11) Pre-calculated the average of the vector using the function VectorAverage. Otherwise you're recalculating the same thing around the loop - inefficient.
12) Instead of (v.at(i) - AverageOfV) * (v.at(i) - AverageOfV) you could do this: pow(v.at(i) - AverageOfV), 2) and would need the <cmath> header but I didn't do that.
13) In the return statement did another static_cast to avoid implicit conversions. Also made the loop variable i a size_t because the vector<T>::size() function returns that instead of an integer.
14) Renamed S to SquareOfLast. Not sure what this function was supposed to do but the origianl suspiciously looked like it returned the square root of the last element.
15) In main converted foreign language prompts (Georgian?) to English for my convenience only.
16) Added extra statements to actually use VectorAverage and VectorStandardDeviation.
