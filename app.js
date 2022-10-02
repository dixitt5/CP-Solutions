const express=require("express")
const bodyParser=require("body-parser")
const { redirect } = require("statuses")

const todo=["TODOLIST"]
const works=["WORK"]

const app=express()
app.set('view engine', 'ejs')

app.use(bodyParser.urlencoded({extended:true}))
app.use(express.static("public"))

app.get("/",(req,res)=>{
    res.render("list",{theList:"TodoList",newItem:todo,theList1:"WORK",newItem1:works})
})


app.post("/",(req,res)=>{
    console.log(req.body.list)
    if(req.body.list==="TodoList")
    {
        todo.push(req.body.item)
        res.redirect("/")
    }
    else{
        works.push(req.body.item1)
        res.redirect("/")
    }
    
})

app.listen("3000",()=>{console.log("fuck it's running")})