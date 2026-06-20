package com.myexamples_myobp.ders4.Ders4;

import org.springframework.context.annotation.Lazy;
import org.springframework.stereotype.Component;

@Component
@Lazy
public class MyComponent {
    public MyComponent() {
        System.out.println(" My component initliaatilized");
    }
    public String getName(){
        return "My component";


    }
}
