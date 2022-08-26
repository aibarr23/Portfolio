fn main() {
    println!("Hello, world!");

    // default integers =>> signed integer
    let x: i32 = 2;
    /*
    i8
    i16
    i32
    i64
    i128
    */
    
    // unsigned integers
    let x: u32 = 972;
    /*
    u8
    u16
    u32
    u64
    u128
    */

    // floating-points
    // f32 is known as single precission
    // f64 as double precission
    let floating_point: f32 = 10.9;//f64 is default type

    // boolean
    // use true or false
    // use 1 or 0
    let true_or_false: bool = true;

    // characters
    let letter: char = '8';

    // tuples
    let tup: (i32, bool, char) = (1, true, 's');
    println!("{}", tup.0);

    let mut tup1: (i8, bool, char) = (1, true, 'r');

    tup1 = (10, false, 'a');
    println!("{}", tup1.2);

    // arrays
    let mut arr: [i32; 5] = [1, 2, 3, 4, 5];
    arr[4] = 3;
    println!("{}", arr[4]);



}
