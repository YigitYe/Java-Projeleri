package com.myexamples_myobp.ders2.Ders2;

import org.springframework.beans.factory.annotation.Autowired;
import org.springframework.beans.factory.annotation.Qualifier;
import org.springframework.web.bind.annotation.GetMapping;
import org.springframework.web.bind.annotation.RequestMapping;
import org.springframework.web.bind.annotation.RestController;

@RestController
@RequestMapping("/api")
public class MyController {
   @Autowired
    @Qualifier("EXCEL")
    private Reader reader;

    @GetMapping("/read")
    public String Readfile(){
        return this.reader.readFile() ;
    }

}
