int main() {
  int x = 10;
  int *ptr = &x; 
  *ptr = 20; 
  printf("%d\n", x); // Output: 20

  int y = 30;
  int *ptr2 = &y; // Declare a new pointer
  *ptr2 = 40; // Use the new pointer for y
  printf("%d\n", x); // Output: 20
  printf("%d\n", y); //Output: 40
  return 0;
}