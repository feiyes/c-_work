#include "point.h"

namespace test
{
  Point::Point(int x, int y):m_x(x),m_y(y),count(0)
  {
    pthread_mutext_init(&m_point_mutex, NULL);	
    pthread_cond_init(&m_point_cond,NULL);
  }
  ~Point::Point()
  {
    pthread_mutex_destroy(&m_point_mutex);
  }
  void Point::setPoint(int x, int y)
  {
    printf("enter\n");
    pthread_mutex_lock(&m_point_lock);
    m_x = x;
    m_y = y;
    pthread_mutex_unlock(&m_point_unlock);
    printf("leave\n");
  }
  void Point::increase()
  {
    pthread_mutex_lock(&m_point_lock);
    count++;
    if (count!=0)
      pthread_cond_signal(&cond);
    pthread_mutex_unlock(&m_point_unlock);
  }
  void Point::decrease()
  {  
    pthread_mutex_lock(&m_point_lock);
    if (count == 0)
      pthread_cond_wait(&cond,m_point_mutex);
    count--; 
    pthread_mutex_unlock(&m_point_unlock);
  }
}
