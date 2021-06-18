#pragma once
#ifndef ROBOT_H
#define ROBOT_H

// Function declaration
int move(char *world);

int NewArray(char* world, int* Array);
int Algorithm(int* Array, char* world);
int up(int* Array, char* world, int TargetPosition, int z);
int down(int* Array, char* world, int TargetPosition, int z);
int forward(int* Array, char* world, int TargetPosition, int z);
int backward(int* Array, char* world, int TargetPosition, int z);

#endif // ROBOT_H
