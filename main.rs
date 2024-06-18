/*
 * Write a C program to input n numbers in an array,
 * calculate the sum of all prime numbers and sum of all even numbers
 * in the array and print the larger
 */

use std::io;

fn is_prime(n: u32) -> bool {
    if n <= 2 {
        return false;
    }

    for c in 2..n {
        if n % c == 0 {
            return false;
        }
    }

    return true;
}

fn main() {
    // test ??
    dbg!(is_prime(3));
    dbg!(is_prime(12));

    // get user input
    println!("Enter a positive integer:");
    let mut n = String::new();

    io::stdin()
        .read_line(&mut n)
        .expect("Failed to read line");

    // convert to int
    let n: u32 = match n.trim().parse() {
        Ok(num) => num,
        Err(_) => return,
    };

    // calculate sum of primes
    let mut sum_prime = 0;
    for i in 0..n {
        if is_prime(i) {
            sum_prime += 1;
        }
    }

    // calculate sum of odd numbers
    let mut sum_odd = 0;
    for i in 0..n {
        if i % 2 == 0 {
            sum_odd += 1;
        }
    }

    println!("There are {0} primes below {1}, and {2} odd numbers", sum_prime, n, sum_odd);
}
