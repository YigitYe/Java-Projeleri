package com.myexamples_myobp.ders5.Ders5;

import org.springframework.beans.factory.annotation.Configurable;
import org.springframework.beans.factory.config.ConfigurableBeanFactory;
import org.springframework.context.annotation.Scope;
import org.springframework.stereotype.Component;

import java.time.LocalDateTime;

@Scope(ConfigurableBeanFactory.SCOPE_PROTOTYPE)
@Component
public class MyComponent {
    public MyComponent(){
        System.out.println("My component created at"+ LocalDateTime.now());

    }
}
