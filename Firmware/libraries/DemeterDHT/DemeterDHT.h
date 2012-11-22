#ifndef _DemeterDHT_H_
#define _DemeterDHT_H_

#define MAXTIMINGS 85

class demeterDHT{
 public:
  void begin(int pin);
  float readTemperature(void);
  float readHumidity(void);
  
 private:
  int data[6];
  int _pin;
  int read(void);
  unsigned long _lastreadtime;
  int firstreading;
};

#endif