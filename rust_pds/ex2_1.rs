// Rust dont have classes but the structs are much more powerfull
struct Circle{
  radius:f32
}
impl Circle {
  // Rust cannot have optional arguments 
  fn new(radius:f32)->Circle{
    Circle {
      radius
    }
  }
  fn calc_area(&self)->f32{
    std::f32::consts::PI * self.radius * self.radius
  }
  fn calc_circumference(&self)->f32{
    std::f32::consts::PI * 2.0 * self.radius
  }
}
fn main(){
  println!("Radius: ");
  let mut buf = String::new();
  std::io::stdin().read_line(&mut buf).expect("Cannot read from stdin");
  let a:Circle = Circle::new(buf.trim().parse().expect("Invalid number input"));
  println!("Area : {}", a.calc_area());
  println!("Circumference : {}", a.calc_circumference());
}