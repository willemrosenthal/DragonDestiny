package animals;
class Bird extends Animal
{
	public function new(X:Float = 0, Y:Float = 0)
	{
		super(X, Y);

		followDistance = 18;

		loadGraphic("assets/summer/bird.png", true, true, 13,16);
		animation.add("sit", [0]);
		animation.add("idleside", [9]);
		animation.add("idledown", [10]);
		animation.add("idleup", [11]);
		animation.add("runside", [0, 0, 1, 1, 2, 2, 1], 16);
		animation.add("rundown", [3, 3, 4, 4, 5, 5, 4], 16);
		animation.add("runup", [6, 6, 7, 7, 8, 8, 7], 16);


		animation.add("idlesides", [12]);
		animation.add("idledowns", [13]);
		animation.add("idleups",   [14]);
		animation.add("runsides", [0, 0, 1, 1, 2, 2, 1], 16);
		animation.add("rundowns", [3, 3, 4, 4, 5, 5, 4], 16);
		animation.add("runups", [6, 6, 7, 7, 8, 8, 7], 16);


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