class Droid {
    int batteryLevel;

    public Droid() {
        batteryLevel = 100;
    }

    public void activate() {
        System.out.println("Activated. How can I help you?");
        batteryLevel -= 5;
        System.out.println("Battery level is: " + batteryLevel + "%");
    }

    public void chargeBattery(int hours) {
        System.out.println("Droid charging...");
        batteryLevel += hours;

        if(batteryLevel > 100) {
            batteryLevel = 100;
        }

        System.out.println("Battery level is: " + batteryLevel + "%");
    }

    public int checkBatteryLevel() {
        System.out.println("Battery level is: " + batteryLevel + "%");

        return batteryLevel;
    }

    public void hover(int meters) {
        if(meters > 2) {
            System.out.println("Error! I can't hover above 2 meters");
        } else {
            System.out.println("Hovering...");
            batteryLevel -= 20;
            System.out.println("Battery level is: " + batteryLevel + "%");
        }
    }

    public static void main(String[] args) {
        Droid myDroid = new Droid();
        myDroid.activate();
        myDroid.chargeBattery(5);
        myDroid.hover(1);        
    }
}