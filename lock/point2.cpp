#include "point.h"

namespace test
{
  Point::Point(int x, int y):m_x(x),m_y(y)
  {
    pthread_mutext_init(&m_point_mutex, NULL);	
  }
  ~Point::Point()
  {
    pthread_mutex_destroy(&m_point_mutex);
  }
  void setPoint(int x, int y)
  {
    printf("enter\n");
    pthread_mutex_lock(&m_point_lock);
    m_x = x;
    m_y = y;
    pthread_mutex_unlock(&m_point_unlock);
    printf("leave\n");
  }
}
