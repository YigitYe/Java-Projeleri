public class islemler implements Runnable{
    String name;
    public islemler(String name){
      this.name=name;

    }
    @Override
    public void run() {
       try{
       for(int i=5;i>0;i--) {
           System.out.println(this.name+" "+i);
           Thread.sleep(1000);
       }
       }
       catch (Exception e){
           System.out.println(this.name+" bir hata");
       }
        System.out.println("islem finish");
    }

}
