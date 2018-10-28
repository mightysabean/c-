const myURL1=new URL('https://abc:xyz@example.com/abc/xyz');
//console.log(myURL1.origin);
console.log(JSON.stringify(myURL1));


const myURL2=new URL('https://abc:xyz@example.com');
//console.log(myURL2.username);

const myURL3=new URL('https://example.com/abc/xyz');
//console.log(myURL3.href);

const myURL4=new URL('https://abc:xyz@example.com/abc#seyi');
//console.log(myURL4.hash);

const myURL5=new URL('https://www.example.com:60');
//console.log(myURL5.hostname);

const myURL6=new URL('https://www.example.com:60');
//console.log(myURL6.port);

const myURL7=new URL('https://www.example.com/papa?ibadan');
//console.log(myURL7.search);
// would love to build something with myURL7.search where a user searches for data and the url changes automatically so you can obtain what was searched for from the url, you post what was 
//entered to the box and the data is constructed with the url and you search a database based on what was entered or you just collect the entered data directly from the search box