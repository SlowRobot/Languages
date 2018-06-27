import java.util.ArrayList;

public class Array {
    
    public static void main(String[] args) {

        ArrayList<Integer> weeklyTemperatures = new ArrayList<Integer>();
        weeklyTemperatures.add(28);
        weeklyTemperatures.add(17);
        weeklyTemperatures.add(39);
        weeklyTemperatures.add(49);

        weeklyTemperatures.add(2, 55);
        System.out.println(weeklyTemperatures.get(3));

        for(int j = 0; j < weeklyTemperatures.size(); j++) {
            System.out.println(weeklyTemperatures.get(j));
        }

        for (Integer temperature : weeklyTemperatures) {
            System.out.println(temperature);
        }

    }
}