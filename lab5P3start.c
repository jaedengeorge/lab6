/* Lab 5 P3: starter code to complete*/
#include <stdio.h>
#include <string.h>

int main() {
  printf("Github!");
  char input[256];
  int letterCount[26] = {
      0};  // Array to store the count of each letter initialized to zeros

  printf("Enter text strings (press Enter on an empty line to exit):\n");

  while (1) {
    fgets(input, sizeof(input),
          stdin);  // get the input from the user via keyboard

    // Check for an empty line to exit the loop
    if (strlen(input) == 1 && input[0] == '\n') {
      break;
    }
    // Your Code should be implemented here
    // Iterate through the characters in the input
    // Check if the character is a letter (A-Z or a-z)
    // Increment the corresponding count in the array
    for (int i = 0; i < strlen(input); i++) {
      if (input[i] >= 'A' && input[i] <= 'Z') {
        int letterInQuestion = input[i] - 65;
        letterCount[letterInQuestion] += 1;
      }
    }
    for (int y = 0; y < strlen(input); y++) {
      if (input[y] >= 'a' && input[y] <= 'z') {
        int letterInQuestion = input[y] - 97;
        letterCount[letterInQuestion] += 1;
      }
    }
  }
  // More of your code here to
  // Display the letter counts
  for (int z = 0; z < 26; z++) {
    // printf("%c : %d\n", input[z], letterCount[z]);
    printf("%c : %d\n", z + 65, letterCount[z]);
  }
  return 0;
}