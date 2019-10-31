 public class Question1 extends Parent {
	 public void foo(int num) {
		 System.out.println("q1 int");
	 }
	 public void foo(double num) {
		 System.out.println("q1 double");
	 }
	 public static void main(String [] args) {
		 Question1 q1 = new Question1();
		 q1.foo(4);
		 q1.foo(4.4);
		 Parent p = new Question1();
		 p.foo(3);
		 p.foo(3.3);
	 }
 }
 class Parent {
	 public void foo(int num) {
		 System.out.println("parent int");
	 }
	 public void foo(double num) {
		 System.out.println("parent double");
	 }
}