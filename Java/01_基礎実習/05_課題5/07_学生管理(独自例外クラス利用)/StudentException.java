package jkadai05;

public class StudentException extends Exception { // (5)①

	public StudentException(String message) { // (5)②
		super(message);
	}
}
