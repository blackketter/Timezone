#include "Timezones.h"

TimeChangeRule usPDT = {"PDT", Second, Sun, Mar, 2, -420};
TimeChangeRule usPST = {"PST", First, Sun, Nov, 2, -480};
TimeChangeRule usMDT = {"MDT", Second, Sun, Mar, 2, -360};
TimeChangeRule usMST = {"MST", First, Sun, Nov, 2, -420};
TimeChangeRule usCDT = {"CDT", Second, Sun, Mar, 2, -300};
TimeChangeRule usCST = {"CST", First, Sun, Nov, 2, -360};
TimeChangeRule usEDT = {"EDT", Second, Sun, Mar, 2, -240};  //Eastern Daylight Time = UTC - 4 hours
TimeChangeRule usEST = {"EST", First, Sun, Nov, 2, -300};   //Eastern Standard Time = UTC - 5 hours
TimeChangeRule aEDT = {"AEDT", First, Sun, Oct, 2, 660};    //UTC + 11 hours
TimeChangeRule aEST = {"AEST", First, Sun, Apr, 3, 600};    //UTC + 10 hours
TimeChangeRule CEST = {"CEST", Last, Sun, Mar, 2, 120};     //Central European Summer Time
TimeChangeRule CET = {"CET ", Last, Sun, Oct, 3, 60};       //Central European Standard Time
TimeChangeRule BST = {"BST", Last, Sun, Mar, 1, 60};        //British Summer Time
TimeChangeRule GMT = {"GMT", Last, Sun, Oct, 2, 0};         //Standard Time

Timezone CE(CEST, CET);
Timezone ausET(aEDT, aEST);
Timezone UK(BST, GMT);
Timezone usET(usEDT, usEST);
Timezone usCT(usCDT, usCST);
Timezone usMT(usMDT, usMST);
Timezone usAZ(usMST, usMST);
Timezone usPT(usPDT, usPST);
Timezone UTC(GMT,GMT);