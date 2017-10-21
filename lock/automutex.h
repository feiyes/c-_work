#ifndef __AUTO_MUTEX_H__
#define __AUTO_MUTEX_H__
#include <pthread.h>

class AutoMutex()
{
Public:
  AutoMutex(pthread_mutex_t &mutex):m_mutex(mutex)  {pthread_mutex_lock(&m_mutex);}
  AutoMutex(pthread_mutex_t *mutex):m_mutex(*mutex) {pthread_mutex_lock(&m_mutex);}
  ~AutoMutex(){pthread_mutex_unlock(&m_mutex);}
private:	
  pthread_mutex_t &m_mutex;
};
#endif
