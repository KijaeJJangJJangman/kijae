package programmingAssignment;
import java.util.Calendar;
import java.util.Scanner;

public class HYTimeTable {
	Course[][] timeTable = new Course[5][11];
	Course subject = new Course();
	
		public enum DAYS {
			MONDAY, TUESDAY, WEDNESDAY, THURSDAY, FRIDAY
		}

	public HYTimeTable() {
		initialize();
	}

	private void initialize() {
		for(int i = 0 ; i < 5 ; i++) {
			for(int j = 0; j < 11; j++) {
				if(j == 3) {
					timeTable[i][j] = new Course("LUNCH");
					timeTable[i][j].isValid = false;
				}else if(j == 8) {
					timeTable[i][j] = new Course("DINNER");
					timeTable[i][j].isValid = false;
				}else {
					timeTable[i][j] = new Course("----");
					timeTable[i][j].isValid = true;
				}
			}
		}
	}

	public String getSchedule(String day, int period) {
		String a;
		switch(day) {
		case "MONDAY":
			a = "At that time you have : \n"+ timeTable[0][period-9].getDetails();
			break;
		case "TUESDAY":
			a = "At that time you have : \n"+ timeTable[1][period-9].getDetails();
			break;
		case "WEDNESDAY":
			a = "At that time you have : \n"+ timeTable[2][period-9].getDetails();
			break;
		case "THURSDAY":
			a = "At that time you have : \n"+ timeTable[3][period-9].getDetails();
			break;
		case "FRIDAY":
			a = "At that time you have : \n"+ timeTable[4][period-9].getDetails();
			break;
		default:
			a = "";
			break;
		}
		return a;
	}

	public boolean setSchedule(String day, int period, String name, String tutor, String room) {
		switch(day) {
		case "MONDAY":
			if(period == 12 || period == 17 || period < 9 || period > 19 || timeTable[0][period-9].isValid == false) {
				return false;
			}else {
				timeTable[0][period-9] = new Course(name,tutor,room);
				timeTable[0][period-9].isValid = false;
				return true;
			}
		case "TUESDAY":
			if(period == 12 || period == 17 || period < 9 || period > 19 || timeTable[1][period-9].isValid == false) {
				return false;
			}else {
				timeTable[1][period-9] = new Course(name,tutor,room);
				timeTable[1][period-9].isValid = false;
				return true;
			}
		case "WEDNESDAY":
			if(period == 12 || period == 17 || period < 9 || period > 19 || timeTable[2][period-9].isValid == false) {
				return false;
			}else {
				timeTable[2][period-9] = new Course(name,tutor,room);
				timeTable[2][period-9].isValid = false;
				return true;
			}
		case "THURSDAY":
			if(period == 12 || period == 17 || period < 9 || period > 19 || timeTable[3][period-9].isValid == false) {
				return false;
			}else {
				timeTable[3][period-9] = new Course(name,tutor,room);
				timeTable[3][period-9].isValid = false;
				return true;
			}
		case "FRIDAY":
			if(period == 12 || period == 17 || period < 9 || period > 19 || timeTable[4][period-9].isValid == false) {
				return false;
			}else {
				timeTable[4][period-9] = new Course(name,tutor,room);
				timeTable[4][period-9].isValid = false;
				return true;
			}
		default:
			return false;
		}
	}
	public boolean deleteSchedule(String day, int period) {
		switch(day) {
		case "MONDAY":
			if(timeTable[0][period-9].isValid == false) {
				timeTable[0][period-9] = new Course("----");
				timeTable[0][period-9].isValid = true;
				return true;
			}else {
				return false;
			}
		case "TUESDAY":
			if(timeTable[1][period-9].isValid == false) {
				timeTable[1][period-9] = new Course("----");
				timeTable[1][period-9].isValid = true;
				return true;
			}else {
				return false;
			}
		case "WEDNESDAY":
			if(timeTable[2][period-9].isValid == false) {
				timeTable[2][period-9] = new Course("----");
				timeTable[2][period-9].isValid = true;
				return true;
			}else {
				return false;
			}
		case "THURSDAY":
			if(timeTable[3][period-9].isValid == false) {
				timeTable[3][period-9] = new Course("----");
				timeTable[3][period-9].isValid = true;
				return true;
			}else {
				return false;
			}
		case "FRIDAY":
			if(timeTable[4][period-9].isValid == false) {
				timeTable[4][period-9] = new Course("----");
				timeTable[4][period-9].isValid = true;
				return true;
			}else {
				return false;
			}
		default:
			return false;
		}
		
	}

