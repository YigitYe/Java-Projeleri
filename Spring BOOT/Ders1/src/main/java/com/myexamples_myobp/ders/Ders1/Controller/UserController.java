package com.myexamples_myobp.ders.Ders1.Controller;

import com.myexamples_myobp.ders.Ders1.Service.Impl.UserServiceImpl;
import com.myexamples_myobp.ders.Ders1.Service.UserService;
import com.myexamples_myobp.ders.Ders1.dto.User;
import org.springframework.web.bind.annotation.GetMapping;
import org.springframework.web.bind.annotation.PathVariable;
import org.springframework.web.bind.annotation.RequestMapping;
import org.springframework.web.bind.annotation.RestController;

@RestController
@RequestMapping(path="/api")
public class UserController {

    private UserService userService=new UserServiceImpl();
 @GetMapping("/users/{UserId}")
    public User GetUserId(@PathVariable("UserId") Long UserId){


    
}
