#include "robot_GoodCodePreachers.h"

// IMPLEMET THIS FUNCTION
// ALLOWED RETURN VALUES:
// 1: North, 2: East, 3: South, 4: West, 5: Toggle watern/land mode
char pre = 'O';
int move(char* world)
{
	int Array[200];
	int robot;
	NewArray(world, Array);

	int a, b, c, d, n, e, w, s;
	for (int i = 0; i < 200; ++i) {
		if (world[i] == 'R') {
			robot = i;
		}
	}


	a = Array[robot - 21];//return 1;
	c = Array[robot + 1];//return 2;
	d = Array[robot - 1];//return 4;
	b = Array[robot + 21];//return 3;


	n = robot - 21;
	e = robot + 1;
	w = robot - 1;
	s = robot + 21;



	if (a == -1 && b == -1 && c == -1 && d != -1)
	{
		if ((world[w] == '~' && pre == 'O') || (world[w] == 'O' && pre == '~')) {
			if (pre == 'O') { pre = '~'; }
			else { pre = 'O'; }
			return 5;

		}
		else { return 4; }
	}
	else if (a == -1 && b == -1 && c != -1 && d == -1)
	{
		if ((world[e] == '~' && pre == 'O') || (world[e] == 'O' && pre == '~')) {
			if (pre == 'O') { pre = '~'; }
			else { pre = 'O'; }
			return 5;
		}

		else { return 2; }

	}
	else if (a == -1 && b != -1 && c == -1 && d == -1)
	{
		if ((world[s] == '~' && pre == 'O') || (world[s] == 'O' && pre == '~')) {
			if (pre == 'O') { pre = '~'; }
			else { pre = 'O'; }
			return 5;
		}
		else { return 3; }

	}
	else if (a != -1 && b == -1 && c == -1 && d == -1)
	{
		if ((world[n] == '~' && pre == 'O') || (world[n] == 'O' && pre == '~')) {
			if (pre == 'O') { pre = '~'; }
			else { pre = 'O'; }
			return 5;
		}
		else { return 1; }

	}



	else if (a == -1 && b == -1 && c != -1 && d != -1)
	{
		if (c <= d) {
			if ((world[e] == '~' && pre == 'O') || (world[e] == 'O' && pre == '~')) {
				if (a == 'O') { a = '~'; }
				else { pre = 'O'; }
				return 5;
			}
			else { return 2; }
		}
		else {
			if ((world[w] == '~' && pre == 'O') || (world[w] == 'O' && pre == '~')) {
				if (pre == 'O') { pre = '~'; }
				else { pre = 'O'; }
				return 5;
			}
			else { return 4; }

		}
	}


	else if (a != -1 && b != -1 && c == -1 && d == -1)
	{
		if (a <= b) {
			if ((world[n] == '~' && pre == 'O') || (world[n] == 'O' && pre == '~')) {
				if (pre == 'O') { pre = '~'; }
				else { pre = 'O'; }
				return 5;
			}
			else { return 1; }
		}
		else {
			if ((world[s] == '~' && pre == 'O') || (world[s] == 'O' && pre == '~')) {
				if (pre == 'O') { pre = '~'; }
				else { pre = 'O'; }
				return 5;
			}
			else { return 3; }
		}
	}



	else if (a == -1 && b != -1 && c == -1 && d != -1)
	{
		if (b <= d) {
			if ((world[s] == '~' && pre == 'O') || (world[s] == 'O' && pre == '~')) {
				if (pre == 'O') { pre = '~'; }
				else { pre = 'O'; }
				return 5;
			}
			else { return 3; }
		}
		else {
			if ((world[w] == '~' && pre == 'O') || (world[w] == 'O' && pre == '~')) {
				if (pre == 'O') { pre = '~'; }
				else { pre = 'O'; }
				return 5;
			}
			else { return 4; }
		}
	}
	else if (a != -1 && b == -1 && c != -1 && d == -1)
	{
		if (a <= c) {
			if ((world[n] == '~' && pre == 'O') || (world[n] == 'O' && pre == '~')) {
				if (pre == 'O') { pre = '~'; }
				else { pre = 'O'; }
				return 5;
			}
			else { return 1; }

		}
		else {
			if ((world[e] == '~' && pre == 'O') || (world[e] == 'O' && pre == '~')) {
				if (pre == 'O') { pre = '~'; }
				else { pre = 'O'; }
				return 5;
			}
			else { return 2; }

		}
	}
	else if (a != -1 && b == -1 && c == -1 && d != -1)
	{
		if (a <= d) {
			if ((world[n] == '~' && pre == 'O') || (world[n] == 'O' && pre == '~')) {
				if (pre == 'O') { pre = '~'; }
				else { pre = 'O'; }
				return 5;
			}
			else { return 1; }

		}
		else {
			if ((world[w] == '~' && pre == 'O') || (world[w] == 'O' && pre == '~')) {
				if (pre == 'O') { pre = '~'; }
				else { pre = 'O'; }
				return 5;
			}
			else { return 4; }

		}
	}
	else if (a == -1 && b != -1 && c != -1 && d == -1)
	{
		if (b <= c) {
			if ((world[s] == '~' && pre == 'O') || (world[s] == 'O' && pre == '~')) {
				if (pre == 'O') { pre = '~'; }
				else { pre = 'O'; }
				return 5;
			}
			else { return 3; }

		}
		else {
			if ((world[e] == '~' && pre == 'O') || (world[e] == 'O' && pre == '~')) {
				if (pre == 'O') { pre = '~'; }
				else { pre = 'O'; }
				return 5;
			}
			else { return 2; }

		}
	}









	else if (a == -1 && b != -1 && c != -1 && d != -1)
	{
		if (b <= c && b <= d) {
			if ((world[s] == '~' && pre == 'O') || (world[s] == 'O' && pre == '~')) {
				if (pre == 'O') { pre = '~'; }
				else { pre = 'O'; }
				return 5;
			}
			else { return 3; }

		}
		else if (c <= b && c <= d) {
			if ((world[e] == '~' && pre == 'O') || (world[e] == 'O' && pre == '~')) {
				if (pre == 'O') { pre = '~'; }
				else { pre = 'O'; }
				return 5;
			}
			else { return 2; }

		}
		else {
			if ((world[w] == '~' && pre == 'O') || (world[w] == 'O' && pre == '~')) {
				if (pre == 'O') { pre = '~'; }
				else { pre = 'O'; }
				return 5;
			}
			else { return 4; }

		}
	}
	else if (a != -1 && b == -1 && c != -1 && d != -1)
	{
		if (c <= d && c <= a) {
			if ((world[e] == '~' && pre == 'O') || (world[e] == 'O' && pre == '~')) {
				if (pre == 'O') { pre = '~'; }
				else { pre = 'O'; }
				return 5;
			}
			else { return 2; }

		}
		else if (d <= c && d <= a) {
			if ((world[w] == '~' && pre == 'O') || (world[w] == 'O' && pre == '~')) {
				if (pre == 'O') { pre = '~'; }
				else { pre = 'O'; }
				return 5;
			}
			else { return 4; }

		}
		else {
			if ((world[n] == '~' && pre == 'O') || (world[n] == 'O' && pre == '~')) {
				if (pre == 'O') { pre = '~'; }
				else { pre = 'O'; }
				return 5;
			}
			else { return 1; }

		}
	}
	else if (a != -1 && b != -1 && c == -1 && d != -1)
	{
		if (a <= b && a <= d) {
			if ((world[n] == '~' && pre == 'O') || (world[n] == 'O' && pre == '~')) {
				if (pre == 'O') { pre = '~'; }
				else { pre = 'O'; }
				return 5;
			}
			else { return 1; }

		}
		else if (b <= d && b <= a) {
			if ((world[s] == '~' && pre == 'O') || (world[s] == 'O' && pre == '~')) {
				if (pre == 'O') { pre = '~'; }
				else { pre = 'O'; }
				return 5;
			}
			else { return 3; }

		}
		else {
			if ((world[w] == '~' && pre == 'O') || (world[w] == 'O' && pre == '~')) {
				if (pre == 'O') { pre = '~'; }
				else { pre = 'O'; }
				return 5;
			}
			else { return 4; }

		}
	}
	else if (a != -1 && b != -1 && c != -1 && d == -1)
	{
		if (a <= b && a <= c) {
			if ((world[n] == '~' && pre == 'O') || (world[n] == 'O' && pre == '~')) {
				if (pre == 'O') { pre = '~'; }
				else { pre = 'O'; }
				return 5;
			}
			else { return 1; }

		}
		else if (b <= a && b <= c) {
			if ((world[s] == '~' && pre == 'O') || (world[s] == 'O' && pre == '~')) {
				if (pre == 'O') { pre = '~'; }
				else { pre = 'O'; }
				return 5;
			}
			else { return 3; }
		}
		else {
			if ((world[e] == '~' && pre == 'O') || (world[e] == 'O' && pre == '~')) {

				if (pre == 'O') { pre = '~'; }
				else { pre = 'O'; }
				return 5;
			}
			else { return 2; }

		}
	}

	else if (a != -1 && b != -1 && c != -1 && d != -1)
	{
		if (a <= b && a <= c && a <= d) {
			if ((world[n] == '~' && pre == 'O') || (world[n] == 'O' && pre == '~')) {
				if (pre == 'O') { pre = '~'; }
				else { pre = 'O'; }
				return 5;
			}
			else { return 1; }

		}
		else if (b <= a &&b <= c && b <= d) {
			if ((world[s] == '~' && pre == 'O') || (world[s] == 'O' && pre == '~')) {
				if (pre == 'O') { pre = '~'; }
				else { pre = 'O'; }
				return 5;
			}
			else { return 3; }

		}
		else if (c <= a &&c <= b && c <= d) {
			if ((world[e] == '~' && pre == 'O') || (world[e] == 'O' && pre == '~')) {
				if (pre == 'O') { pre = '~'; }
				else { pre = 'O'; }
				return 5;
			}
			else { return 2; }

		}
		else {
			if ((world[w] == '~' && pre == 'O') || (world[w] == 'O' && pre == '~')) {
				if (pre == 'O') { pre = '~'; }
				else { pre = 'O'; }
				return 5;
			}
			else { return 4; }

		}
	}

	else { return 0; }


}
int NewArray(char* world, int* Array)
{

	for (int i = 0; i<200; i++)
	{
		if (world[i] == '#')
		{
			Array[i] = -1;
		}
		else if (world[i] == 'T')
		{
			Array[i] = 1;
		}
		else if (world[i] == 'O')
		{
			Array[i] = 0;
		}
		else if (world[i] == 'R')
		{
			Array[i] = 0;
		}
		else { Array[i] = 0; }
	}

	Algorithm(Array, world);
}

