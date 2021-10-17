fn is_leap(year: u32) -> bool {
    if year % 4 == 0 {
        if year % 100 == 0 {
            if year % 400 == 0 {
                return true;
            } else {
                return false;
            }
        }
        return true;
    }
    return false;
}
fn main() {
    let mut year = String::new();
    let stdin = std::io::stdin();
    stdin
        .read_line(&mut year)
        .expect("Cannot read line from standard input stream");
    let year: u32 = year
        .trim()
        .parse()
        .expect("Please enter an 32 bit unsigned integer");
    if is_leap(year) {
        println!("Yes");
    } else {
        println!("No");
    }
}
