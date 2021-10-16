fn is_prime(n: u32) -> bool {
    for i in 2..(n / 2) {
        if n % i == 0 {
            return false;
        }
    }
    return true;
}
fn generate_prime_numbers(num1: u32, num2: u32) {
    for i in num1..num2 {
        if is_prime(i) {
            println!("{}", i);
        }
    }
}
fn main() {
    let mut n = String::new();
    let stdin = std::io::stdin();
    stdin.read_line(&mut n).expect("Cannot read from stdin");
    let n: u32 = n
        .trim()
        .parse()
        .expect("Please enter an 32 bit unsigned integer next time");
    generate_prime_numbers(1, n);
}
