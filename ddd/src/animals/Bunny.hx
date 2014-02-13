package animals;
class Bunny extends Animal
{
	public function new(X:Float = 0, Y:Float = 0)
	{
		super(X, Y);

		followDistance = 14;

		loadGraphic("assets/spring/bunny2.png", true, true, 15,15);
		animation.add("idleside", [0,1,2,1,2,1,0],5);
		animation.add("idledown", [8,9,10,9,10,9,8],5);
		animation.add("idleup", [16,17,18,17,18,17,16],5);
		animation.add("runside", [3, 4,4,  5,5, 6,6, 7], 16);
		animation.add("rundown", [11, 12,12, 13,13, 14,14, 15], 16);
		animation.add("runup", [19, 20,20, 21,21, 22,22, 23], 16);

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