class CommandLine {

	public static void getOptions(String ... opacity){

		// String [] opacity = {};

		for (String value : opacity) {
			System.out.println(value);
		}

	}


	public static void main(String args[]) {
	
		if (args.length < 1) {
			getOptions("width", "height", "position");
		} else {
			for (String value : args) {
				System.out.println(value);
			}
		}

	}

}