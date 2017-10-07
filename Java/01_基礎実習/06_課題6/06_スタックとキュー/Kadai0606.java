package jkadai06;

import java.util.LinkedList;
import java.util.Stack;

public class Kadai0606 {
	public static void main(String[] args) {
		Stack<String> stack = new Stack<>(); // スタック
		LinkedList<String> queue = new LinkedList<>(); // キュー

		stack.push("a"); // push(a)
		stack.push("b"); // push(b)
		queue.add(stack.pop()); // enq(pop())
		queue.add("c"); // enq(c)
		stack.push("d"); // push(d)
		stack.push(queue.remove()); // push(deq())
		System.out.println("x = " + stack.pop()); // x←pop()
	}
}

/*
【実行結果】
x = b
*/