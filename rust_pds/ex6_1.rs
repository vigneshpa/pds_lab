struct Node {
    data: i32,
    next: Option<Box<Node>>,
}

struct List {
    head: Option<Box<Node>>,
}
impl List {
    fn new() -> List {
        List { head: None }
    }
    fn display(&self) {
        let mut temp = self.head.as_ref();
        while match temp {
            Some(val) => {
                print!(" {}", val.as_ref().data);
                temp = val.as_ref().next.as_ref();
                true
            }
            None => false,
        } {}
        println!("");
    }
    fn create(&mut self, arr: &Vec<i32>) {
        let mut prev: Option<&mut Box<Node>> = None;
        for i in arr {
            let new_node = Box::new(Node {
                data: *i,
                next: None,
            });
            match prev {
                Some(_) => {
                    prev.as_mut().unwrap().next = Some(new_node);
                    prev = prev.unwrap().next.as_mut();
                }
                None => {
                    self.head = Some(new_node);
                    prev = self.head.as_mut();
                }
            };
        }
    }
}
fn main() {
    let mut a = List::new();
    let v = vec![1, 2, 3, 4];
    a.create(&v);
    a.display();
}
