package com.myexamples_myobp.ders2.Ders2;

import org.springframework.context.annotation.Primary;
import org.springframework.stereotype.Component;
@Component
@Primary()
public class PdfFileReader implements Reader{

    @Override
    public String readFile() {

        return "PDf reader";
    }
}
