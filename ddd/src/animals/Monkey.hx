package animals;
class Monkey extends Animal
{
	public function new(X:Float = 0, Y:Float = 0)
	{
		super(X, Y);

		followDistance = 18;

        /*
		loadGraphic("assets/summer/monkey.png", true, true, 27,23);
		animation.add("sit", [0]);
		animation.add("idleside", [20]);
		animation.add("idledown", [21]);
		animation.add("idleup", [22]);
		animation.add("runside", [0, 1, 2, 1], 6);
		animation.add("rundown", [3, 4, 5, 6], 6);
		animation.add("runup", [7, 8, 9, 10, 11, 12], 9);


		animation.add("idlesides", [13,14], 2);
		animation.add("idledowns", [16,17], 2);
		animation.add("idleups",   [18,16], 2);
		animation.add("runsides",  [13,14,15,14], 6);
		animation.add("rundowns",  [16,17], 6);
		animation.add("runups",    [18,19], 6);
		*/

		loadGraphic("assets/summer/small_monkey.png", true, true, 28,19);
		animation.add("sit", [0]);
		animation.add("idleside", [16,17], 2);
		animation.add("idledown", [12,13], 2);
		animation.add("idleup", [14,15], 2);
		animation.add("runside", [0, 0, 1, 1, 2, 2, 3], 12);
		animation.add("rundown", [4, 4, 5, 5, 6, 6, 7], 12);
		animation.add("runup", [8, 8, 9, 9, 10, 11, 11], 12);


		animation.add("idlesides", [18,19], 2);
		animation.add("idledowns", [20,21], 2);
		animation.add("idleups",   [22,23], 2);
		animation.add("runsides",  [18,19], 6);
		animation.add("rundowns",  [20,21], 6);
		animation.add("runups",    [22,23], 6);


		swimming = true;

		offset.y += height;
		offset.x += width * 0.5;

		width = 6;
		height = 6;

		if (Math.random() < 0.5)  {
			animation.play("idleside");
			afacing  = "side";
		}
		else {
		    animation.play("idledown");
			afacing  = "down";
		}
	}
}