	public String toString() {
		String a = "";
		for(int i = 0 ; i < 12 ; i++) {
			for(int j = 0 ; j < 6 ; j++) {
				if(i == 0 && j == 0) {
					a = "  ";
				}
				else if(i == 0 && j != 0) {
					String tmp = "";
					switch(j) {
					case 1:
						tmp = String.format("%11s", "MONDAY");
						break;
					case 2:
						tmp = String.format("%11s", "TUESDAY");
						break;
					case 3:
						tmp = String.format("%11s", "WEDNESDAY");
						break;
					case 4:
						tmp = String.format("%11s", "THURSDAY");
						break;
					case 5:
						tmp = String.format("%11s", "FRIDAY");
						break;
					default:
						break;
					}
					a = a + tmp;
				}
				else if(i != 0 && j == 0) {
					String tmp = Integer.toString(i+8);
					tmp = String.format("%2s", tmp);
					a = a + tmp;
				}else {
					String tmp = timeTable[j-1][i-1].name;
					tmp = String.format("%11s", tmp);
					a = a + tmp;
				}
			}
			a = a + "\n";
		}
		return a;
	}

	public String oneDaySchedule(String day) {
		String a = "";
		switch(day) {
		case "MONDAY":
			a = "MONDAY\n";
			for(int i = 0 ; i < 11 ; i++) {
				a = a + timeTable[0][i];
				if(i != 10) {
					a = a + "\n";
				}
			}
			break;
		case "TUESDAY":
			a = "TUESDAY\n";
			for(int i = 0 ; i < 11 ; i++) {
				a = a + timeTable[1][i];
				if(i != 10) {
					a = a + "\n";
				}
			}
			break;
		case "WEDNESDAY":
			a = "WEDNESDAY\n";
			for(int i = 0 ; i < 11 ; i++) {
				a = a + timeTable[0][i];
				if(i != 10) {
					a = a + "\n";
				}
			}
			break;
		case "THURSDAY":
			a = "THURSDAY\n";
			for(int i = 0 ; i < 11 ; i++) {
				a = a + timeTable[0][i];
				if(i != 10) {
					a = a + "\n";
				}
			}
			break;
		case "FRIDAY":
			a = "FRIDAY\n";
			for(int i = 0 ; i < 11 ; i++) {
				a = a + timeTable[0][i];
				if(i != 10) {
					a = a + "\n";
				}
			}
			break;
		default:
			break;
		}
		return a;
	}
	
	public String subjectSchedule(String sub){
		String a = "";
		for(int i = 0 ; i < 5 ; i++) {
			for(int j = 0 ; j < 11 ; j++) {
				if(timeTable[i][j].toString().equals(sub)) {
					a = "Subject: " + sub + "\n";
					switch(i) {
					case 0:
						a = a + "Day: MONDAY\n";
						break;
					case 1:
						a = a + "Day: TUESDAY\n";
						break;
					case 2:
						a = a + "Day: WEDNESDAY\n";
						break;
					case 4:
						a = a + "Day: THURSDAY\n";
						break;
					case 5:
						a = a + "Day: FRIDAY\n";
						break;
					default:
						break;
					}
					a = a + "Lecture time: " + Integer.toString(j+9) + "\nProfessor: " + timeTable[i][j].professor + "\nRoom No: " + timeTable[i][j].roomNumber;
				}
			}
		}
		return a;
	}
	
	public Calendar setInputDate() {
		System.out.println("Enter the date(YYYYMMDD) : ");
		Scanner sc = new Scanner(System.in);
		String a = sc.next();
		Calendar cal = Calendar.getInstance();
		int year = Integer.parseInt(a.substring(0, 4));
        int month = Integer.parseInt(a.substring(4, 6))-1;
        int day = Integer.parseInt(a.substring(6, 8));
        cal.set(Calendar.YEAR, year);
        cal.set(Calendar.MONTH, month);
        cal.set(Calendar.DAY_OF_MONTH, day);
		return cal;
	}
}
