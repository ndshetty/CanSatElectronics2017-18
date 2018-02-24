void setupRTC()
{
  rtc.setTime(0, 0, 0, 0, 0, 0, 0); //Sets time to 0, basically mission time
}

void getTime()
{
  rtc.update();
  int missiontTime = rtc.getSecond() + 60*rtc.getMinute() + 3600*rtc.getHour(); //Time in seconds
  teleArray[teleMissionTime] = missionTime;
}

