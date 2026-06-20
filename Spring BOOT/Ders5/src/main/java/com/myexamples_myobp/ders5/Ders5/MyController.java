package com.myexamples_myobp.ders5.Ders5;


import org.springframework.beans.factory.annotation.Autowired;
import org.springframework.boot.ApplicationContextFactory;
import org.springframework.boot.availability.ApplicationAvailability;
import org.springframework.context.ApplicationContext;
import org.springframework.web.bind.annotation.GetMapping;
import org.springframework.web.bind.annotation.RequestMapping;
import org.springframework.web.bind.annotation.RestController;

@RestController
@RequestMapping("/api")
public class MyController {

    @Autowired
    private ApplicationContext applicationContext;

    /*@GetMapping("/application-context")
     public void  example(){
        String[] beanDefinitionNames = applicationContext.getBeanDefinitionNames();
        for(String beanDefinitionName:beanDefinitionNames){
            System.out.println(beanDefinitionName);
        }
    }*/


}
