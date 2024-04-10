package programmingAssignment;

public class Course {
	public String name;
	public String professor;
	public String roomNumber;
	public boolean isValid;

	public Course() {
	}

	public Course(String name, String tutor, String room) {
		this.name = name;
		professor = tutor;
		roomNumber = room;
	}

	public Course(String name) {
		this.name = name;
	}

	public Course(Course copy) {
		name = copy.name;
		professor = copy.professor;
		roomNumber = copy.roomNumber;
	}

	public String getState() {
		return name + " " + professor + " " + roomNumber;
	}

	public void setState(String tutor, String room) {
		professor = tutor;
		roomNumber = room;
	}

	public boolean equals(Course s) {
		if(this.name.equals(s.name) && this.professor.equals(s.professor) && this.roomNumber.equals(s.roomNumber)) {
			return true;
		}else {
			return false;
		}
	}

	public String toString() {
		return name;
	}

	public String getDetails() {
		return "Name : " + name + "\nTutor : " + professor + "\nRoom : " + roomNumber;
	}
}
