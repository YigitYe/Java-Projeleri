package com.myexamples_myobp.ders2.Ders2;

import org.springframework.stereotype.Component;

@Component("EXCEL")
public class ExcelFileReader implements Reader{
    @Override
    public String readFile() {
        return "Excel File";
    }
}
