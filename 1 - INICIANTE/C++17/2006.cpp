#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main() {
 
int cha,t1,t2,t3,t4,t5,x; 
 // T = tentativas;

cin >> cha >> t1 >> t2 >> t3 >> t4 >> t5;

x = 0;

if (cha == 1) {
  if (t1 == 1) {
   x = 1;
  }
  else {
    x = 0;
  }
  if (t2 == 1) {
    x = x+1;
  }
  else {
    x = x;
  }
  if (t3 == 1) {
    x = x+1; 
  }
  else {
    x = x;
  }
  if (t4 == 1) {
    x = x+1; 
  }
  else {
    x = x;
  }
  if (t5 == 1) {
    x = x+1;
  }
  else {
    x = x;
  }
 }

if (cha == 2) {
  if (t1 == 2) {
   x = 1;
  }
  else {
    x = 0;
  }
  if (t2 == 2) {
    x = x+1;
  }
  else {
    x = x;
  }
  if (t3 == 2) {
    x = x+1; 
  }
  else {
    x = x;
  }
  if (t4 == 2) {
    x = x+1; 
  }
  else {
    x = x;
  }
  if (t5 == 2) {
    x = x+1;
  }
  else {
    x = x;
  }
 }

if (cha == 3) {
  if (t1 == 3) {
   x = 1;
  }
  else {
    x = 0;
  }
  if (t2 == 3) {
    x = x+1;
  }
  else {
    x = x;
  }
  if (t3 == 3) {
    x = x+1; 
  }
  else {
    x = x;
  }
  if (t4 == 3) {
    x = x+1; 
  }
  else {
    x = x;
  }
  if (t5 == 3) {
    x = x+1;
  }
  else {
    x = x;
  }
 }

if (cha == 4) {
  if (t1 == 4) {
   x = 1;
  }
  else {
    x = 0;
  }
  if (t2 == 4) {
    x = x+1;
  }
  else {
    x = x;
  }
  if (t3 == 4) {
    x = x+1; 
  }
  else {
    x = x;
  }
  if (t4 == 4) {
    x = x+1; 
  }
  else {
    x = x;
  }
  if (t5 == 4) {
    x = x+1;
  }
  else {
    x = x;
  }
}

cout << x <<"\n";

return 0;
}