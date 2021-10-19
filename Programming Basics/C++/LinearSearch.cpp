// Java program for linear search

import java.io.*;

class GFG
{

	public static void search(int arr[], int search_Element)
	{
		int left = 0;
		int length = arr.length;
		int right = length - 1;
		int position = -1;

		// run loop from 0 to right
		for (left = 0; left <= right;)
		{
			
			// if search_element is found with left variable
			if (arr[left] == search_Element)
			{
				position = left;
				System.out.println(
					"Element found in Array at "
					+ (position + 1) + " Position with "
					+ (left + 1) + " Attempt");
				break;
			}
		
			// if search_element is found with right variable
			if (arr[right] == search_Element)
			{
				position = right;
				System.out.println(
					"Element found in Array at "
					+ (position + 1) + " Position with "
					+ (length - right) + " Attempt");
				break;
			}
			
			left++;
			right--;
		}

		// if element not found
		if (position == -1)
			System.out.println("Not found in Array with "
							+ left + " Attempt");
	}

	
	// Driver code
	public static void main(String[] args)
	{
		int arr[] = { 1, 2, 3, 4, 5 };
		int search_element = 5;
	
		// Function call
		search(arr,search_element);
	}
}
