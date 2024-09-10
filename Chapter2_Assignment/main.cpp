#include<iostream>
#include"input.h"
using namespace std;

//Function Prototypes:
void QuadraticExpression();
void PseudoRandom();
void RationalNumber();

int main()
{
	do
	{
		system("cls");
		cout << "\n\tCMPR 131 Chapter 2 - ADT Assignments by - Giovanni, Oscar, Brissa (9/9/2024)";
		cout << "\n\t" << string(100, 205);
		cout << "\n\t\t1> Quadratic Expression";
		cout << "\n\t\t2> Pseudorandom";
		cout << "\n\t\t3> Rational Number";
		cout << "\n\t" << string(100, 196);
		cout << "\n\t\tx. Exit";
		cout << "\n\t" << string(100, 205);

		switch (toupper(inputChar("\n\t\tOption: ")))
		{
		case 'X':
			return EXIT_SUCCESS;
			break;
		case '1':
			QuadraticExpression();
			break;

		case '2':
			PseudoRandom();
			break;

		case '3':
			RationalNumber();
			break;

		default:
			cout << "\n\tInvalid option select (1,2,3,X)";
			cout << "\n\n";
			system("pause");
			break;
		}
	} while (true);
}


void QuadraticExpression()
{
	do
	{
		system("cls");
		cout << "\n\n\t1> Quadratic Menu";
		cout << "\n\t" << string(100, 205);
		cout << "\n\t\tD. Display the expression";
		cout << "\n\t\tA. Set coefficient (a)";
		cout << "\n\t\tB. Set coefficient (b)";
		cout << "\n\t\tC. Set coefficient (c)";
		cout << "\n\t\tE. Get evaluation (x)";
		cout << "\n\t\tN. Get the number of real roots";
		cout << "\n\t\tR. Get real root(s)";
		cout << "\n\t" << string(100, 196);
		cout << "\n\t\t0. Return";
		cout << "\n\t" << string(100, 205);

		switch (toupper(inputChar("\n\t\tOption: ")))
		{
		case '0':
			return;
			break;
		case 'D':
			break;

		case 'A':
			//Code here:

			break;

		case 'B':
			//Code here:
			break;

		case 'C':
			//Code here:

			break;

		case 'E':
			//Code here:

			break;

		case 'N':
			//Code here:

			break;

		case 'R':
			//Code here:

			break;

		default:
			cout << "\n\tInvalid option select (A,B,C,D,E,N,R,0)";
			cout << "\n\n";
			system("pause");
			break;
		}


	} while (true);
}

void PseudoRandom()
{
	do
	{
		system("cls");
		cout << "\n\n\t2> Pseudorandom Menu";
		cout << "\n\t" << string(100, 205);
		cout << "\n\t\tA. Get seed";
		cout << "\n\t\tB. Set seed";
		cout << "\n\t\tC. Get multiplier";
		cout << "\n\t\tD. Set multiplier";
		cout << "\n\t\tE. Get modulus";
		cout << "\n\t\tF. Set modulus";
		cout << "\n\t\tG. Get increment";
		cout << "\n\t\tH. Set increment";
		cout << "\n\t\tI. Get next number";
		cout << "\n\t\tJ. Get indirect next number";
		cout << "\n\t\tK. run experiment with different values (multiplier, increment, and modulus)";
		cout << "\n\t" << string(100, 196);
		cout << "\n\t\t0. Return";
		cout << "\n\t" << string(100, 205);

		switch (toupper(inputChar("\n\t\tOption: ")))
		{
		case '0':
			return;
			break;
		case 'A':
			//Code here:

			break;

		case 'B':
			//Code here

			break;

		case 'C':
			//Code here

			break;

		case 'D':
			//Code here

			break;

		case 'E':
			//Code here

			break;

		case 'F':
			//Code here

			break;

		case 'G':
			//Code here

			break;

		case 'H':
			//Code here

			break;

		case 'I':
			//Code here

			break;

		case 'J':
			//Code here

			break;

		case 'K':
			//Code here

			break;

		default:
			cout << "\n\tInvalid option select (A,B,C,D,E,F,G,H,I,J,K,0) ";
			cout << "\n\n";
			system("pause");
			break;
		}


	} while (true);
}

void RationalNumber()
{
	do
	{
		system("cls");
		cout << "\n\t3> Rational Number Menu";
		cout << "\n\t" << string(100, 205);
		cout << "\n\t\tA. Enter values of rational number R1";
		cout << "\n\t\tB. Display R1";
		cout << "\n\t\tC. Enter values of rational number R2";
		cout << "\n\t\tD. Display R2";
		cout << "\n\t\tE. Multiplication of 2 rational numbers (R1 * R2)";
		cout << "\n\t\tF. Division of 2 rational numbers (R1 / R2)";
		cout << "\n\t\tG. Addition of 2 rational numbers (R1 + R2)";
		cout << "\n\t\tH. Subtraction of 2 rational numbers (R1 - R2)";
		cout << "\n\t\tI. (R1 == R2)";
		cout << "\n\t\tJ. (R1 < R2)";
		cout << "\n\t" << string(100, 196);
		cout << "\n\t\t0. Return";
		cout << "\n\t" << string(100, 205);

		switch (toupper(inputChar("\n\t\tOption: ")))
		{
		case '0':
			return;
			break;

		case 'A':

			break;

		case 'B':

			break;

		case 'C':

			break;

		case 'D':

			break;

		case 'E':

			break;

		case 'F':

			break;

		case 'G':

			break;

		case 'H':

			break;

		case 'I':

			break;

		case 'J':

			break;

		default:
			cout << "\n\tInvalid option select (A,B,C,D,E,F,G,H,I,J,0)";
			cout << "\n\n";
			system("pause");
			break;
		}

	} while (true);
}