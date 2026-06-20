public abstract class Animal {
    private String  tur;
    private int age;
    private String name;
    public Animal(int age,String name,String tur){
        this.age=age;
        this.name=name;
        this.tur=tur;
    }
    abstract void makesound();

    public String getTur() {
        return tur;
    }

    public void setTur(String tur) {
        this.tur = tur;
    }

    public int getAge() {
        return age;
    }

    public void setAge(int age) {
        this.age = age;
    }

    public String getName() {
        return name;
    }

    public void setName(String name) {
        this.name = name;
    }
}
