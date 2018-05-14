#pragma once
#ifndef _ANGLECONV_H
#define _ANGLECONV_H
#include <math.h>

inline double normalizeRad(double angleInRad){

  double norm = (fmod(angleInRad+M_PI, 2*M_PI)-M_PI);
  if (norm < -M_PI) norm += 2*M_PI;

  return (norm);
}

inline double invRad(double angleInRad){
  return (-(angleInRad - M_PI)) + M_PI;
}

inline double dyn2rad(int angleInDynamixel) {
  int normalizedInput = fmod(angleInDynamixel,4095);
  if (normalizedInput < 0) normalizedInput = normalizedInput + 4095;

  double angleToReturn = (double) ((normalizedInput-2048.0) / 2048.0) * M_PI;
  return angleToReturn;
}

inline int rad2dyn(double angleInRad) {

  // Normalize to -pi -> pi:
  double normalizedInput = normalizeRad(angleInRad);
  if (normalizedInput < 0) normalizedInput = normalizedInput + 2*M_PI;
  int returnVariable = ((normalizedInput / (2 * M_PI)) * 4095.0) + (2048);
  return returnVariable;
}

inline double rad2deg(double angleInRad) {
  return (angleInRad/(2.0*M_PI))*360.0;
}

inline double deg2rad(double angleInDeg) {
  return (angleInDeg / 360.0) * 2.0 * M_PI;
}

#endif
