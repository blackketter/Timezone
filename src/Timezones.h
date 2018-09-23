#ifndef Timezones_h
#define Timezones_h

#include "Timezone.h"

// UTC time
extern Timezone UTC;

//Australia Eastern Time Zone (Sydney, Melbourne)
extern Timezone ausET;

//Central European Time (Frankfurt, Paris)
extern Timezone CE;

//United Kingdom (London, Belfast)
extern Timezone UK;

//US Eastern Time Zone (New York, Detroit)
extern Timezone usET;

//US Central Time Zone (Chicago, Houston)
extern Timezone usCT;

//US Mountain Time Zone (Denver, Salt Lake City)
extern Timezone usMT;

//Arizona is US Mountain Time Zone but does not use DST
extern Timezone usAZ;

//US Pacific Time Zone (Las Vegas, Los Angeles)
extern Timezone usPT;

#endif
