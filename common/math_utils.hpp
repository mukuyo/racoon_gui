#ifndef MATH_UTILS
#define MATH_UTILS

#include <iostream>

struct AvailableInfo
{
    std::vector<int> blue_robots;
    std::vector<int> yellow_robots;
};

struct BallInfo
{
    float x;
    float y;
    float speed;
};

struct RobotInfo
{
    uint32_t id;
    float x;
    float y;
    float speed;
    float theta;
    bool is_visible;
    bool is_online;
};

class Utils
{
public:
    float degrees(float radian)
    {
        float degree = radian * 180.0 / M_PI;
        return degree;
    }

    float radians(float degree)
    {
        float radian = degree * M_PI / 180.0;
        return radian;
    }

    float radian_normalize(float radian, float center = 0.0)
    {
        float ret = radian - (M_PI*2 * floor((radian + M_PI - center) / M_PI*2));
        return ret;
    }
};
#endif