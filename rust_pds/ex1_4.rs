fn factorial(n:u32)->u32{
  return if n==1 {
    1
  }else{
    factorial(n-1)*n
  }
}
fn main(){
  let  stdin = std::io::stdin();
  let mut a = String::new();
  stdin.read_line(&mut a).expect("Cannot read from standard input");
  let a = a.trim().parse().expect("Not a valid 32 bit unsigned integer");
  println!("Factorial of {} is {}", a, factorial(a));
}