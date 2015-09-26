// https://leetcode.com/problems/add-digits/

import java.util.Scanner;

class Solution {
    public int addDigits(int num) {
		int sum = 0;
		int remainder = 0;
		if( num >= 0){
			while( num != 0  ){ // while loop condition will also cover 'number = 0'  case

				remainder = num % 10;
				sum += remainder;
				num = num / 10;
				
			}
			if(sum > 9)
			    sum = addDigits(sum);
		}
		
		return sum;
	}	
    
}

class AddDigits{

	public static void main(String[] args){

		int number;
		int sum;
		Solution sol = new Solution();
		
		System.out.println("Enter a number: ");
		Scanner scan = new Scanner(System.in);
		number = scan.nextInt();

		if( number >= 0){
			sum = sol.addDigits(number);
			System.out.format("Digit sum of %d is: %d",number,sum);
		}


		else
			System.out.format("The number must be non negative");
	}	

}