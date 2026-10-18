//SET 2.P7
import java.util.PriorityQueue;
import java.util.Comparator;

class Patient {
    int id;
    String name;
    int priority;
    int arrivalOrder;

    Patient(int id, String name, int priority, int arrivalOrder) {
        this.id = id;
        this.name = name;
        this.priority = priority;
        this.arrivalOrder = arrivalOrder;
    }
}

public class Hospital {
    public static void main(String[] args) {

        PriorityQueue<Patient> queue = new PriorityQueue<>(
            Comparator.comparingInt((Patient p) -> p.priority)
                      .thenComparingInt(p -> p.arrivalOrder)
        );

        
        queue.add(new Patient(1, "Patient A", 1, 1));
        queue.add(new Patient(2, "Patient B", 2, 2));
        queue.add(new Patient(3, "Patient C", 1, 3));
        queue.add(new Patient(4, "Patient D", 3, 4));

        System.out.println("Patient Processing Order:");

        while (!queue.isEmpty()) {
            Patient p = queue.poll();

            System.out.println(
                p.name + " - Priority " + p.priority
            );
        }
    }
}