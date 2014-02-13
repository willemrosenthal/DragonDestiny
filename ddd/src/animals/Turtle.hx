package animals;
class Turtle extends Animal
{
	public function new(X:Float = 0, Y:Float = 0)
	{
		super(X, Y);

		followDistance = 14;

		loadGraphic("assets/fall/turtle.png", true, true, 18,10);
		animation.add("idleside", [12,13,14,14,13,14,14,13,12],5);
		animation.add("idledown", [15,16,17,17,16,17,17,16,15],5);
		animation.add("idleup",   [18,19,20,20,19,20,20,19,18],5);
		animation.add("runside", [0,1,2,3], 7);
		animation.add("rundown", [4,5,6,7], 7);
		animation.add("runup",   [8,9,10,11], 7);


		animation.add("idlesides", [21]);
		animation.add("idledowns", [23]);
		animation.add("idleups", [25]);
		animation.add("runsides", [21, 22], 3);
		animation.add("rundowns", [23, 24], 3);
		animation.add("runups",   [25, 26], 3);


		swimming = true;

		offset.y += height;
		offset.x += width * 0.5;

		//width = 9;
		//height = 6;

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