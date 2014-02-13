package animals;

class Fox extends Animal
{
	public function new(X:Float = 0, Y:Float = 0)
	{
		super(X, Y);

		loadGraphic("assets/fox.png", true, true, 40,30);
		animation.add("sit", [13]);
		animation.add("idleside", [0]);
		animation.add("idledown", [3]);
		animation.add("idleup", [8]);
		animation.add("runside", [1, 2, 0], 12);
		animation.add("rundown", [4, 5, 6, 7], 12);
		animation.add("runup", [9, 10, 11, 12], 12);

		offset.y += height * 0.5;
		offset.x += width * 0.5 - 10;
		width = 20;
		height = 12;

		animation.play("sit");
	}
}