
//SET 3.P9
import java.io.*;

class FileProcessor {
    void process() throws IOException {
        System.out.println("Processing file");
    }

    void process(String filename) throws IOException {
        System.out.println("Processing: " + filename);
    }

    void process(String filename, String mode) throws IOException {
        System.out.println("File: " + filename + ", Mode: " + mode);
    }
}

class TextProcessor extends FileProcessor {
    @Override
    void process() throws FileNotFoundException {
        System.out.println("Processing text file");
    }
}

class ImageProcessor extends FileProcessor {
    @Override
    void process() {
        System.out.println("Processing image file");
    }
}

public class ExceptionHandling {
    public static void main(String[] args) {
        FileProcessor[] processors = {
            new TextProcessor(),
            new ImageProcessor()
        };

        for (FileProcessor p : processors) {
            try {
                p.process();
            } catch (IOException e) {
                System.out.println("Error: " + e.getMessage());
            }
        }

        FileProcessor f = new FileProcessor();

        try {
            f.process("data.txt");
            f.process("photo.jpg", "resize");
        } catch (IOException e) {
            System.out.println("File error");
        }
    }
}