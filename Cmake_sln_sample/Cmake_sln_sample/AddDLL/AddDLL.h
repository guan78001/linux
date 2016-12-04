#pragma once
#ifndef _ADDDLL_H__
#define _ADDDLL_H__
#ifdef _WIN32
#ifdef ADDDLL_EXPORTS
#define ADDDLL_API __declspec(dllexport)
#else
#define ADDDLL_API __declspec(dllimport)
#endif
#else
#define ADDDLL_API
#endif
class ADDDLL_API AddDLL {
 public:
  void Print();
  int Add(int a, int b);
};
#endif
