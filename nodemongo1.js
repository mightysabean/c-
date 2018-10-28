mongo=new MongoClient(new Server("localhost", 27017));
mongo.open(function(err, MongoClient){
var db=MongoClient.db("myDB1")


});
