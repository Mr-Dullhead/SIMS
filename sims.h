#pragma once
#ifndef SIMS_H_INCLUDED
#define SIMS_H_INCLUDED
#include <fstream>
#include <iostream>
#include <cstdlib>
#include <vector>
#include <iterator>
#include <algorithm>
using namespace std;

struct person
{
	char name[40];	
};
struct student : public person
{
	int number;
	char Class[40];
	int ID_num;
};

bool GreaterSort(student a, student b);
ostream &operator<<(ostream &os, student a);
void Input(const char*fileDat);
void Inquire(const char*fileDat);
int Change(const char*fileDat);
void Modify(const char*fileDat);
void Search(const char*fileDat);
void Delete(const char*fileDat);
void Add(const char*fileDat);
void Modify(const char*fileDat);
void Stusort(const char*fileDat);
bool Search(const char*fileDat, int num);
int endMark(student stu);

#endif
