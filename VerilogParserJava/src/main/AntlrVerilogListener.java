package main;

import java.util.HashMap;
import java.util.Map;
import java.util.Map.Entry;


import antlr.Verilog2001BaseListener;
import antlr.Verilog2001Parser;

enum PrimitiveClass{
	FF,
	Const,
	LUT,
	IO,
	Other
}

public class AntlrVerilogListener extends Verilog2001BaseListener {
	Map<PrimitiveClass, Histogram <String> > sub_module_histogram;
//	Histogram<String, Integer> sub_module_histogram;

	AntlrVerilogListener(){
		sub_module_histogram = new HashMap<PrimitiveClass, Histogram<String>>();
		sub_module_histogram.put(PrimitiveClass.FF, new Histogram<String>());
		sub_module_histogram.put(PrimitiveClass.Const, new Histogram<String>());
		sub_module_histogram.put(PrimitiveClass.LUT, new Histogram<String>());
		sub_module_histogram.put(PrimitiveClass.IO, new Histogram<String>());
		sub_module_histogram.put(PrimitiveClass.Other, new Histogram<String>());
		
	}
	
    @Override
    public void enterModule_instantiation(Verilog2001Parser.Module_instantiationContext ctx) {
    	String primType = ctx.module_identifier().getText();
    	if (primType.contains("LUT")){
    		sub_module_histogram.get(PrimitiveClass.LUT).touchBin(primType);
    		return;
    	}
    	if (primType.contains("FF")){
    		sub_module_histogram.get(PrimitiveClass.FF).touchBin(primType);
    		return;
    	}
    	if (primType.contains("ONE") |  primType.contains("ZERO")){
    		sub_module_histogram.get(PrimitiveClass.Const).touchBin(primType);
    		return;
    	}
    	if (primType.contains("_O") | primType.contains("_I")){
    		sub_module_histogram.get(PrimitiveClass.IO).touchBin(primType);
    		return;
    	}
    	sub_module_histogram.get(PrimitiveClass.Other).touchBin(primType);
    	
    	
//    	for(int i = 0; i< ctx.getChildCount(); i++){
//    		
//    		
//    		System.out.println(ctx.module_identifier().getText());
//    	}
//    	System.out.println(ctx.getText());
    }
    
    void printResults(){
    	for(Entry<PrimitiveClass, Histogram<String>> entry : sub_module_histogram.entrySet()) {
    		System.out.println(entry.getKey() + ": " + entry.getValue());
    	}
    }
	
}