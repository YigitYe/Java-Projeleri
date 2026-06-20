package com.example.demo;

import org.springframework.stereotype.Controller;
import org.springframework.web.bind.annotation.GetMapping;
import org.springframework.web.bind.annotation.PostMapping;
import org.springframework.web.bind.annotation.RequestBody;
import org.springframework.web.bind.annotation.RequestMapping;

@Controller
@RequestMapping("/api")
public class MyController {

   @PostMapping("users")
    public  User SaveUser(@RequestBody User user){
       System.out.println("user saved");
       return user;
    }
    @GetMapping("first")
    public String First(){
       return "first";
    }
}
