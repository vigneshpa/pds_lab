fn str_length(s: &String)->usize{
  // Strings in rust are UTF-8 encoded (which can hold emoji and other specal characters)
  // Which does not have characters instead they have grapheme clusters
  // Each grapheme cluster may contain variable byte width
  // e.g. 'மி' has 4 bytes width

  // It hard to decode the grapheme clusters
  // So we are just returning the byte length of the string
  s.len()
}
fn main(){
  let stdin = std::io::stdin();
  let mut inp = String::new();
  stdin.read_line(&mut inp).expect("Cannot read from stdin");
  println!("Length of the string is {}", str_length(&inp));
}