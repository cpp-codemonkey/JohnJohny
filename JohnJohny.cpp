#include <iostream>
#include<vector>
using namespace std;

double VectorAverage(vector<double> const& v)
{
	double J = 0.0;
	for (double const i : v)
	{
		J += i;
	}
	return J / static_cast<double>(v.size());
}

double VectorStandardDeviation(vector<double> const& v)
{
	vector<double> v1;
	double J = 0.0;
	double const AverageOfv = VectorAverage(v);
	for (size_t i = 0; i < v.size(); i++)
	{
		v1.push_back((v.at(i) - AverageOfv) * (v.at(i) - AverageOfv));
		J += v1.at(i);
	}
	return J / static_cast<double>(v1.size());
}

double SquareOfLast(vector<double> const& v)
{
	return sqrt(v[v.size()-1]);
}

int main()
{
	vector<double> v;
	double a = 0;
	cout << "Enter the numbers: ";
	while (cin >> a)
	{
		v.push_back(a);
	}
	cout << "You entered the numbers: ";
	for (size_t i = 0; i < v.size(); i++)
	{
		cout << v.at(i) << " ";
	}
	cout << endl;

	cout << "The average is: " << VectorAverage(v) << endl;
	cout << "The standard deviation is: " << VectorStandardDeviation(v) << endl;
	cout << "The square of the last element is: " << SquareOfLast(v) << endl;
	return 0;
}
