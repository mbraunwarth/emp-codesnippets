package main;

import animals.Dog;

public class Main {
	public static void main(String[] args) {
		Dog dog = new Dog();
		dog.setName("Bob");
		dog.setAge(6);
		dog.bark();
	}
}
