package Recursion;

import java.util.Scanner;

public class CheckSorted {
	public static boolean checksorted(int input[]) {
		if(input.length<=1) {
			return true;
		}
		int smallInput[]= new int[input.length - 1];
		for(int i = 1; i<input.length; i++) {
			smallInput[i-1]= input[i];
		}
		boolean smallAns=checksorted(smallInput);
		if(!smallAns) {
			return false;
		}
		if(input[0]<input[1]) {
			return true;
		}
		else {
			return false;
		}
	}
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int n = sc.nextInt();
		int arr[]=new int[n];
		for(int i = 0; i<n; i++) {
			arr[i]=sc.nextInt();
		}
		System.out.println(checksorted(arr));
	}

}
