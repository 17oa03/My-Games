package jkadai05;

import java.io.FileNotFoundException;
import java.io.FileReader;
import java.io.IOException;

public class FileManagement {
	private String fileName; // (5)①
	private FileReader fileReader;

	public FileManagement(String fileName) {
		this.fileName = fileName; // (5)②
	}

	public void fileOpen() throws FileNotFoundException { // (5)③
		fileReader = new FileReader(fileName);
	}

	public void fileClose() throws IOException { // (5)④
		fileReader.close();
	}

	public String getFileName() {
		return fileName;
	}
}
