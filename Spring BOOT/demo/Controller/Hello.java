package com.myexamples_myobp.demo.Controller;

import com.myexamples_myobp.demo.model.User;
import org.springframework.web.bind.annotation.*;

@RestController
@RequestMapping(path="/opi")
public class Hello {


    /* @GetMapping(path="/hello")
    public String hello(){
        return "Hello World";
    }*/

   /* @GetMapping(path="/message/{message}")
public String GetMyMessage(@PathVariable String message ){
       return"My Message: "+message;
}
    @GetMapping(path="/message2")
    public String Message( @RequestParam String message ){
        return"My Message: "+message;
    }*/
   /*   @PostMapping("/users")
public User SaveUser(@RequestBody User user){
        System.out.println("Sistem Çalıştı");
        user.setUsername("AYNEN BRO");
    return user;
}*/

/*@GetMapping("/header")
public  String getHeader(@RequestHeader("MyHeader") String header){
        return "your header is: "+header;

}*/




}
