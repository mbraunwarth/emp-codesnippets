/* 
 * Source: https://stackoverflow.com/questions/41120129/java-stack-and-heap-memory-management
 * Author: https://stackoverflow.com/users/4804146/adit-a-pillai
 */
package memory;

public class MemoryClass {
	
	public static void main(String[] args) {
		int i = 0;
		MemoryClass memory = new MemoryClass();
		myMethod(memory);
	}
	
	private static void myMethod(Object obj) {
		int i = 1;
		String s = "Hello World!";
	}
	
}
