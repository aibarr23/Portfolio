use std::io;

fn main() {
    let mut input = String::new();
    io::stdin().read_line(&mut input).expect("expected to read line");

    let int_input: i64 = input.trim().parse().unwrap();

    println!("{}", int_input+2);

    let x: f64 = 255.0; // 0 - 255
    let y: f64 = 10.0; // -128 - 127

    let z = x % y;
    println!("{}", z);
}
