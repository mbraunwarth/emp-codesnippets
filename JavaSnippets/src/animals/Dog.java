package animals;

public class Dog extends Animal {
	
	// Default Constructor
	public Dog() {
		name = "";
		age = 0;
	}
	
	// Constructor with parameters
	public Dog(int age, String name) {
		this.age = age;
		this.name = name;
	}
	
	public void bark() {
		System.out.println("Wuff");
	}
}
