//SET 3.P3
class Vehicle{
    double calculateRent(int days){
        return days*1000;
    }
}
class Car extends Vehicle{
    double calculateRent(int days){
        return  super.calculateRent(days)+500;
    }
}

class LuxuryCar extends Car{
    @Override 
    double calculateRent(int days){
        return super.calculateRent(days)+2000;
    }
}

public class Overriding {
    public static void main(String[] args) {
         Vehicle[] vehicles = {
            new Vehicle(),
            new Car(),
            new LuxuryCar()
         };

        for (Vehicle v : vehicles) {
            System.out.println("Rent: " + v.calculateRent(3));
        }
    }
    }
    
