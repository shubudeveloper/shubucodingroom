/* printing message */

console.log("Shubham Kumar, pursuing B.Tech in Computer Science from B.P. Mandal College of Engineering, Madhepura");

message = "Hello Everyone";
console.log(message);

firstLine = "I am learning JavaScript.";
console.log(firstLine);

/* printing values */

{
    let a = 10;
    console.log(a);
}

{
    let b = 20;
    console.log(b);
}

/* Data Types in JS 

   1. Number
   2. String
   3. Boolean
   4. Undefined
   5. Null
   6. Biglnt
   7. Symbol

*/

const student = {
    fullName : "Shubham Kumar",  /* string type */

    age : 24,   /* number type */

    cgpa : 7.57,
    
    isPass : true,  /* boolean type */
}

console.log(student.fullName);
console.log(student.age);
console.log(student.cgpa);
console.log(student.isPass);


const product = {
    title : "Ball Pen",
    rating : 5,
    offer : 5,
    price : 270,
}

console.log(product.title);
console.log(product.rating);
console.log(product.offer);
console.log(product.price);


const profile = {
    username : "shubhamkumar",
    isFollow: true,
    followers : 4,
    following : 3,
};

console.log(profile.username);
console.log(profile.isFollow);
console.log(profile.followers);
console.log(profile.following);

console.log(typeof profile["username"]);
console.log(typeof profile["isFollow"]);
console.log(typeof profile["followers"]);
console.log(typeof profile["following"]);


//Arithmetic Operators

let a = 5;
let b = 3;

console.log("a =", a, "& b = ", b);
console.log("a + b = ", a + b);
console.log("a - b = ", a - b);
console.log("a * b = ", a * b);
console.log("a / b = ", a / b);
console.log("a % b = ", a % b);
console.log("a ** b = ", a ** b);



/* Unary operators

   1. Increment Operator  
      example:- a++ or a+1

   2. Decrement Operator
      example:- a-- or a-1
*/

let c = 5;
let d = 3;
console.log("c =", c, "& d = ", d);

c++; // 6
d++; // 4
console.log("c =", c, "& d = ", d);

let e = 5;
let f = 3
e--; // 4
f--; // 2

console.log("e =", e, "& f = ", f);



/* Assignment Operators :- it is used to assign values.
   
   =    +=    -=    *=    %=    **=
*/

let x = 4;
let y = 6;

x += 2; // 6
y += 1; // 7
console.log("x = ", x, "& y = ", y);


let x1 = 4;
let y1 = 6;

x1 -= 2; // 2
y1 -= 1; // 5
console.log("x = ", x1, "& y = ", y1)
;

let x3 = 4;
let y3 = 6;

x3 *= 2; // 8
y3 *= 1; // 6
console.log("x = ", x3, "& y = ", y3);


let x4 = 4;  
let y4 = 6;

x4 **= 2; // 16
y4 **= 1; // 6
console.log("x = ", x4, "& y = ", y4);


let x5 = 4;
let y5 = 6;

x5 /= 2; // 2
y5 /= 1; // 6
console.log("x = ", x5, "& y = ", y5);


let x6 = 4;
let y6 = 6;

x6 %= 2; // 0
y6 %= 1; // 0
console.log("x = ", x6, "& y = ", y6);


/* Comparision Operators

   1. == (Equal to)
   2. === (Equal to & type)
   3. != (Not equal to)
   4. !== (Not equal to & type)
   5. > (Greater than)
   6. >= (Greater than or equal to)
   7. < (Less than)
   8. <= (Less than or equal to)
*/

let s = 5;
let h = 2;
console.log("5 == 2", s == h); // false
console.log("5 != 2", s != h); // true
console.log("5 === 2", s === h); // false
console.log("5 !== 2", s !== h); // true
console.log("5 > 2", s > h); // true
console.log("5 < 2", s < h); // false
console.log("5 >= 2", s >= h); // true
console.log("5 <= 2", s <= h); // false


let s1 = 5; // number
let h1 = "2"; // string
console.log("s1 == h1 ", s1 == h1); // false


/* Logical Operators

   1. && (Logical AND)
   2. || (Logical OR)
   3. ! (LOgical NOT)
*/

let r = 6;
let t = 4;

let cond1 = r > t;
let cond2 = r === 6;
console.log("cond1 && cond2 =", cond1 && cond2); // false
console.log("cond1 || cond2 =", cond1 || cond2); // true
console.log("!(cond1 && cond2) =", !(cond1 && cond2)); // flase


/* Conditional Statements */

/* if Statement */

let age = 5;

if(age >= 18){
    console.log("Eligible for voting");
}

if(age < 18){
    console.log("Not eligible for voting");
}


let mode = "dark";
let color;

if(mode === "dark"){
    color = "black";
}

if(mode === "light"){
    color = "white";
}
console.log(color);


/* if-else Statement */

let marks = 55;

if(marks > 60){
    console.log("FIRST DIVISION")
}
else{
    console.log("SECOND DIVISION")
}


let personage = 55;

if(personage >= 18){
    console.log("YOU CAN GIVE VOTE.")
}
else{
    console.log("YOU CANNOT GIVE VOTE.")
}

let num = 8;

if(num%2 === 0){
    console.log("EVEN");
}
else{
    console.log("ODD");
}


/* else-if Statements */

let mark = 60;

if(mark >= 60){
    console.log("FIRST DIVISION")
}
else if(mark < 60 && mark >= 30){
    console.log("SECOND DIVISION")
}
else{
    console.log("FAIL")
}


let screenmode = "dark";
let color1;

if(screenmode === "dark"){
    color1 = "black";
}
else if(screenmode === "pink"){
    color1 = "pink";
}
else if(screenmode === "blue"){
    color1 = "blue";
}
else{
    color1 = "white";
}

console.log(color1); // black



/* Ternary Opeerators
   
   ?      :

   condition ? true output : false output
*/


let age2 = 25;

let result = age2 >= 18 ? "adult" : "not adult";  // another way to print [age2 >= 18 ? console.log(result) : console.log(result);]
console.log(result);


/* Switch Statements */

let fruit = 3;
let fruitName;
switch (fruit){
    case 1 : 
        fruitName = "Oranges";
        break;

    case 2:
        fruitName = "Mangoes";
        break;

    case 3:
        fruitName = "Papayas";
        break;

    default:
        fruitName = "Invalid";
}
console.log(fruitName);


let day = 3;
let dayName;
switch (day){
    case 1:
        dayName = "Sunday";
        break;

    case 2: 
        dayName = "Monday";
        break;

    case 3:
        dayName = "Tuesday";
        break;
        
    case 4:
        dayName = "Wednesday";
        break;


    case 5:
        dayName = "Thursday";
        break;

    case 6:
        dayName = "Friday";
        break;
            
    case 7:
        dayName = "Saturday";
        break;
                
    default:
        dayName = "Invalid";
}
console.log(dayName);


/* Practice */

/* 1. Write a JS program to ask user to enter a number and check whether a number is multiple of 5 or not */

let number = prompt("Enter the number");

if(number%5 === 0){
    console.log("Number is multiple of 5");
}
else{
    console.log("Number is not a multiple of 5");
}


/* 2. Write a JS code which can give grades to students according to their scores */

let score = prompt("Enter the marks of a student:");

if(score >= 90 && score <= 100){
    console.log("Grade A");
}
else if(score >= 70 && score <= 89){
    console.log("Grade B");
}
else if(score >= 60 && score <= 69){
    console.log("Grade C");
}
else if(score >= 50 && score <= 59){
    console.log("Grade D");
}
else{
    console.log("Grade F");
}