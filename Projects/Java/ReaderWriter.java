// Sajanjit Singh Brar 
// 20124087
// OS Lab - 7.1
// Reader Writer Problem

import java.lang.Thread;
import java.util.Scanner;

class Sp {
    static int rw_mutex = 1;
    static int mutex = 1;
    static int read_count = 0;
    static String Content = "1";

    static void enter_rw_mutex() {
        while (rw_mutex <= 0) {
            try {
                Thread.sleep(10);
            } catch (InterruptedException e) {
                System.out.println("Thread Interrupted");
            }
        }
        rw_mutex--;
    }

    static void exit_rw_mutex() {
        rw_mutex++;
    }

    static void enter_mutex() {
        while (mutex <= 0) {
            try {
                Thread.sleep(10);
            } catch (InterruptedException e) {
                System.out.println("Thread Interrupted");
            }
        }
        mutex--;
    }

    static void exit_mutex() {
        mutex++;
    }
}

class Reader implements Runnable {
    String name;
    Thread r;
    int counter;

    Reader(String threadname) {
        name = threadname;
        r = new Thread(this, name);
        System.out.println("Process: " + r);
        r.start();
    }

    public void run() {
        for (int i = 0; i < 5; i++) {
            Sp.enter_mutex();
            Sp.read_count++;
            if (Sp.read_count == 1)
                Sp.enter_rw_mutex();
            Sp.exit_mutex();
            System.out.println(name + " Reading: " + Sp.Content);
            Sp.enter_mutex();
            Sp.read_count--;
            if (Sp.read_count == 0)
                Sp.exit_rw_mutex();
            Sp.exit_mutex();
        }
    }

    void Completion() {
        System.out.println(name + ": Process Complete");
    }
}

class Writer implements Runnable {
    String name;
    Thread w;
    int counter;

    Writer(String threadname) {
        name = threadname;
        w = new Thread(this, name);
        System.out.println("Process: " + w);
        w.start();
    }

    public void run() {
        for (int i = 0; i < 5; i++) {
            Sp.enter_rw_mutex();
            int j;
            String s = String.valueOf(writer1array[i]);
            System.out.println(name + " Writing: " + s);
            Sp.Content = Sp.Content + s;
            Sp.exit_rw_mutex();
        }
    }

    void Completion() {
        System.out.println(name + ": Process Complete");
    }
}

class ReaderWriter {
    public static void main(String args[]) {
        System.out.println("Sajanjit Singh Brar\n20124087\nReader Writer Problem\n");
        int[] writer1array = new int[5];
        int[] writer2array = new int[5];
        System.out.println("Enter input for writer 1");
        for (int i = 0; i < 5; i++) {
            int a;
            Scanner nos = new Scanner(System.in);
            a = nos.nextInt();
            writer1array[i] = a;
            nos.close();
        }
        System.out.println("Enter input for writer 2");
        for (int i = 0; i < 5; i++) {
            int a;
            Scanner nos = new Scanner(System.in);
            a = nos.nextInt();
            writer2array[i] = a;
            nos.close();
        }
        Writer WP1 = new Writer("Writer_Process1");
        Reader RP1 = new Reader("Reader_Process1");
        Writer WP2 = new Writer("Writer_Process2");
        Reader RP2 = new Reader("Reader_Process2");
        try {
            WP1.w.join();
            WP1.Completion();
            RP1.r.join();
            RP1.Completion();
            WP2.w.join();
            WP2.Completion();
            RP2.r.join();
            RP2.Completion();
        } catch (InterruptedException e) {
            System.out.println("Thread Interrupted");
        }
    }
}