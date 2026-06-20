public class Lion extends Animal implements Damage {
    public Lion(int age,String name,String tur){
        super(age, name, tur);
    }

    @Override
    void makesound() {
        System.out.println("HIIRRRRRR");

        System.out.println(getAge()+": yaş "+getName()+" İsmi "+getTur()+"= Türü");
    }

    @Override
    public void hitDamage() {
        System.out.println("çok vuruyo");

    }
}

