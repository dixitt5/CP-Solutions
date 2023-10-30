const express = require('express');
const bodyParser = require('body-parser');
const app = express();

const PORT = 3000;

app.use(bodyParser.json());
app.use(bodyParser.urlencoded({extended : true}));

let blogs=[];

app.get("/blogs",(req,res)=>{
    return res.status(200).json({
        "data" : blogs,
        "message": "Blogs fetched successfully!"
    });
});

app.post('/blogs', (req, res) => {
    blogs.push({
        "title" : req.body.Title,
         "content" : req.body.Content,
         "Id" : Math.floor(Math.random(1000) * 1000)
    });
    return res.status(501).json({
        message: 'blog created'
    })
});

app.get("/blog/:id",(req,res)=>{
    let blog = blogs.filter((index) => index.Id == req.params.id);
    return res.json({
        "data" : blog,
        "message" : "Blog fetched successfully!"
    })
});

app.delete("/blog/:id",(req,res)=>{
    let index = blogs.filter((index) => index.Id == req.params.id);
    blogs.splice(index,1);
    return res.json({
        "Blogs" : blogs,
        message:"Deleted Successfully!"
    })
});

app.listen(PORT,()=>{
    console.log("Server is up and running at port",PORT);
});