int Algorithm(int* Array, char* world)
{
	int z = 1;

	int TargetPosition;

	for (int i = 0; i<200; i++)
	{
		if (Array[i] == 1)
		{
			TargetPosition = i;
		}
	}
	up(Array, world, TargetPosition, z);
	down(Array, world, TargetPosition, z);
	forward(Array, world, TargetPosition, z);
	backward(Array, world, TargetPosition, z);
}

int up(int* Array, char* world, int TargetPosition, int z)
{

	int counter, n;
	n = TargetPosition - 21;
	if (Array[n] != -1) {
		if (Array[n] == 0) {
			counter = z + 1;
			Array[n] = counter;
			up(Array, world, n, counter);
			forward(Array, world, n, counter);
			backward(Array, world, n, counter);
			down(Array, world, n, counter);

		}
	}
}
int down(int* Array, char* world, int TargetPosition, int z)
{

	int counter, n;
	n = TargetPosition + 21;
	if (Array[n] != -1) {
		if (Array[n] == 0) {
			counter = z + 1;

			Array[n] = counter;


			up(Array, world, n, counter);
			forward(Array, world, n, counter);
			backward(Array, world, n, counter);
			down(Array, world, n, counter);

		}
	}

}
int forward(int* Array, char* world, int TargetPosition, int z)
{
	int counter, n;
	n = TargetPosition + 1;
	if (Array[n] != -1) {
		if (Array[n] == 0) {
			counter = z + 1;

			Array[n] = counter;

			up(Array, world, n, counter);
			forward(Array, world, n, counter);
			backward(Array, world, n, counter);
			down(Array, world, n, counter);
		}
	}



}
int backward(int* Array, char* world, int TargetPosition, int z)
{

	int counter, n;
	n = TargetPosition - 1;

	if (Array[n] != -1) {
		if (Array[n] == 0) {
			counter = z + 1;

			Array[n] = counter;
			up(Array, world, n, counter);
			forward(Array, world, n, counter);
			backward(Array, world, n, counter);
			down(Array, world, n, counter);
		}
	}

}
