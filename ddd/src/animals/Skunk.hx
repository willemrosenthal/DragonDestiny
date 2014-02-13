package animals;
class Skunk extends Animal
{
	public function new(X:Float = 0, Y:Float = 0)
	{
		super(X, Y);

		followDistance = 18;

		loadGraphic("assets/fall/skunk.png", true, true, 29,23);
		animation.add("idleside", [0, 3], 2);
		animation.add("idledown", [4, 7], 2);
		animation.add("idleup", [8, 11], 2);
		animation.add("runside", [1, 2], 6);
		animation.add("rundown", [5, 6], 6);
		animation.add("runup", [9, 10], 6);


		animation.add("idlesides", [12,13],2);
		animation.add("idledowns", [14,15],2);
		animation.add("idleups", [16,17],2);
		animation.add("runsides", [12,13],6);
		animation.add("rundowns", [14,15],6);
		animation.add("runups",   [16,17],6);


		swimming = true;


		//offset.y += height;
		//offset.x += width * 0.5;

		offset.y += height * 0.78;
		offset.x += width * 0.5; - 5;
		width = 12;
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