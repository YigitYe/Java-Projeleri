package com.myexamples_myobp.ders5.Ders5;

import org.springframework.beans.factory.annotation.Autowired;
import org.springframework.web.bind.annotation.RequestMapping;
import org.springframework.web.bind.annotation.RestController;

@RestController
@RequestMapping("/api")
public class SecondController {

    @Autowired
    private MyComponent myComponent;
}
