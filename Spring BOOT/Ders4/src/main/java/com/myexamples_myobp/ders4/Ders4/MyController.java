package com.myexamples_myobp.ders4.Ders4;

import org.springframework.beans.factory.annotation.Autowired;
import org.springframework.context.annotation.Lazy;
import org.springframework.web.bind.annotation.*;

@RestController
@RequestMapping("/api")
public class MyController {

    @Autowired
   private FirstClass f1;

    @GetMapping("first")
    public String GetFirstClassName(){
        return f1.firstclass();
    }

    @GetMapping("second")
    public String GetSecondClassName(){
        return f1.firstclass();
    }







    /*@PostMapping("user")
    public User Saveuser(@RequestBody User user){
        System.out.println("kopy");
        return user;


    }
*/


    /* private MyComponent myComponent;

    public MyController(@Lazy MyComponent myComponent) {
        this.myComponent = myComponent;
    }
    @GetMapping("/name")
    public String GetComponentName(){
        return myComponent.getName();
    }

     */

}


