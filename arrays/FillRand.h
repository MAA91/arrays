//FillRand.h
#pragma once

#include"Consts.h"

void FillRand(int A[], int size, int min_zn, int max_zn);
void FillRand(int A[ROW][COL], int ROW, int COL, int min_zn, int max_zn);

void FillRand(double A[], int size, double min_zn, double max_zn);
void FillRand(double A[ROW][COL], int ROW, int COL, double min_zn, double max_zn);

void FillRand(char A[], int size);
void FillRand(char A[ROW][COL], int ROW, int COL);