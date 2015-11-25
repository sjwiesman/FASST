//
// Created by Seth Wiesman on 11/22/15.
//

#ifndef THESIS_POINT_H
#define THESIS_POINT_H

#include <vector>


class Point {
public:
    Point(std::vector<double> elements);

    double& operator[] (int const i);
    double const& operator[](int const i) const;
    bool operator==(Point const& that) const;
    std::string to_string();

    static double euclidean_distance(Point a, Point b);

private:
    std::vector<double> elements;

    static void check_size(Point const& a, Point const& b, std::string msg);
};

#endif //THESIS_POINT_H
