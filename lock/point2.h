#ifndef __POINT_H__
#define __POINT_H__

#include <pthread.h>
namespace test
{
class Point
{
public:
  Point(int x, int y);
  ~Point();
  void setPoint(int x, int y);
private:
  pthread_mutex_t m_point_mutex;	  
  double m_x;
  double m_y;  
};
}
#endif
