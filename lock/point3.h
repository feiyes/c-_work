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
  void increase();
  void decrease();
private:
  pthread_mutex_t m_point_mutex;	  
  pthread_cond_t m_point_cond;
  double m_x;
  double m_y;
  int count;  
};
}
#endif
