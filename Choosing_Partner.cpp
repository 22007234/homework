
#include <iostream>
using namespace std;

int main() {
cout << "Choose a Partner" << endl;
cout << "Select gender (1.Male, 2.Female): "<< endl;
int Gender;
cin >> Gender;

cout << "Select body type (1.Thick, 2.Fit, 3.Thin): "<< endl;
int Body;
cin >> Body;

cout << "Select height (1.Tall, 2.Short): "<< endl;
int Height;
cin >> Height;

if (Gender == 1) {
if (Body == 1 && Height == 1) {
cout << "You're looking for a tall and thick gent!" << endl;}
else if (Body == 1 && Height == 2) {
cout << "You're looking for a short and thick gent!" << endl;}
else if (Body == 2 && Height == 1) {
cout << "You're looking for a tall and fit gent!" << endl;}
 else if (Body == 2 && Height == 2) {
cout << "You're looking for a short and fit gent!" << endl;}
else if (Body == 3 && Height == 1) {
cout << "You're looking for a tall and thin gent!" << endl;}
else if (Body == 3 && Height == 2) {
cout << "You're looking for a short and thin gent!" << endl;}
else {
cout << "There is no one for you." << endl;}
}

else if (Gender == 2) {
if (Body == 1 && Height == 1) {
cout << "You're looking for a tall and thick hun!" << endl;}
else if (Body == 1 && Height == 2) {
cout << "You're looking for a short and thick hun!" << endl;}
 else if (Body == 2 && Height == 1) {
cout << "You're looking for a tall and fit hun!" << endl;}
 else if (Body == 2 && Height == 2) {
cout << "You're looking for a short and fit hun!" << endl;}
else if (Body == 3 && Height == 1) {
cout << "You're looking for a tall and thin hun!" << endl;}
 else if (Body == 3 && Height == 2) {
cout << "You're looking for a short and thin hun!" << endl;}
else {
cout << "There is no one for you." << endl;}
    }
 else {
cout << "choose between 1 or 2 only please." << endl;}


return 0;
}
