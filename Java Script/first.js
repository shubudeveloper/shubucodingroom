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
