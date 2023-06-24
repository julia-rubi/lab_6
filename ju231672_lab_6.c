// Julianna Diaz
// COP 3502
// Professor Torosdagli
// 23 June 2023

// Function to search  a number in between a high and low value
int search(int numbers[], int low, int high, int value) {

  // Variable to hold the middle of the array
  int middle; 
  // Finding the index number 
  middle = (low+high)/2;


  // Checking if lower value is higher than the high value. Returns -1
  if(low > high)
    return -1;

  // runs search if the value given is smaller than the middle index
  else if(value < numbers[middle]) 
    // continues search with middle of array decreased by 1 as the high value
    return search(numbers, low, middle-1, value);
  // runs if the value is greater than the middle index of the array
  else if(value > numbers[middle])
    // continues search with middle of array increased by 1 as the low value
    return search(numbers, middle+1, high, value);
  // Returns middle index of the array
  else
    return middle; 

}