import java.util.ArrayList;

class Grades {
    public Grades() {

    }
    public int getAverage(ArrayList<Integer> grades) {
        if(grades.size() < 1) {
            System.out.println("Empty List");
            return 0;
        } else {
            int sum = 0;
            for(int grade : grades) {
                sum += grade;
            }
            int average = sum / grades.size();
            return average;
        }
    }

    public static void main(String[] args) {
        ArrayList<Integer> myClassroom = new ArrayList<Integer>();
        myClassroom.add(98);
        myClassroom.add(92);
        myClassroom.add(88);
        myClassroom.add(75);
        myClassroom.add(61);
        myClassroom.add(89);
        myClassroom.add(95);
        Grades myAnalyzer = new Grades();
        System.out.println(myAnalyzer.getAverage(myClassroom));
    }
}