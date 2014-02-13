package;


import flash.display.Bitmap;
import flash.display.BitmapData;
import flash.display.MovieClip;
import flash.text.Font;
import flash.media.Sound;
import flash.net.URLRequest;
import flash.utils.ByteArray;
import haxe.Unserializer;
import openfl.Assets;

#if (flash || js)
import flash.display.Loader;
import flash.events.Event;
import flash.net.URLLoader;
#end

#if ios
import openfl.utils.SystemPath;
#end


class DefaultAssetLibrary extends AssetLibrary {
	
	
	public static var className (default, null) = new Map <String, Dynamic> ();
	public static var path (default, null) = new Map <String, String> ();
	public static var type (default, null) = new Map <String, AssetType> ();
	
	
	public function new () {
		
		super ();
		
		#if flash
		
		className.set ("assets/alt_tiles.png", __ASSET__assets_alt_tiles_png);
		type.set ("assets/alt_tiles.png", Reflect.field (AssetType, "image".toUpperCase ()));
		className.set ("assets/auto_tiles.png", __ASSET__assets_auto_tiles_png);
		type.set ("assets/auto_tiles.png", Reflect.field (AssetType, "image".toUpperCase ()));
		className.set ("assets/ball.png", __ASSET__assets_ball_png);
		type.set ("assets/ball.png", Reflect.field (AssetType, "image".toUpperCase ()));
		className.set ("assets/blue_player.png", __ASSET__assets_blue_player_png);
		type.set ("assets/blue_player.png", Reflect.field (AssetType, "image".toUpperCase ()));
		className.set ("assets/default_alt.txt", __ASSET__assets_default_alt_txt);
		type.set ("assets/default_alt.txt", Reflect.field (AssetType, "text".toUpperCase ()));
		className.set ("assets/default_auto.txt", __ASSET__assets_default_auto_txt);
		type.set ("assets/default_auto.txt", Reflect.field (AssetType, "text".toUpperCase ()));
		className.set ("assets/default_empty.txt", __ASSET__assets_default_empty_txt);
		type.set ("assets/default_empty.txt", Reflect.field (AssetType, "text".toUpperCase ()));
		className.set ("assets/dragon_body.png", __ASSET__assets_dragon_body_png);
		type.set ("assets/dragon_body.png", Reflect.field (AssetType, "image".toUpperCase ()));
		className.set ("assets/dragon_head.png", __ASSET__assets_dragon_head_png);
		type.set ("assets/dragon_head.png", Reflect.field (AssetType, "image".toUpperCase ()));
		className.set ("assets/dragonhead.png", __ASSET__assets_dragonhead_png);
		type.set ("assets/dragonhead.png", Reflect.field (AssetType, "image".toUpperCase ()));
		className.set ("assets/empty_tiles.png", __ASSET__assets_empty_tiles_png);
		type.set ("assets/empty_tiles.png", Reflect.field (AssetType, "image".toUpperCase ()));
		className.set ("assets/fall/cattail1.png", __ASSET__assets_fall_cattail1_png);
		type.set ("assets/fall/cattail1.png", Reflect.field (AssetType, "image".toUpperCase ()));
		className.set ("assets/fall/cattail2.png", __ASSET__assets_fall_cattail2_png);
		type.set ("assets/fall/cattail2.png", Reflect.field (AssetType, "image".toUpperCase ()));
		className.set ("assets/fall/cattail_shadow.png", __ASSET__assets_fall_cattail_shadow_png);
		type.set ("assets/fall/cattail_shadow.png", Reflect.field (AssetType, "image".toUpperCase ()));
		className.set ("assets/fall/cattail_shadow_still.png", __ASSET__assets_fall_cattail_shadow_still_png);
		type.set ("assets/fall/cattail_shadow_still.png", Reflect.field (AssetType, "image".toUpperCase ()));
		className.set ("assets/fall/cloud.png", __ASSET__assets_fall_cloud_png);
		type.set ("assets/fall/cloud.png", Reflect.field (AssetType, "image".toUpperCase ()));
		className.set ("assets/fall/cloud_big.png", __ASSET__assets_fall_cloud_big_png);
		type.set ("assets/fall/cloud_big.png", Reflect.field (AssetType, "image".toUpperCase ()));
		className.set ("assets/fall/fall_map1.txt", __ASSET__assets_fall_fall_map1_txt);
		type.set ("assets/fall/fall_map1.txt", Reflect.field (AssetType, "text".toUpperCase ()));
		className.set ("assets/fall/fall_map1_old.txt", __ASSET__assets_fall_fall_map1_old_txt);
		type.set ("assets/fall/fall_map1_old.txt", Reflect.field (AssetType, "text".toUpperCase ()));
		className.set ("assets/fall/fall_tiles.png", __ASSET__assets_fall_fall_tiles_png);
		type.set ("assets/fall/fall_tiles.png", Reflect.field (AssetType, "image".toUpperCase ()));
		className.set ("assets/fall/fall_tiles.psd", __ASSET__assets_fall_fall_tiles_psd);
		type.set ("assets/fall/fall_tiles.psd", Reflect.field (AssetType, "binary".toUpperCase ()));
		className.set ("assets/fall/fall_tiles_new.psd", __ASSET__assets_fall_fall_tiles_new_psd);
		type.set ("assets/fall/fall_tiles_new.psd", Reflect.field (AssetType, "binary".toUpperCase ()));
		className.set ("assets/fall/frog.png", __ASSET__assets_fall_frog_png);
		type.set ("assets/fall/frog.png", Reflect.field (AssetType, "image".toUpperCase ()));
		className.set ("assets/fall/maps/fall_map", __ASSET__assets_fall_maps_fall_map);
		type.set ("assets/fall/maps/fall_map", Reflect.field (AssetType, "binary".toUpperCase ()));
		className.set ("assets/fall/maps/fall_map.bak", __ASSET__assets_fall_maps_fall_map_bak);
		type.set ("assets/fall/maps/fall_map.bak", Reflect.field (AssetType, "binary".toUpperCase ()));
		className.set ("assets/fall/maps/fall_map1", __ASSET__assets_fall_maps_fall_map1);
		type.set ("assets/fall/maps/fall_map1", Reflect.field (AssetType, "binary".toUpperCase ()));
		className.set ("assets/fall/maps/fall_map1.bak", __ASSET__assets_fall_maps_fall_map1_bak);
		type.set ("assets/fall/maps/fall_map1.bak", Reflect.field (AssetType, "binary".toUpperCase ()));
		className.set ("assets/fall/maps/fall_map1.txt", __ASSET__assets_fall_maps_fall_map1_txt);
		type.set ("assets/fall/maps/fall_map1.txt", Reflect.field (AssetType, "text".toUpperCase ()));
		className.set ("assets/fall/maps/MapBase.as", __ASSET__assets_fall_maps_mapbase_as);
		type.set ("assets/fall/maps/MapBase.as", Reflect.field (AssetType, "binary".toUpperCase ()));
		className.set ("assets/fall/maps/MapCSV_Fall_swamp_NewLayer.txt", __ASSET__assets_fall_maps_mapcsv_fall_swamp_newlayer_txt);
		type.set ("assets/fall/maps/MapCSV_Fall_swamp_NewLayer.txt", Reflect.field (AssetType, "text".toUpperCase ()));
		className.set ("assets/fall/maps/MapFall_swamp.as", __ASSET__assets_fall_maps_mapfall_swamp_as);
		type.set ("assets/fall/maps/MapFall_swamp.as", Reflect.field (AssetType, "binary".toUpperCase ()));
		className.set ("assets/fall/old/fall_tiles.png", __ASSET__assets_fall_old_fall_tiles_png);
		type.set ("assets/fall/old/fall_tiles.png", Reflect.field (AssetType, "image".toUpperCase ()));
		className.set ("assets/fall/old/frog.png", __ASSET__assets_fall_old_frog_png);
		type.set ("assets/fall/old/frog.png", Reflect.field (AssetType, "image".toUpperCase ()));
		className.set ("assets/fall/old/turtle.png", __ASSET__assets_fall_old_turtle_png);
		type.set ("assets/fall/old/turtle.png", Reflect.field (AssetType, "image".toUpperCase ()));
		className.set ("assets/fall/old/turtle_backup.png", __ASSET__assets_fall_old_turtle_backup_png);
		type.set ("assets/fall/old/turtle_backup.png", Reflect.field (AssetType, "image".toUpperCase ()));
		className.set ("assets/fall/rain1.png", __ASSET__assets_fall_rain1_png);
		type.set ("assets/fall/rain1.png", Reflect.field (AssetType, "image".toUpperCase ()));
		className.set ("assets/fall/rain2.png", __ASSET__assets_fall_rain2_png);
		type.set ("assets/fall/rain2.png", Reflect.field (AssetType, "image".toUpperCase ()));
		className.set ("assets/fall/rain_splash.png", __ASSET__assets_fall_rain_splash_png);
		type.set ("assets/fall/rain_splash.png", Reflect.field (AssetType, "image".toUpperCase ()));
		className.set ("assets/fall/skunk.png", __ASSET__assets_fall_skunk_png);
		type.set ("assets/fall/skunk.png", Reflect.field (AssetType, "image".toUpperCase ()));
		className.set ("assets/fall/skunk_shadow.psd", __ASSET__assets_fall_skunk_shadow_psd);
		type.set ("assets/fall/skunk_shadow.psd", Reflect.field (AssetType, "binary".toUpperCase ()));
		className.set ("assets/fall/turtle.png", __ASSET__assets_fall_turtle_png);
		type.set ("assets/fall/turtle.png", Reflect.field (AssetType, "image".toUpperCase ()));
		className.set ("assets/fall/turtle_backup.png", __ASSET__assets_fall_turtle_backup_png);
		type.set ("assets/fall/turtle_backup.png", Reflect.field (AssetType, "image".toUpperCase ()));
		className.set ("assets/fall/turtle_shadow.psd", __ASSET__assets_fall_turtle_shadow_psd);
		type.set ("assets/fall/turtle_shadow.psd", Reflect.field (AssetType, "binary".toUpperCase ()));
		className.set ("assets/fall/water/water_anim1.png", __ASSET__assets_fall_water_water_anim1_png);
		type.set ("assets/fall/water/water_anim1.png", Reflect.field (AssetType, "image".toUpperCase ()));
		className.set ("assets/fall/water/water_anim_ends.png", __ASSET__assets_fall_water_water_anim_ends_png);
		type.set ("assets/fall/water/water_anim_ends.png", Reflect.field (AssetType, "image".toUpperCase ()));
		className.set ("assets/fall/water/water_anim_lf_rt.png", __ASSET__assets_fall_water_water_anim_lf_rt_png);
		type.set ("assets/fall/water/water_anim_lf_rt.png", Reflect.field (AssetType, "image".toUpperCase ()));
		className.set ("assets/fez_animals.psb", __ASSET__assets_fez_animals_psb);
		type.set ("assets/fez_animals.psb", Reflect.field (AssetType, "binary".toUpperCase ()));
		className.set ("assets/fox.png", __ASSET__assets_fox_png);
		type.set ("assets/fox.png", Reflect.field (AssetType, "image".toUpperCase ()));
		className.set ("assets/fox.psb", __ASSET__assets_fox_psb);
		type.set ("assets/fox.psb", Reflect.field (AssetType, "binary".toUpperCase ()));
		className.set ("assets/frog.png", __ASSET__assets_frog_png);
		type.set ("assets/frog.png", Reflect.field (AssetType, "image".toUpperCase ()));
		className.set ("assets/frog.psb", __ASSET__assets_frog_psb);
		type.set ("assets/frog.psb", Reflect.field (AssetType, "binary".toUpperCase ()));
		className.set ("assets/getter.png", __ASSET__assets_getter_png);
		type.set ("assets/getter.png", Reflect.field (AssetType, "image".toUpperCase ()));
		className.set ("assets/ground.png", __ASSET__assets_ground_png);
		type.set ("assets/ground.png", Reflect.field (AssetType, "image".toUpperCase ()));
		className.set ("assets/ground_edges.png", __ASSET__assets_ground_edges_png);
		type.set ("assets/ground_edges.png", Reflect.field (AssetType, "image".toUpperCase ()));
		className.set ("assets/ground_full.png", __ASSET__assets_ground_full_png);
		type.set ("assets/ground_full.png", Reflect.field (AssetType, "image".toUpperCase ()));
		className.set ("assets/ground_full2.png", __ASSET__assets_ground_full2_png);
		type.set ("assets/ground_full2.png", Reflect.field (AssetType, "image".toUpperCase ()));
		className.set ("assets/icon.png", __ASSET__assets_icon_png);
		type.set ("assets/icon.png", Reflect.field (AssetType, "image".toUpperCase ()));
		className.set ("assets/Icon@2x.png", __ASSET__assets_icon_2x_png);
		type.set ("assets/Icon@2x.png", Reflect.field (AssetType, "image".toUpperCase ()));
		className.set ("assets/joystick.png", __ASSET__assets_joystick_png);
		type.set ("assets/joystick.png", Reflect.field (AssetType, "image".toUpperCase ()));
		className.set ("assets/joystick2.png", __ASSET__assets_joystick2_png);
		type.set ("assets/joystick2.png", Reflect.field (AssetType, "image".toUpperCase ()));
		className.set ("assets/joystick_ring_big.png", __ASSET__assets_joystick_ring_big_png);
		type.set ("assets/joystick_ring_big.png", Reflect.field (AssetType, "image".toUpperCase ()));
		className.set ("assets/joystick_ring_med.png", __ASSET__assets_joystick_ring_med_png);
		type.set ("assets/joystick_ring_med.png", Reflect.field (AssetType, "image".toUpperCase ()));
		className.set ("assets/joystick_ring_small.png", __ASSET__assets_joystick_ring_small_png);
		type.set ("assets/joystick_ring_small.png", Reflect.field (AssetType, "image".toUpperCase ()));
		className.set ("assets/levels.png", __ASSET__assets_levels_png);
		type.set ("assets/levels.png", Reflect.field (AssetType, "image".toUpperCase ()));
		className.set ("assets/levels.psd", __ASSET__assets_levels_psd);
		type.set ("assets/levels.psd", Reflect.field (AssetType, "binary".toUpperCase ()));
		className.set ("assets/more_button.png", __ASSET__assets_more_button_png);
		type.set ("assets/more_button.png", Reflect.field (AssetType, "image".toUpperCase ()));
		className.set ("assets/music.png", __ASSET__assets_music_png);
		type.set ("assets/music.png", Reflect.field (AssetType, "image".toUpperCase ()));
		className.set ("assets/net.png", __ASSET__assets_net_png);
		type.set ("assets/net.png", Reflect.field (AssetType, "image".toUpperCase ()));
		className.set ("assets/p1.png", __ASSET__assets_p1_png);
		type.set ("assets/p1.png", Reflect.field (AssetType, "image".toUpperCase ()));
		className.set ("assets/red_player.png", __ASSET__assets_red_player_png);
		type.set ("assets/red_player.png", Reflect.field (AssetType, "image".toUpperCase ()));
		className.set ("assets/simple_tile.png", __ASSET__assets_simple_tile_png);
		type.set ("assets/simple_tile.png", Reflect.field (AssetType, "image".toUpperCase ()));
		className.set ("assets/skunk.png", __ASSET__assets_skunk_png);
		type.set ("assets/skunk.png", Reflect.field (AssetType, "image".toUpperCase ()));
		className.set ("assets/skunk.psb", __ASSET__assets_skunk_psb);
		type.set ("assets/skunk.psb", Reflect.field (AssetType, "binary".toUpperCase ()));
		className.set ("assets/skunk2.png", __ASSET__assets_skunk2_png);
		type.set ("assets/skunk2.png", Reflect.field (AssetType, "image".toUpperCase ()));
		className.set ("assets/spaceman.png", __ASSET__assets_spaceman_png);
		type.set ("assets/spaceman.png", Reflect.field (AssetType, "image".toUpperCase ()));
		className.set ("assets/spring/bee.png", __ASSET__assets_spring_bee_png);
		type.set ("assets/spring/bee.png", Reflect.field (AssetType, "image".toUpperCase ()));
		className.set ("assets/spring/bee2.png", __ASSET__assets_spring_bee2_png);
		type.set ("assets/spring/bee2.png", Reflect.field (AssetType, "image".toUpperCase ()));
		className.set ("assets/spring/bunny.png", __ASSET__assets_spring_bunny_png);
		type.set ("assets/spring/bunny.png", Reflect.field (AssetType, "image".toUpperCase ()));
		className.set ("assets/spring/bunny2.png", __ASSET__assets_spring_bunny2_png);
		type.set ("assets/spring/bunny2.png", Reflect.field (AssetType, "image".toUpperCase ()));
		className.set ("assets/spring/bunny_shadow.psd", __ASSET__assets_spring_bunny_shadow_psd);
		type.set ("assets/spring/bunny_shadow.psd", Reflect.field (AssetType, "binary".toUpperCase ()));
		className.set ("assets/spring/cherry_petal.png", __ASSET__assets_spring_cherry_petal_png);
		type.set ("assets/spring/cherry_petal.png", Reflect.field (AssetType, "image".toUpperCase ()));
		className.set ("assets/spring/cherry_tree.png", __ASSET__assets_spring_cherry_tree_png);
		type.set ("assets/spring/cherry_tree.png", Reflect.field (AssetType, "image".toUpperCase ()));
		className.set ("assets/spring/cherry_tree_big.png", __ASSET__assets_spring_cherry_tree_big_png);
		type.set ("assets/spring/cherry_tree_big.png", Reflect.field (AssetType, "image".toUpperCase ()));
		className.set ("assets/spring/cherry_tree_shadow.png", __ASSET__assets_spring_cherry_tree_shadow_png);
		type.set ("assets/spring/cherry_tree_shadow.png", Reflect.field (AssetType, "image".toUpperCase ()));
		className.set ("assets/spring/default_alt.txt", __ASSET__assets_spring_default_alt_txt);
		type.set ("assets/spring/default_alt.txt", Reflect.field (AssetType, "text".toUpperCase ()));
		className.set ("assets/spring/pollen.png", __ASSET__assets_spring_pollen_png);
		type.set ("assets/spring/pollen.png", Reflect.field (AssetType, "image".toUpperCase ()));
		className.set ("assets/spring/slopemap.txt", __ASSET__assets_spring_slopemap_txt);
		type.set ("assets/spring/slopemap.txt", Reflect.field (AssetType, "text".toUpperCase ()));
		className.set ("assets/spring/spring_map1.txt", __ASSET__assets_spring_spring_map1_txt);
		type.set ("assets/spring/spring_map1.txt", Reflect.field (AssetType, "text".toUpperCase ()));
		className.set ("assets/spring/spring_tiles.png", __ASSET__assets_spring_spring_tiles_png);
		type.set ("assets/spring/spring_tiles.png", Reflect.field (AssetType, "image".toUpperCase ()));
		className.set ("assets/spring/spring_tiles2.png", __ASSET__assets_spring_spring_tiles2_png);
		type.set ("assets/spring/spring_tiles2.png", Reflect.field (AssetType, "image".toUpperCase ()));
		className.set ("assets/spring/spring_tiles3.png", __ASSET__assets_spring_spring_tiles3_png);
		type.set ("assets/spring/spring_tiles3.png", Reflect.field (AssetType, "image".toUpperCase ()));
		className.set ("assets/spring/springset.png", __ASSET__assets_spring_springset_png);
		type.set ("assets/spring/springset.png", Reflect.field (AssetType, "image".toUpperCase ()));
		className.set ("assets/spring/test/MapBase.as", __ASSET__assets_spring_test_mapbase_as);
		type.set ("assets/spring/test/MapBase.as", Reflect.field (AssetType, "binary".toUpperCase ()));
		className.set ("assets/spring/test/MapCSV_Spring_map1_NewLayer.txt", __ASSET__assets_spring_test_mapcsv_spring_map1_newlayer_txt);
		type.set ("assets/spring/test/MapCSV_Spring_map1_NewLayer.txt", Reflect.field (AssetType, "text".toUpperCase ()));
		className.set ("assets/spring/test/MapSpring_map1.as", __ASSET__assets_spring_test_mapspring_map1_as);
		type.set ("assets/spring/test/MapSpring_map1.as", Reflect.field (AssetType, "binary".toUpperCase ()));
		className.set ("assets/spring/tree_shadow.png", __ASSET__assets_spring_tree_shadow_png);
		type.set ("assets/spring/tree_shadow.png", Reflect.field (AssetType, "image".toUpperCase ()));
		className.set ("assets/star.png", __ASSET__assets_star_png);
		type.set ("assets/star.png", Reflect.field (AssetType, "image".toUpperCase ()));
		className.set ("assets/summer/bird.png", __ASSET__assets_summer_bird_png);
		type.set ("assets/summer/bird.png", Reflect.field (AssetType, "image".toUpperCase ()));
		className.set ("assets/summer/bird_shadow.psd", __ASSET__assets_summer_bird_shadow_psd);
		type.set ("assets/summer/bird_shadow.psd", Reflect.field (AssetType, "binary".toUpperCase ()));
		className.set ("assets/summer/bird_shadow2.psd", __ASSET__assets_summer_bird_shadow2_psd);
		type.set ("assets/summer/bird_shadow2.psd", Reflect.field (AssetType, "binary".toUpperCase ()));
		className.set ("assets/summer/inner_tube.png", __ASSET__assets_summer_inner_tube_png);
		type.set ("assets/summer/inner_tube.png", Reflect.field (AssetType, "image".toUpperCase ()));
		className.set ("assets/summer/inner_tube1.png", __ASSET__assets_summer_inner_tube1_png);
		type.set ("assets/summer/inner_tube1.png", Reflect.field (AssetType, "image".toUpperCase ()));
		className.set ("assets/summer/inner_tube2.png", __ASSET__assets_summer_inner_tube2_png);
		type.set ("assets/summer/inner_tube2.png", Reflect.field (AssetType, "image".toUpperCase ()));
		className.set ("assets/summer/inner_tube_new.psd", __ASSET__assets_summer_inner_tube_new_psd);
		type.set ("assets/summer/inner_tube_new.psd", Reflect.field (AssetType, "binary".toUpperCase ()));
		className.set ("assets/summer/maps/MapBase.as", __ASSET__assets_summer_maps_mapbase_as);
		type.set ("assets/summer/maps/MapBase.as", Reflect.field (AssetType, "binary".toUpperCase ()));
		className.set ("assets/summer/maps/MapSummer_map1.as", __ASSET__assets_summer_maps_mapsummer_map1_as);
		type.set ("assets/summer/maps/MapSummer_map1.as", Reflect.field (AssetType, "binary".toUpperCase ()));
		className.set ("assets/summer/maps/summer1", __ASSET__assets_summer_maps_summer1);
		type.set ("assets/summer/maps/summer1", Reflect.field (AssetType, "binary".toUpperCase ()));
		className.set ("assets/summer/maps/summer1.bak", __ASSET__assets_summer_maps_summer1_bak);
		type.set ("assets/summer/maps/summer1.bak", Reflect.field (AssetType, "binary".toUpperCase ()));
		className.set ("assets/summer/monkey.png", __ASSET__assets_summer_monkey_png);
		type.set ("assets/summer/monkey.png", Reflect.field (AssetType, "image".toUpperCase ()));
		className.set ("assets/summer/monkey.psd", __ASSET__assets_summer_monkey_psd);
		type.set ("assets/summer/monkey.psd", Reflect.field (AssetType, "binary".toUpperCase ()));
		className.set ("assets/summer/old/rays1.png", __ASSET__assets_summer_old_rays1_png);
		type.set ("assets/summer/old/rays1.png", Reflect.field (AssetType, "image".toUpperCase ()));
		className.set ("assets/summer/old/rays2.png", __ASSET__assets_summer_old_rays2_png);
		type.set ("assets/summer/old/rays2.png", Reflect.field (AssetType, "image".toUpperCase ()));
		className.set ("assets/summer/old/summer_map1.txt", __ASSET__assets_summer_old_summer_map1_txt);
		type.set ("assets/summer/old/summer_map1.txt", Reflect.field (AssetType, "text".toUpperCase ()));
		className.set ("assets/summer/old/summer_map1_waves.txt", __ASSET__assets_summer_old_summer_map1_waves_txt);
		type.set ("assets/summer/old/summer_map1_waves.txt", Reflect.field (AssetType, "text".toUpperCase ()));
		className.set ("assets/summer/old/summer_map2.txt", __ASSET__assets_summer_old_summer_map2_txt);
		type.set ("assets/summer/old/summer_map2.txt", Reflect.field (AssetType, "text".toUpperCase ()));
		className.set ("assets/summer/old/summer_tiles.png", __ASSET__assets_summer_old_summer_tiles_png);
		type.set ("assets/summer/old/summer_tiles.png", Reflect.field (AssetType, "image".toUpperCase ()));
		className.set ("assets/summer/old/wave.png", __ASSET__assets_summer_old_wave_png);
		type.set ("assets/summer/old/wave.png", Reflect.field (AssetType, "image".toUpperCase ()));
		className.set ("assets/summer/old/wave_corner_bl.png", __ASSET__assets_summer_old_wave_corner_bl_png);
		type.set ("assets/summer/old/wave_corner_bl.png", Reflect.field (AssetType, "image".toUpperCase ()));
		className.set ("assets/summer/palm.png", __ASSET__assets_summer_palm_png);
		type.set ("assets/summer/palm.png", Reflect.field (AssetType, "image".toUpperCase ()));
		className.set ("assets/summer/palm2.png", __ASSET__assets_summer_palm2_png);
		type.set ("assets/summer/palm2.png", Reflect.field (AssetType, "image".toUpperCase ()));
		className.set ("assets/summer/palm_shadow.png", __ASSET__assets_summer_palm_shadow_png);
		type.set ("assets/summer/palm_shadow.png", Reflect.field (AssetType, "image".toUpperCase ()));
		className.set ("assets/summer/rays1.png", __ASSET__assets_summer_rays1_png);
		type.set ("assets/summer/rays1.png", Reflect.field (AssetType, "image".toUpperCase ()));
		className.set ("assets/summer/rays2.png", __ASSET__assets_summer_rays2_png);
		type.set ("assets/summer/rays2.png", Reflect.field (AssetType, "image".toUpperCase ()));
		className.set ("assets/summer/shimmer1.png", __ASSET__assets_summer_shimmer1_png);
		type.set ("assets/summer/shimmer1.png", Reflect.field (AssetType, "image".toUpperCase ()));
		className.set ("assets/summer/shimmer2.png", __ASSET__assets_summer_shimmer2_png);
		type.set ("assets/summer/shimmer2.png", Reflect.field (AssetType, "image".toUpperCase ()));
		className.set ("assets/summer/shimmer3.png", __ASSET__assets_summer_shimmer3_png);
		type.set ("assets/summer/shimmer3.png", Reflect.field (AssetType, "image".toUpperCase ()));
		className.set ("assets/summer/small_monkey-shadow.psd", __ASSET__assets_summer_small_monkey_shadow_psd);
		type.set ("assets/summer/small_monkey-shadow.psd", Reflect.field (AssetType, "binary".toUpperCase ()));
		className.set ("assets/summer/small_monkey.png", __ASSET__assets_summer_small_monkey_png);
		type.set ("assets/summer/small_monkey.png", Reflect.field (AssetType, "image".toUpperCase ()));
		className.set ("assets/summer/summer_map1.txt", __ASSET__assets_summer_summer_map1_txt);
		type.set ("assets/summer/summer_map1.txt", Reflect.field (AssetType, "text".toUpperCase ()));
		className.set ("assets/summer/summer_tiles.png", __ASSET__assets_summer_summer_tiles_png);
		type.set ("assets/summer/summer_tiles.png", Reflect.field (AssetType, "image".toUpperCase ()));
		className.set ("assets/summer/tiles.psd", __ASSET__assets_summer_tiles_psd);
		type.set ("assets/summer/tiles.psd", Reflect.field (AssetType, "binary".toUpperCase ()));
		className.set ("assets/summer/wave.png", __ASSET__assets_summer_wave_png);
		type.set ("assets/summer/wave.png", Reflect.field (AssetType, "image".toUpperCase ()));
		className.set ("assets/summer/wave.psd", __ASSET__assets_summer_wave_psd);
		type.set ("assets/summer/wave.psd", Reflect.field (AssetType, "binary".toUpperCase ()));
		className.set ("assets/summer/wave_blue.png", __ASSET__assets_summer_wave_blue_png);
		type.set ("assets/summer/wave_blue.png", Reflect.field (AssetType, "image".toUpperCase ()));
		className.set ("assets/summer/wave_blue2.png", __ASSET__assets_summer_wave_blue2_png);
		type.set ("assets/summer/wave_blue2.png", Reflect.field (AssetType, "image".toUpperCase ()));
		className.set ("assets/summer/wave_blue2.psd", __ASSET__assets_summer_wave_blue2_psd);
		type.set ("assets/summer/wave_blue2.psd", Reflect.field (AssetType, "binary".toUpperCase ()));
		className.set ("assets/summer/wave_blue_og.png", __ASSET__assets_summer_wave_blue_og_png);
		type.set ("assets/summer/wave_blue_og.png", Reflect.field (AssetType, "image".toUpperCase ()));
		className.set ("assets/summer/wave_corner_dn.png", __ASSET__assets_summer_wave_corner_dn_png);
		type.set ("assets/summer/wave_corner_dn.png", Reflect.field (AssetType, "image".toUpperCase ()));
		className.set ("assets/summer/wave_corner_up.png", __ASSET__assets_summer_wave_corner_up_png);
		type.set ("assets/summer/wave_corner_up.png", Reflect.field (AssetType, "image".toUpperCase ()));
		className.set ("assets/summer/wave_inner_dn.png", __ASSET__assets_summer_wave_inner_dn_png);
		type.set ("assets/summer/wave_inner_dn.png", Reflect.field (AssetType, "image".toUpperCase ()));
		className.set ("assets/summer/wave_inner_up.png", __ASSET__assets_summer_wave_inner_up_png);
		type.set ("assets/summer/wave_inner_up.png", Reflect.field (AssetType, "image".toUpperCase ()));
		className.set ("assets/summer/waves_all.psd", __ASSET__assets_summer_waves_all_psd);
		type.set ("assets/summer/waves_all.psd", Reflect.field (AssetType, "binary".toUpperCase ()));
		className.set ("assets/tree_green.png", __ASSET__assets_tree_green_png);
		type.set ("assets/tree_green.png", Reflect.field (AssetType, "image".toUpperCase ()));
		className.set ("assets/tree_orange.png", __ASSET__assets_tree_orange_png);
		type.set ("assets/tree_orange.png", Reflect.field (AssetType, "image".toUpperCase ()));
		className.set ("assets/walls.png", __ASSET__assets_walls_png);
		type.set ("assets/walls.png", Reflect.field (AssetType, "image".toUpperCase ()));
		className.set ("flixel/img/debugger/buttons/console.png", __ASSET__flixel_img_debugger_buttons_console_png);
		type.set ("flixel/img/debugger/buttons/console.png", Reflect.field (AssetType, "image".toUpperCase ()));
		className.set ("flixel/img/debugger/buttons/logDebug.png", __ASSET__flixel_img_debugger_buttons_logdebug_png);
		type.set ("flixel/img/debugger/buttons/logDebug.png", Reflect.field (AssetType, "image".toUpperCase ()));
		className.set ("flixel/img/debugger/buttons/open.png", __ASSET__flixel_img_debugger_buttons_open_png);
		type.set ("flixel/img/debugger/buttons/open.png", Reflect.field (AssetType, "image".toUpperCase ()));
		className.set ("flixel/img/debugger/buttons/pause.png", __ASSET__flixel_img_debugger_buttons_pause_png);
		type.set ("flixel/img/debugger/buttons/pause.png", Reflect.field (AssetType, "image".toUpperCase ()));
		className.set ("flixel/img/debugger/buttons/play.png", __ASSET__flixel_img_debugger_buttons_play_png);
		type.set ("flixel/img/debugger/buttons/play.png", Reflect.field (AssetType, "image".toUpperCase ()));
		className.set ("flixel/img/debugger/buttons/record_off.png", __ASSET__flixel_img_debugger_buttons_record_off_png);
		type.set ("flixel/img/debugger/buttons/record_off.png", Reflect.field (AssetType, "image".toUpperCase ()));
		className.set ("flixel/img/debugger/buttons/record_on.png", __ASSET__flixel_img_debugger_buttons_record_on_png);
		type.set ("flixel/img/debugger/buttons/record_on.png", Reflect.field (AssetType, "image".toUpperCase ()));
		className.set ("flixel/img/debugger/buttons/restart.png", __ASSET__flixel_img_debugger_buttons_restart_png);
		type.set ("flixel/img/debugger/buttons/restart.png", Reflect.field (AssetType, "image".toUpperCase ()));
		className.set ("flixel/img/debugger/buttons/statsDebug.png", __ASSET__flixel_img_debugger_buttons_statsdebug_png);
		type.set ("flixel/img/debugger/buttons/statsDebug.png", Reflect.field (AssetType, "image".toUpperCase ()));
		className.set ("flixel/img/debugger/buttons/step.png", __ASSET__flixel_img_debugger_buttons_step_png);
		type.set ("flixel/img/debugger/buttons/step.png", Reflect.field (AssetType, "image".toUpperCase ()));
		className.set ("flixel/img/debugger/buttons/stop.png", __ASSET__flixel_img_debugger_buttons_stop_png);
		type.set ("flixel/img/debugger/buttons/stop.png", Reflect.field (AssetType, "image".toUpperCase ()));
		className.set ("flixel/img/debugger/buttons/visualDebug.png", __ASSET__flixel_img_debugger_buttons_visualdebug_png);
		type.set ("flixel/img/debugger/buttons/visualDebug.png", Reflect.field (AssetType, "image".toUpperCase ()));
		className.set ("flixel/img/debugger/buttons/watchDebug.png", __ASSET__flixel_img_debugger_buttons_watchdebug_png);
		type.set ("flixel/img/debugger/buttons/watchDebug.png", Reflect.field (AssetType, "image".toUpperCase ()));
		className.set ("flixel/img/debugger/flixel.png", __ASSET__flixel_img_debugger_flixel_png);
		type.set ("flixel/img/debugger/flixel.png", Reflect.field (AssetType, "image".toUpperCase ()));
		className.set ("flixel/img/debugger/windowHandle.png", __ASSET__flixel_img_debugger_windowhandle_png);
		type.set ("flixel/img/debugger/windowHandle.png", Reflect.field (AssetType, "image".toUpperCase ()));
		className.set ("flixel/img/logo/default.png", __ASSET__flixel_img_logo_default_png);
		type.set ("flixel/img/logo/default.png", Reflect.field (AssetType, "image".toUpperCase ()));
		className.set ("flixel/img/logo/HaxeFlixel.svg", __ASSET__flixel_img_logo_haxeflixel_svg);
		type.set ("flixel/img/logo/HaxeFlixel.svg", Reflect.field (AssetType, "text".toUpperCase ()));
		className.set ("flixel/img/logo/logo.png", __ASSET__flixel_img_logo_logo_png);
		type.set ("flixel/img/logo/logo.png", Reflect.field (AssetType, "image".toUpperCase ()));
		className.set ("flixel/img/preloader/corners.png", __ASSET__flixel_img_preloader_corners_png);
		type.set ("flixel/img/preloader/corners.png", Reflect.field (AssetType, "image".toUpperCase ()));
		className.set ("flixel/img/preloader/light.png", __ASSET__flixel_img_preloader_light_png);
		type.set ("flixel/img/preloader/light.png", Reflect.field (AssetType, "image".toUpperCase ()));
		className.set ("flixel/img/tile/autotiles.png", __ASSET__flixel_img_tile_autotiles_png);
		type.set ("flixel/img/tile/autotiles.png", Reflect.field (AssetType, "image".toUpperCase ()));
		className.set ("flixel/img/tile/autotiles_alt.png", __ASSET__flixel_img_tile_autotiles_alt_png);
		type.set ("flixel/img/tile/autotiles_alt.png", Reflect.field (AssetType, "image".toUpperCase ()));
		className.set ("flixel/img/ui/analog/base.png", __ASSET__flixel_img_ui_analog_base_png);
		type.set ("flixel/img/ui/analog/base.png", Reflect.field (AssetType, "image".toUpperCase ()));
		className.set ("flixel/img/ui/analog/thumb.png", __ASSET__flixel_img_ui_analog_thumb_png);
		type.set ("flixel/img/ui/analog/thumb.png", Reflect.field (AssetType, "image".toUpperCase ()));
		className.set ("flixel/img/ui/button.png", __ASSET__flixel_img_ui_button_png);
		type.set ("flixel/img/ui/button.png", Reflect.field (AssetType, "image".toUpperCase ()));
		className.set ("flixel/img/ui/cursor.png", __ASSET__flixel_img_ui_cursor_png);
		type.set ("flixel/img/ui/cursor.png", Reflect.field (AssetType, "image".toUpperCase ()));
		className.set ("flixel/img/ui/fontData11pt.png", __ASSET__flixel_img_ui_fontdata11pt_png);
		type.set ("flixel/img/ui/fontData11pt.png", Reflect.field (AssetType, "image".toUpperCase ()));
		className.set ("flixel/img/ui/virtualpad/a.png", __ASSET__flixel_img_ui_virtualpad_a_png);
		type.set ("flixel/img/ui/virtualpad/a.png", Reflect.field (AssetType, "image".toUpperCase ()));
		className.set ("flixel/img/ui/virtualpad/b.png", __ASSET__flixel_img_ui_virtualpad_b_png);
		type.set ("flixel/img/ui/virtualpad/b.png", Reflect.field (AssetType, "image".toUpperCase ()));
		className.set ("flixel/img/ui/virtualpad/c.png", __ASSET__flixel_img_ui_virtualpad_c_png);
		type.set ("flixel/img/ui/virtualpad/c.png", Reflect.field (AssetType, "image".toUpperCase ()));
		className.set ("flixel/img/ui/virtualpad/down.png", __ASSET__flixel_img_ui_virtualpad_down_png);
		type.set ("flixel/img/ui/virtualpad/down.png", Reflect.field (AssetType, "image".toUpperCase ()));
		className.set ("flixel/img/ui/virtualpad/left.png", __ASSET__flixel_img_ui_virtualpad_left_png);
		type.set ("flixel/img/ui/virtualpad/left.png", Reflect.field (AssetType, "image".toUpperCase ()));
		className.set ("flixel/img/ui/virtualpad/right.png", __ASSET__flixel_img_ui_virtualpad_right_png);
		type.set ("flixel/img/ui/virtualpad/right.png", Reflect.field (AssetType, "image".toUpperCase ()));
		className.set ("flixel/img/ui/virtualpad/up.png", __ASSET__flixel_img_ui_virtualpad_up_png);
		type.set ("flixel/img/ui/virtualpad/up.png", Reflect.field (AssetType, "image".toUpperCase ()));
		className.set ("flixel/img/ui/virtualpad/x.png", __ASSET__flixel_img_ui_virtualpad_x_png);
		type.set ("flixel/img/ui/virtualpad/x.png", Reflect.field (AssetType, "image".toUpperCase ()));
		className.set ("flixel/img/ui/virtualpad/y.png", __ASSET__flixel_img_ui_virtualpad_y_png);
		type.set ("flixel/img/ui/virtualpad/y.png", Reflect.field (AssetType, "image".toUpperCase ()));
		className.set ("flixel/snd/beep.wav", __ASSET__flixel_snd_beep_wav);
		type.set ("flixel/snd/beep.wav", Reflect.field (AssetType, "sound".toUpperCase ()));
		className.set ("flixel/snd/flixel.wav", __ASSET__flixel_snd_flixel_wav);
		type.set ("flixel/snd/flixel.wav", Reflect.field (AssetType, "sound".toUpperCase ()));
		
		
		#elseif html5
		
		path.set ("assets/alt_tiles.png", "assets/alt_tiles.png");
		type.set ("assets/alt_tiles.png", Reflect.field (AssetType, "image".toUpperCase ()));
		path.set ("assets/auto_tiles.png", "assets/auto_tiles.png");
		type.set ("assets/auto_tiles.png", Reflect.field (AssetType, "image".toUpperCase ()));
		path.set ("assets/ball.png", "assets/ball.png");
		type.set ("assets/ball.png", Reflect.field (AssetType, "image".toUpperCase ()));
		path.set ("assets/blue_player.png", "assets/blue_player.png");
		type.set ("assets/blue_player.png", Reflect.field (AssetType, "image".toUpperCase ()));
		path.set ("assets/default_alt.txt", "assets/default_alt.txt");
		type.set ("assets/default_alt.txt", Reflect.field (AssetType, "text".toUpperCase ()));
		path.set ("assets/default_auto.txt", "assets/default_auto.txt");
		type.set ("assets/default_auto.txt", Reflect.field (AssetType, "text".toUpperCase ()));
		path.set ("assets/default_empty.txt", "assets/default_empty.txt");
		type.set ("assets/default_empty.txt", Reflect.field (AssetType, "text".toUpperCase ()));
		path.set ("assets/dragon_body.png", "assets/dragon_body.png");
		type.set ("assets/dragon_body.png", Reflect.field (AssetType, "image".toUpperCase ()));
		path.set ("assets/dragon_head.png", "assets/dragon_head.png");
		type.set ("assets/dragon_head.png", Reflect.field (AssetType, "image".toUpperCase ()));
		path.set ("assets/dragonhead.png", "assets/dragonhead.png");
		type.set ("assets/dragonhead.png", Reflect.field (AssetType, "image".toUpperCase ()));
		path.set ("assets/empty_tiles.png", "assets/empty_tiles.png");
		type.set ("assets/empty_tiles.png", Reflect.field (AssetType, "image".toUpperCase ()));
		path.set ("assets/fall/cattail1.png", "assets/fall/cattail1.png");
		type.set ("assets/fall/cattail1.png", Reflect.field (AssetType, "image".toUpperCase ()));
		path.set ("assets/fall/cattail2.png", "assets/fall/cattail2.png");
		type.set ("assets/fall/cattail2.png", Reflect.field (AssetType, "image".toUpperCase ()));
		path.set ("assets/fall/cattail_shadow.png", "assets/fall/cattail_shadow.png");
		type.set ("assets/fall/cattail_shadow.png", Reflect.field (AssetType, "image".toUpperCase ()));
		path.set ("assets/fall/cattail_shadow_still.png", "assets/fall/cattail_shadow_still.png");
		type.set ("assets/fall/cattail_shadow_still.png", Reflect.field (AssetType, "image".toUpperCase ()));
		path.set ("assets/fall/cloud.png", "assets/fall/cloud.png");
		type.set ("assets/fall/cloud.png", Reflect.field (AssetType, "image".toUpperCase ()));
		path.set ("assets/fall/cloud_big.png", "assets/fall/cloud_big.png");
		type.set ("assets/fall/cloud_big.png", Reflect.field (AssetType, "image".toUpperCase ()));
		path.set ("assets/fall/fall_map1.txt", "assets/fall/fall_map1.txt");
		type.set ("assets/fall/fall_map1.txt", Reflect.field (AssetType, "text".toUpperCase ()));
		path.set ("assets/fall/fall_map1_old.txt", "assets/fall/fall_map1_old.txt");
		type.set ("assets/fall/fall_map1_old.txt", Reflect.field (AssetType, "text".toUpperCase ()));
		path.set ("assets/fall/fall_tiles.png", "assets/fall/fall_tiles.png");
		type.set ("assets/fall/fall_tiles.png", Reflect.field (AssetType, "image".toUpperCase ()));
		path.set ("assets/fall/fall_tiles.psd", "assets/fall/fall_tiles.psd");
		type.set ("assets/fall/fall_tiles.psd", Reflect.field (AssetType, "binary".toUpperCase ()));
		path.set ("assets/fall/fall_tiles_new.psd", "assets/fall/fall_tiles_new.psd");
		type.set ("assets/fall/fall_tiles_new.psd", Reflect.field (AssetType, "binary".toUpperCase ()));
		path.set ("assets/fall/frog.png", "assets/fall/frog.png");
		type.set ("assets/fall/frog.png", Reflect.field (AssetType, "image".toUpperCase ()));
		path.set ("assets/fall/maps/fall_map", "assets/fall/maps/fall_map");
		type.set ("assets/fall/maps/fall_map", Reflect.field (AssetType, "binary".toUpperCase ()));
		path.set ("assets/fall/maps/fall_map.bak", "assets/fall/maps/fall_map.bak");
		type.set ("assets/fall/maps/fall_map.bak", Reflect.field (AssetType, "binary".toUpperCase ()));
		path.set ("assets/fall/maps/fall_map1", "assets/fall/maps/fall_map1");
		type.set ("assets/fall/maps/fall_map1", Reflect.field (AssetType, "binary".toUpperCase ()));
		path.set ("assets/fall/maps/fall_map1.bak", "assets/fall/maps/fall_map1.bak");
		type.set ("assets/fall/maps/fall_map1.bak", Reflect.field (AssetType, "binary".toUpperCase ()));
		path.set ("assets/fall/maps/fall_map1.txt", "assets/fall/maps/fall_map1.txt");
		type.set ("assets/fall/maps/fall_map1.txt", Reflect.field (AssetType, "text".toUpperCase ()));
		path.set ("assets/fall/maps/MapBase.as", "assets/fall/maps/MapBase.as");
		type.set ("assets/fall/maps/MapBase.as", Reflect.field (AssetType, "binary".toUpperCase ()));
		path.set ("assets/fall/maps/MapCSV_Fall_swamp_NewLayer.txt", "assets/fall/maps/MapCSV_Fall_swamp_NewLayer.txt");
		type.set ("assets/fall/maps/MapCSV_Fall_swamp_NewLayer.txt", Reflect.field (AssetType, "text".toUpperCase ()));
		path.set ("assets/fall/maps/MapFall_swamp.as", "assets/fall/maps/MapFall_swamp.as");
		type.set ("assets/fall/maps/MapFall_swamp.as", Reflect.field (AssetType, "binary".toUpperCase ()));
		path.set ("assets/fall/old/fall_tiles.png", "assets/fall/old/fall_tiles.png");
		type.set ("assets/fall/old/fall_tiles.png", Reflect.field (AssetType, "image".toUpperCase ()));
		path.set ("assets/fall/old/frog.png", "assets/fall/old/frog.png");
		type.set ("assets/fall/old/frog.png", Reflect.field (AssetType, "image".toUpperCase ()));
		path.set ("assets/fall/old/turtle.png", "assets/fall/old/turtle.png");
		type.set ("assets/fall/old/turtle.png", Reflect.field (AssetType, "image".toUpperCase ()));
		path.set ("assets/fall/old/turtle_backup.png", "assets/fall/old/turtle_backup.png");
		type.set ("assets/fall/old/turtle_backup.png", Reflect.field (AssetType, "image".toUpperCase ()));
		path.set ("assets/fall/rain1.png", "assets/fall/rain1.png");
		type.set ("assets/fall/rain1.png", Reflect.field (AssetType, "image".toUpperCase ()));
		path.set ("assets/fall/rain2.png", "assets/fall/rain2.png");
		type.set ("assets/fall/rain2.png", Reflect.field (AssetType, "image".toUpperCase ()));
		path.set ("assets/fall/rain_splash.png", "assets/fall/rain_splash.png");
		type.set ("assets/fall/rain_splash.png", Reflect.field (AssetType, "image".toUpperCase ()));
		path.set ("assets/fall/skunk.png", "assets/fall/skunk.png");
		type.set ("assets/fall/skunk.png", Reflect.field (AssetType, "image".toUpperCase ()));
		path.set ("assets/fall/skunk_shadow.psd", "assets/fall/skunk_shadow.psd");
		type.set ("assets/fall/skunk_shadow.psd", Reflect.field (AssetType, "binary".toUpperCase ()));
		path.set ("assets/fall/turtle.png", "assets/fall/turtle.png");
		type.set ("assets/fall/turtle.png", Reflect.field (AssetType, "image".toUpperCase ()));
		path.set ("assets/fall/turtle_backup.png", "assets/fall/turtle_backup.png");
		type.set ("assets/fall/turtle_backup.png", Reflect.field (AssetType, "image".toUpperCase ()));
		path.set ("assets/fall/turtle_shadow.psd", "assets/fall/turtle_shadow.psd");
		type.set ("assets/fall/turtle_shadow.psd", Reflect.field (AssetType, "binary".toUpperCase ()));
		path.set ("assets/fall/water/water_anim1.png", "assets/fall/water/water_anim1.png");
		type.set ("assets/fall/water/water_anim1.png", Reflect.field (AssetType, "image".toUpperCase ()));
		path.set ("assets/fall/water/water_anim_ends.png", "assets/fall/water/water_anim_ends.png");
		type.set ("assets/fall/water/water_anim_ends.png", Reflect.field (AssetType, "image".toUpperCase ()));
		path.set ("assets/fall/water/water_anim_lf_rt.png", "assets/fall/water/water_anim_lf_rt.png");
		type.set ("assets/fall/water/water_anim_lf_rt.png", Reflect.field (AssetType, "image".toUpperCase ()));
		path.set ("assets/fez_animals.psb", "assets/fez_animals.psb");
		type.set ("assets/fez_animals.psb", Reflect.field (AssetType, "binary".toUpperCase ()));
		path.set ("assets/fox.png", "assets/fox.png");
		type.set ("assets/fox.png", Reflect.field (AssetType, "image".toUpperCase ()));
		path.set ("assets/fox.psb", "assets/fox.psb");
		type.set ("assets/fox.psb", Reflect.field (AssetType, "binary".toUpperCase ()));
		path.set ("assets/frog.png", "assets/frog.png");
		type.set ("assets/frog.png", Reflect.field (AssetType, "image".toUpperCase ()));
		path.set ("assets/frog.psb", "assets/frog.psb");
		type.set ("assets/frog.psb", Reflect.field (AssetType, "binary".toUpperCase ()));
		path.set ("assets/getter.png", "assets/getter.png");
		type.set ("assets/getter.png", Reflect.field (AssetType, "image".toUpperCase ()));
		path.set ("assets/ground.png", "assets/ground.png");
		type.set ("assets/ground.png", Reflect.field (AssetType, "image".toUpperCase ()));
		path.set ("assets/ground_edges.png", "assets/ground_edges.png");
		type.set ("assets/ground_edges.png", Reflect.field (AssetType, "image".toUpperCase ()));
		path.set ("assets/ground_full.png", "assets/ground_full.png");
		type.set ("assets/ground_full.png", Reflect.field (AssetType, "image".toUpperCase ()));
		path.set ("assets/ground_full2.png", "assets/ground_full2.png");
		type.set ("assets/ground_full2.png", Reflect.field (AssetType, "image".toUpperCase ()));
		path.set ("assets/icon.png", "assets/icon.png");
		type.set ("assets/icon.png", Reflect.field (AssetType, "image".toUpperCase ()));
		path.set ("assets/Icon@2x.png", "assets/Icon@2x.png");
		type.set ("assets/Icon@2x.png", Reflect.field (AssetType, "image".toUpperCase ()));
		path.set ("assets/joystick.png", "assets/joystick.png");
		type.set ("assets/joystick.png", Reflect.field (AssetType, "image".toUpperCase ()));
		path.set ("assets/joystick2.png", "assets/joystick2.png");
		type.set ("assets/joystick2.png", Reflect.field (AssetType, "image".toUpperCase ()));
		path.set ("assets/joystick_ring_big.png", "assets/joystick_ring_big.png");
		type.set ("assets/joystick_ring_big.png", Reflect.field (AssetType, "image".toUpperCase ()));
		path.set ("assets/joystick_ring_med.png", "assets/joystick_ring_med.png");
		type.set ("assets/joystick_ring_med.png", Reflect.field (AssetType, "image".toUpperCase ()));
		path.set ("assets/joystick_ring_small.png", "assets/joystick_ring_small.png");
		type.set ("assets/joystick_ring_small.png", Reflect.field (AssetType, "image".toUpperCase ()));
		path.set ("assets/levels.png", "assets/levels.png");
		type.set ("assets/levels.png", Reflect.field (AssetType, "image".toUpperCase ()));
		path.set ("assets/levels.psd", "assets/levels.psd");
		type.set ("assets/levels.psd", Reflect.field (AssetType, "binary".toUpperCase ()));
		path.set ("assets/more_button.png", "assets/more_button.png");
		type.set ("assets/more_button.png", Reflect.field (AssetType, "image".toUpperCase ()));
		path.set ("assets/music.png", "assets/music.png");
		type.set ("assets/music.png", Reflect.field (AssetType, "image".toUpperCase ()));
		path.set ("assets/net.png", "assets/net.png");
		type.set ("assets/net.png", Reflect.field (AssetType, "image".toUpperCase ()));
		path.set ("assets/p1.png", "assets/p1.png");
		type.set ("assets/p1.png", Reflect.field (AssetType, "image".toUpperCase ()));
		path.set ("assets/red_player.png", "assets/red_player.png");
		type.set ("assets/red_player.png", Reflect.field (AssetType, "image".toUpperCase ()));
		path.set ("assets/simple_tile.png", "assets/simple_tile.png");
		type.set ("assets/simple_tile.png", Reflect.field (AssetType, "image".toUpperCase ()));
		path.set ("assets/skunk.png", "assets/skunk.png");
		type.set ("assets/skunk.png", Reflect.field (AssetType, "image".toUpperCase ()));
		path.set ("assets/skunk.psb", "assets/skunk.psb");
		type.set ("assets/skunk.psb", Reflect.field (AssetType, "binary".toUpperCase ()));
		path.set ("assets/skunk2.png", "assets/skunk2.png");
		type.set ("assets/skunk2.png", Reflect.field (AssetType, "image".toUpperCase ()));
		path.set ("assets/spaceman.png", "assets/spaceman.png");
		type.set ("assets/spaceman.png", Reflect.field (AssetType, "image".toUpperCase ()));
		path.set ("assets/spring/bee.png", "assets/spring/bee.png");
		type.set ("assets/spring/bee.png", Reflect.field (AssetType, "image".toUpperCase ()));
		path.set ("assets/spring/bee2.png", "assets/spring/bee2.png");
		type.set ("assets/spring/bee2.png", Reflect.field (AssetType, "image".toUpperCase ()));
		path.set ("assets/spring/bunny.png", "assets/spring/bunny.png");
		type.set ("assets/spring/bunny.png", Reflect.field (AssetType, "image".toUpperCase ()));
		path.set ("assets/spring/bunny2.png", "assets/spring/bunny2.png");
		type.set ("assets/spring/bunny2.png", Reflect.field (AssetType, "image".toUpperCase ()));
		path.set ("assets/spring/bunny_shadow.psd", "assets/spring/bunny_shadow.psd");
		type.set ("assets/spring/bunny_shadow.psd", Reflect.field (AssetType, "binary".toUpperCase ()));
		path.set ("assets/spring/cherry_petal.png", "assets/spring/cherry_petal.png");
		type.set ("assets/spring/cherry_petal.png", Reflect.field (AssetType, "image".toUpperCase ()));
		path.set ("assets/spring/cherry_tree.png", "assets/spring/cherry_tree.png");
		type.set ("assets/spring/cherry_tree.png", Reflect.field (AssetType, "image".toUpperCase ()));
		path.set ("assets/spring/cherry_tree_big.png", "assets/spring/cherry_tree_big.png");
		type.set ("assets/spring/cherry_tree_big.png", Reflect.field (AssetType, "image".toUpperCase ()));
		path.set ("assets/spring/cherry_tree_shadow.png", "assets/spring/cherry_tree_shadow.png");
		type.set ("assets/spring/cherry_tree_shadow.png", Reflect.field (AssetType, "image".toUpperCase ()));
		path.set ("assets/spring/default_alt.txt", "assets/spring/default_alt.txt");
		type.set ("assets/spring/default_alt.txt", Reflect.field (AssetType, "text".toUpperCase ()));
		path.set ("assets/spring/pollen.png", "assets/spring/pollen.png");
		type.set ("assets/spring/pollen.png", Reflect.field (AssetType, "image".toUpperCase ()));
		path.set ("assets/spring/slopemap.txt", "assets/spring/slopemap.txt");
		type.set ("assets/spring/slopemap.txt", Reflect.field (AssetType, "text".toUpperCase ()));
		path.set ("assets/spring/spring_map1.txt", "assets/spring/spring_map1.txt");
		type.set ("assets/spring/spring_map1.txt", Reflect.field (AssetType, "text".toUpperCase ()));
		path.set ("assets/spring/spring_tiles.png", "assets/spring/spring_tiles.png");
		type.set ("assets/spring/spring_tiles.png", Reflect.field (AssetType, "image".toUpperCase ()));
		path.set ("assets/spring/spring_tiles2.png", "assets/spring/spring_tiles2.png");
		type.set ("assets/spring/spring_tiles2.png", Reflect.field (AssetType, "image".toUpperCase ()));
		path.set ("assets/spring/spring_tiles3.png", "assets/spring/spring_tiles3.png");
		type.set ("assets/spring/spring_tiles3.png", Reflect.field (AssetType, "image".toUpperCase ()));
		path.set ("assets/spring/springset.png", "assets/spring/springset.png");
		type.set ("assets/spring/springset.png", Reflect.field (AssetType, "image".toUpperCase ()));
		path.set ("assets/spring/test/MapBase.as", "assets/spring/test/MapBase.as");
		type.set ("assets/spring/test/MapBase.as", Reflect.field (AssetType, "binary".toUpperCase ()));
		path.set ("assets/spring/test/MapCSV_Spring_map1_NewLayer.txt", "assets/spring/test/MapCSV_Spring_map1_NewLayer.txt");
		type.set ("assets/spring/test/MapCSV_Spring_map1_NewLayer.txt", Reflect.field (AssetType, "text".toUpperCase ()));
		path.set ("assets/spring/test/MapSpring_map1.as", "assets/spring/test/MapSpring_map1.as");
		type.set ("assets/spring/test/MapSpring_map1.as", Reflect.field (AssetType, "binary".toUpperCase ()));
		path.set ("assets/spring/tree_shadow.png", "assets/spring/tree_shadow.png");
		type.set ("assets/spring/tree_shadow.png", Reflect.field (AssetType, "image".toUpperCase ()));
		path.set ("assets/star.png", "assets/star.png");
		type.set ("assets/star.png", Reflect.field (AssetType, "image".toUpperCase ()));
		path.set ("assets/summer/bird.png", "assets/summer/bird.png");
		type.set ("assets/summer/bird.png", Reflect.field (AssetType, "image".toUpperCase ()));
		path.set ("assets/summer/bird_shadow.psd", "assets/summer/bird_shadow.psd");
		type.set ("assets/summer/bird_shadow.psd", Reflect.field (AssetType, "binary".toUpperCase ()));
		path.set ("assets/summer/bird_shadow2.psd", "assets/summer/bird_shadow2.psd");
		type.set ("assets/summer/bird_shadow2.psd", Reflect.field (AssetType, "binary".toUpperCase ()));
		path.set ("assets/summer/inner_tube.png", "assets/summer/inner_tube.png");
		type.set ("assets/summer/inner_tube.png", Reflect.field (AssetType, "image".toUpperCase ()));
		path.set ("assets/summer/inner_tube1.png", "assets/summer/inner_tube1.png");
		type.set ("assets/summer/inner_tube1.png", Reflect.field (AssetType, "image".toUpperCase ()));
		path.set ("assets/summer/inner_tube2.png", "assets/summer/inner_tube2.png");
		type.set ("assets/summer/inner_tube2.png", Reflect.field (AssetType, "image".toUpperCase ()));
		path.set ("assets/summer/inner_tube_new.psd", "assets/summer/inner_tube_new.psd");
		type.set ("assets/summer/inner_tube_new.psd", Reflect.field (AssetType, "binary".toUpperCase ()));
		path.set ("assets/summer/maps/MapBase.as", "assets/summer/maps/MapBase.as");
		type.set ("assets/summer/maps/MapBase.as", Reflect.field (AssetType, "binary".toUpperCase ()));
		path.set ("assets/summer/maps/MapSummer_map1.as", "assets/summer/maps/MapSummer_map1.as");
		type.set ("assets/summer/maps/MapSummer_map1.as", Reflect.field (AssetType, "binary".toUpperCase ()));
		path.set ("assets/summer/maps/summer1", "assets/summer/maps/summer1");
		type.set ("assets/summer/maps/summer1", Reflect.field (AssetType, "binary".toUpperCase ()));
		path.set ("assets/summer/maps/summer1.bak", "assets/summer/maps/summer1.bak");
		type.set ("assets/summer/maps/summer1.bak", Reflect.field (AssetType, "binary".toUpperCase ()));
		path.set ("assets/summer/monkey.png", "assets/summer/monkey.png");
		type.set ("assets/summer/monkey.png", Reflect.field (AssetType, "image".toUpperCase ()));
		path.set ("assets/summer/monkey.psd", "assets/summer/monkey.psd");
		type.set ("assets/summer/monkey.psd", Reflect.field (AssetType, "binary".toUpperCase ()));
		path.set ("assets/summer/old/rays1.png", "assets/summer/old/rays1.png");
		type.set ("assets/summer/old/rays1.png", Reflect.field (AssetType, "image".toUpperCase ()));
		path.set ("assets/summer/old/rays2.png", "assets/summer/old/rays2.png");
		type.set ("assets/summer/old/rays2.png", Reflect.field (AssetType, "image".toUpperCase ()));
		path.set ("assets/summer/old/summer_map1.txt", "assets/summer/old/summer_map1.txt");
		type.set ("assets/summer/old/summer_map1.txt", Reflect.field (AssetType, "text".toUpperCase ()));
		path.set ("assets/summer/old/summer_map1_waves.txt", "assets/summer/old/summer_map1_waves.txt");
		type.set ("assets/summer/old/summer_map1_waves.txt", Reflect.field (AssetType, "text".toUpperCase ()));
		path.set ("assets/summer/old/summer_map2.txt", "assets/summer/old/summer_map2.txt");
		type.set ("assets/summer/old/summer_map2.txt", Reflect.field (AssetType, "text".toUpperCase ()));
		path.set ("assets/summer/old/summer_tiles.png", "assets/summer/old/summer_tiles.png");
		type.set ("assets/summer/old/summer_tiles.png", Reflect.field (AssetType, "image".toUpperCase ()));
		path.set ("assets/summer/old/wave.png", "assets/summer/old/wave.png");
		type.set ("assets/summer/old/wave.png", Reflect.field (AssetType, "image".toUpperCase ()));
		path.set ("assets/summer/old/wave_corner_bl.png", "assets/summer/old/wave_corner_bl.png");
		type.set ("assets/summer/old/wave_corner_bl.png", Reflect.field (AssetType, "image".toUpperCase ()));
		path.set ("assets/summer/palm.png", "assets/summer/palm.png");
		type.set ("assets/summer/palm.png", Reflect.field (AssetType, "image".toUpperCase ()));
		path.set ("assets/summer/palm2.png", "assets/summer/palm2.png");
		type.set ("assets/summer/palm2.png", Reflect.field (AssetType, "image".toUpperCase ()));
		path.set ("assets/summer/palm_shadow.png", "assets/summer/palm_shadow.png");
		type.set ("assets/summer/palm_shadow.png", Reflect.field (AssetType, "image".toUpperCase ()));
		path.set ("assets/summer/rays1.png", "assets/summer/rays1.png");
		type.set ("assets/summer/rays1.png", Reflect.field (AssetType, "image".toUpperCase ()));
		path.set ("assets/summer/rays2.png", "assets/summer/rays2.png");
		type.set ("assets/summer/rays2.png", Reflect.field (AssetType, "image".toUpperCase ()));
		path.set ("assets/summer/shimmer1.png", "assets/summer/shimmer1.png");
		type.set ("assets/summer/shimmer1.png", Reflect.field (AssetType, "image".toUpperCase ()));
		path.set ("assets/summer/shimmer2.png", "assets/summer/shimmer2.png");
		type.set ("assets/summer/shimmer2.png", Reflect.field (AssetType, "image".toUpperCase ()));
		path.set ("assets/summer/shimmer3.png", "assets/summer/shimmer3.png");
		type.set ("assets/summer/shimmer3.png", Reflect.field (AssetType, "image".toUpperCase ()));
		path.set ("assets/summer/small_monkey-shadow.psd", "assets/summer/small_monkey-shadow.psd");
		type.set ("assets/summer/small_monkey-shadow.psd", Reflect.field (AssetType, "binary".toUpperCase ()));
		path.set ("assets/summer/small_monkey.png", "assets/summer/small_monkey.png");
		type.set ("assets/summer/small_monkey.png", Reflect.field (AssetType, "image".toUpperCase ()));
		path.set ("assets/summer/summer_map1.txt", "assets/summer/summer_map1.txt");
		type.set ("assets/summer/summer_map1.txt", Reflect.field (AssetType, "text".toUpperCase ()));
		path.set ("assets/summer/summer_tiles.png", "assets/summer/summer_tiles.png");
		type.set ("assets/summer/summer_tiles.png", Reflect.field (AssetType, "image".toUpperCase ()));
		path.set ("assets/summer/tiles.psd", "assets/summer/tiles.psd");
		type.set ("assets/summer/tiles.psd", Reflect.field (AssetType, "binary".toUpperCase ()));
		path.set ("assets/summer/wave.png", "assets/summer/wave.png");
		type.set ("assets/summer/wave.png", Reflect.field (AssetType, "image".toUpperCase ()));
		path.set ("assets/summer/wave.psd", "assets/summer/wave.psd");
		type.set ("assets/summer/wave.psd", Reflect.field (AssetType, "binary".toUpperCase ()));
		path.set ("assets/summer/wave_blue.png", "assets/summer/wave_blue.png");
		type.set ("assets/summer/wave_blue.png", Reflect.field (AssetType, "image".toUpperCase ()));
		path.set ("assets/summer/wave_blue2.png", "assets/summer/wave_blue2.png");
		type.set ("assets/summer/wave_blue2.png", Reflect.field (AssetType, "image".toUpperCase ()));
		path.set ("assets/summer/wave_blue2.psd", "assets/summer/wave_blue2.psd");
		type.set ("assets/summer/wave_blue2.psd", Reflect.field (AssetType, "binary".toUpperCase ()));
		path.set ("assets/summer/wave_blue_og.png", "assets/summer/wave_blue_og.png");
		type.set ("assets/summer/wave_blue_og.png", Reflect.field (AssetType, "image".toUpperCase ()));
		path.set ("assets/summer/wave_corner_dn.png", "assets/summer/wave_corner_dn.png");
		type.set ("assets/summer/wave_corner_dn.png", Reflect.field (AssetType, "image".toUpperCase ()));
		path.set ("assets/summer/wave_corner_up.png", "assets/summer/wave_corner_up.png");
		type.set ("assets/summer/wave_corner_up.png", Reflect.field (AssetType, "image".toUpperCase ()));
		path.set ("assets/summer/wave_inner_dn.png", "assets/summer/wave_inner_dn.png");
		type.set ("assets/summer/wave_inner_dn.png", Reflect.field (AssetType, "image".toUpperCase ()));
		path.set ("assets/summer/wave_inner_up.png", "assets/summer/wave_inner_up.png");
		type.set ("assets/summer/wave_inner_up.png", Reflect.field (AssetType, "image".toUpperCase ()));
		path.set ("assets/summer/waves_all.psd", "assets/summer/waves_all.psd");
		type.set ("assets/summer/waves_all.psd", Reflect.field (AssetType, "binary".toUpperCase ()));
		path.set ("assets/tree_green.png", "assets/tree_green.png");
		type.set ("assets/tree_green.png", Reflect.field (AssetType, "image".toUpperCase ()));
		path.set ("assets/tree_orange.png", "assets/tree_orange.png");
		type.set ("assets/tree_orange.png", Reflect.field (AssetType, "image".toUpperCase ()));
		path.set ("assets/walls.png", "assets/walls.png");
		type.set ("assets/walls.png", Reflect.field (AssetType, "image".toUpperCase ()));
		path.set ("flixel/img/debugger/buttons/console.png", "flixel/img/debugger/buttons/console.png");
		type.set ("flixel/img/debugger/buttons/console.png", Reflect.field (AssetType, "image".toUpperCase ()));
		path.set ("flixel/img/debugger/buttons/logDebug.png", "flixel/img/debugger/buttons/logDebug.png");
		type.set ("flixel/img/debugger/buttons/logDebug.png", Reflect.field (AssetType, "image".toUpperCase ()));
		path.set ("flixel/img/debugger/buttons/open.png", "flixel/img/debugger/buttons/open.png");
		type.set ("flixel/img/debugger/buttons/open.png", Reflect.field (AssetType, "image".toUpperCase ()));
		path.set ("flixel/img/debugger/buttons/pause.png", "flixel/img/debugger/buttons/pause.png");
		type.set ("flixel/img/debugger/buttons/pause.png", Reflect.field (AssetType, "image".toUpperCase ()));
		path.set ("flixel/img/debugger/buttons/play.png", "flixel/img/debugger/buttons/play.png");
		type.set ("flixel/img/debugger/buttons/play.png", Reflect.field (AssetType, "image".toUpperCase ()));
		path.set ("flixel/img/debugger/buttons/record_off.png", "flixel/img/debugger/buttons/record_off.png");
		type.set ("flixel/img/debugger/buttons/record_off.png", Reflect.field (AssetType, "image".toUpperCase ()));
		path.set ("flixel/img/debugger/buttons/record_on.png", "flixel/img/debugger/buttons/record_on.png");
		type.set ("flixel/img/debugger/buttons/record_on.png", Reflect.field (AssetType, "image".toUpperCase ()));
		path.set ("flixel/img/debugger/buttons/restart.png", "flixel/img/debugger/buttons/restart.png");
		type.set ("flixel/img/debugger/buttons/restart.png", Reflect.field (AssetType, "image".toUpperCase ()));
		path.set ("flixel/img/debugger/buttons/statsDebug.png", "flixel/img/debugger/buttons/statsDebug.png");
		type.set ("flixel/img/debugger/buttons/statsDebug.png", Reflect.field (AssetType, "image".toUpperCase ()));
		path.set ("flixel/img/debugger/buttons/step.png", "flixel/img/debugger/buttons/step.png");
		type.set ("flixel/img/debugger/buttons/step.png", Reflect.field (AssetType, "image".toUpperCase ()));
		path.set ("flixel/img/debugger/buttons/stop.png", "flixel/img/debugger/buttons/stop.png");
		type.set ("flixel/img/debugger/buttons/stop.png", Reflect.field (AssetType, "image".toUpperCase ()));
		path.set ("flixel/img/debugger/buttons/visualDebug.png", "flixel/img/debugger/buttons/visualDebug.png");
		type.set ("flixel/img/debugger/buttons/visualDebug.png", Reflect.field (AssetType, "image".toUpperCase ()));
		path.set ("flixel/img/debugger/buttons/watchDebug.png", "flixel/img/debugger/buttons/watchDebug.png");
		type.set ("flixel/img/debugger/buttons/watchDebug.png", Reflect.field (AssetType, "image".toUpperCase ()));
		path.set ("flixel/img/debugger/flixel.png", "flixel/img/debugger/flixel.png");
		type.set ("flixel/img/debugger/flixel.png", Reflect.field (AssetType, "image".toUpperCase ()));
		path.set ("flixel/img/debugger/windowHandle.png", "flixel/img/debugger/windowHandle.png");
		type.set ("flixel/img/debugger/windowHandle.png", Reflect.field (AssetType, "image".toUpperCase ()));
		path.set ("flixel/img/logo/default.png", "flixel/img/logo/default.png");
		type.set ("flixel/img/logo/default.png", Reflect.field (AssetType, "image".toUpperCase ()));
		path.set ("flixel/img/logo/HaxeFlixel.svg", "flixel/img/logo/HaxeFlixel.svg");
		type.set ("flixel/img/logo/HaxeFlixel.svg", Reflect.field (AssetType, "text".toUpperCase ()));
		path.set ("flixel/img/logo/logo.png", "flixel/img/logo/logo.png");
		type.set ("flixel/img/logo/logo.png", Reflect.field (AssetType, "image".toUpperCase ()));
		path.set ("flixel/img/preloader/corners.png", "flixel/img/preloader/corners.png");
		type.set ("flixel/img/preloader/corners.png", Reflect.field (AssetType, "image".toUpperCase ()));
		path.set ("flixel/img/preloader/light.png", "flixel/img/preloader/light.png");
		type.set ("flixel/img/preloader/light.png", Reflect.field (AssetType, "image".toUpperCase ()));
		path.set ("flixel/img/tile/autotiles.png", "flixel/img/tile/autotiles.png");
		type.set ("flixel/img/tile/autotiles.png", Reflect.field (AssetType, "image".toUpperCase ()));
		path.set ("flixel/img/tile/autotiles_alt.png", "flixel/img/tile/autotiles_alt.png");
		type.set ("flixel/img/tile/autotiles_alt.png", Reflect.field (AssetType, "image".toUpperCase ()));
		path.set ("flixel/img/ui/analog/base.png", "flixel/img/ui/analog/base.png");
		type.set ("flixel/img/ui/analog/base.png", Reflect.field (AssetType, "image".toUpperCase ()));
		path.set ("flixel/img/ui/analog/thumb.png", "flixel/img/ui/analog/thumb.png");
		type.set ("flixel/img/ui/analog/thumb.png", Reflect.field (AssetType, "image".toUpperCase ()));
		path.set ("flixel/img/ui/button.png", "flixel/img/ui/button.png");
		type.set ("flixel/img/ui/button.png", Reflect.field (AssetType, "image".toUpperCase ()));
		path.set ("flixel/img/ui/cursor.png", "flixel/img/ui/cursor.png");
		type.set ("flixel/img/ui/cursor.png", Reflect.field (AssetType, "image".toUpperCase ()));
		path.set ("flixel/img/ui/fontData11pt.png", "flixel/img/ui/fontData11pt.png");
		type.set ("flixel/img/ui/fontData11pt.png", Reflect.field (AssetType, "image".toUpperCase ()));
		path.set ("flixel/img/ui/virtualpad/a.png", "flixel/img/ui/virtualpad/a.png");
		type.set ("flixel/img/ui/virtualpad/a.png", Reflect.field (AssetType, "image".toUpperCase ()));
		path.set ("flixel/img/ui/virtualpad/b.png", "flixel/img/ui/virtualpad/b.png");
		type.set ("flixel/img/ui/virtualpad/b.png", Reflect.field (AssetType, "image".toUpperCase ()));
		path.set ("flixel/img/ui/virtualpad/c.png", "flixel/img/ui/virtualpad/c.png");
		type.set ("flixel/img/ui/virtualpad/c.png", Reflect.field (AssetType, "image".toUpperCase ()));
		path.set ("flixel/img/ui/virtualpad/down.png", "flixel/img/ui/virtualpad/down.png");
		type.set ("flixel/img/ui/virtualpad/down.png", Reflect.field (AssetType, "image".toUpperCase ()));
		path.set ("flixel/img/ui/virtualpad/left.png", "flixel/img/ui/virtualpad/left.png");
		type.set ("flixel/img/ui/virtualpad/left.png", Reflect.field (AssetType, "image".toUpperCase ()));
		path.set ("flixel/img/ui/virtualpad/right.png", "flixel/img/ui/virtualpad/right.png");
		type.set ("flixel/img/ui/virtualpad/right.png", Reflect.field (AssetType, "image".toUpperCase ()));
		path.set ("flixel/img/ui/virtualpad/up.png", "flixel/img/ui/virtualpad/up.png");
		type.set ("flixel/img/ui/virtualpad/up.png", Reflect.field (AssetType, "image".toUpperCase ()));
		path.set ("flixel/img/ui/virtualpad/x.png", "flixel/img/ui/virtualpad/x.png");
		type.set ("flixel/img/ui/virtualpad/x.png", Reflect.field (AssetType, "image".toUpperCase ()));
		path.set ("flixel/img/ui/virtualpad/y.png", "flixel/img/ui/virtualpad/y.png");
		type.set ("flixel/img/ui/virtualpad/y.png", Reflect.field (AssetType, "image".toUpperCase ()));
		path.set ("flixel/snd/beep.wav", "flixel/snd/beep.wav");
		type.set ("flixel/snd/beep.wav", Reflect.field (AssetType, "sound".toUpperCase ()));
		path.set ("flixel/snd/flixel.wav", "flixel/snd/flixel.wav");
		type.set ("flixel/snd/flixel.wav", Reflect.field (AssetType, "sound".toUpperCase ()));
		
		
		#else
		
		try {
			
			#if blackberry
			var bytes = ByteArray.readFile ("app/native/manifest");
			#elseif tizen
			var bytes = ByteArray.readFile ("../res/manifest");
			#elseif emscripten
			var bytes = ByteArray.readFile ("assets/manifest");
			#else
			var bytes = ByteArray.readFile ("manifest");
			#end
			
			if (bytes != null) {
				
				bytes.position = 0;
				
				if (bytes.length > 0) {
					
					var data = bytes.readUTFBytes (bytes.length);
					
					if (data != null && data.length > 0) {
						
						var manifest:Array<AssetData> = Unserializer.run (data);
						
						for (asset in manifest) {
							
							path.set (asset.id, asset.path);
							type.set (asset.id, asset.type);
							
						}
						
					}
					
				}
				
			} else {
				
				trace ("Warning: Could not load asset manifest");
				
			}
			
		} catch (e:Dynamic) {
			
			trace ("Warning: Could not load asset manifest");
			
		}
		
		#end
		
	}
	
	
	public override function exists (id:String, type:AssetType):Bool {
		
		var assetType = DefaultAssetLibrary.type.get (id);
		
		#if pixi
		
		if (assetType == IMAGE) {
			
			return true;
			
		} else {
			
			return false;
			
		}
		
		#end
		
		if (assetType != null) {
			
			if (assetType == type || ((type == SOUND || type == MUSIC) && (assetType == MUSIC || assetType == SOUND))) {
				
				return true;
				
			}
			
			#if flash
			
			if ((assetType == BINARY || assetType == TEXT) && type == BINARY) {
				
				return true;
				
			} else if (path.exists (id)) {
				
				return true;
				
			}
			
			#else
			
			if (type == BINARY || type == null) {
				
				return true;
				
			}
			
			#end
			
		}
		
		return false;
		
	}
	
	
	public override function getBitmapData (id:String):BitmapData {
		
		#if pixi
		
		return BitmapData.fromImage (path.get (id));
		
		#elseif flash
		
		return cast (Type.createInstance (className.get (id), []), BitmapData);
		
		#elseif js
		
		return cast (ApplicationMain.loaders.get (path.get (id)).contentLoaderInfo.content, Bitmap).bitmapData;
		
		#else
		
		return BitmapData.load (path.get (id));
		
		#end
		
	}
	
	
	public override function getBytes (id:String):ByteArray {
		
		#if pixi
		
		return null;
		
		#elseif flash
		
		return cast (Type.createInstance (className.get (id), []), ByteArray);
		
		#elseif js
		
		var bytes:ByteArray = null;
		var data = ApplicationMain.urlLoaders.get (path.get (id)).data;
		
		if (Std.is (data, String)) {
			
			bytes = new ByteArray ();
			bytes.writeUTFBytes (data);
			
		} else if (Std.is (data, ByteArray)) {
			
			bytes = cast data;
			
		} else {
			
			bytes = null;
			
		}

		if (bytes != null) {
			
			bytes.position = 0;
			return bytes;
			
		} else {
			
			return null;
		}
		
		#else
		
		return ByteArray.readFile (path.get (id));
		
		#end
		
	}
	
	
	public override function getFont (id:String):Font {
		
		#if pixi
		
		return null;
		
		#elseif (flash || js)
		
		return cast (Type.createInstance (className.get (id), []), Font);
		
		#else
		
		return new Font (path.get (id));
		
		#end
		
	}
	
	
	public override function getMusic (id:String):Sound {
		
		#if pixi
		
		//return null;		
		
		#elseif flash
		
		return cast (Type.createInstance (className.get (id), []), Sound);
		
		#elseif js
		
		return new Sound (new URLRequest (path.get (id)));
		
		#else
		
		return new Sound (new URLRequest (path.get (id)), null, true);
		
		#end
		
	}
	
	
	public override function getPath (id:String):String {
		
		#if ios
		
		return SystemPath.applicationDirectory + "/assets/" + path.get (id);
		
		#else
		
		return path.get (id);
		
		#end
		
	}
	
	
	public override function getSound (id:String):Sound {
		
		#if pixi
		
		return null;
		
		#elseif flash
		
		return cast (Type.createInstance (className.get (id), []), Sound);
		
		#elseif js
		
		return new Sound (new URLRequest (path.get (id)));
		
		#else
		
		return new Sound (new URLRequest (path.get (id)), null, type.get (id) == MUSIC);
		
		#end
		
	}
	
	
	public override function isLocal (id:String, type:AssetType):Bool {
		
		#if flash
		
		if (type != AssetType.MUSIC && type != AssetType.SOUND) {
			
			return className.exists (id);
			
		}
		
		#end
		
		return true;
		
	}
	
	
	public override function loadBitmapData (id:String, handler:BitmapData -> Void):Void {
		
		#if pixi
		
		handler (getBitmapData (id));
		
		#elseif (flash || js)
		
		if (path.exists (id)) {
			
			var loader = new Loader ();
			loader.contentLoaderInfo.addEventListener (Event.COMPLETE, function (event:Event) {
				
				handler (cast (event.currentTarget.content, Bitmap).bitmapData);
				
			});
			loader.load (new URLRequest (path.get (id)));
			
		} else {
			
			handler (getBitmapData (id));
			
		}
		
		#else
		
		handler (getBitmapData (id));
		
		#end
		
	}
	
	
	public override function loadBytes (id:String, handler:ByteArray -> Void):Void {
		
		#if pixi
		
		handler (getBytes (id));
		
		#elseif (flash || js)
		
		if (path.exists (id)) {
			
			var loader = new URLLoader ();
			loader.addEventListener (Event.COMPLETE, function (event:Event) {
				
				var bytes = new ByteArray ();
				bytes.writeUTFBytes (event.currentTarget.data);
				bytes.position = 0;
				
				handler (bytes);
				
			});
			loader.load (new URLRequest (path.get (id)));
			
		} else {
			
			handler (getBytes (id));
			
		}
		
		#else
		
		handler (getBytes (id));
		
		#end
		
	}
	
	
	public override function loadFont (id:String, handler:Font -> Void):Void {
		
		#if (flash || js)
		
		/*if (path.exists (id)) {
			
			var loader = new Loader ();
			loader.contentLoaderInfo.addEventListener (Event.COMPLETE, function (event) {
				
				handler (cast (event.currentTarget.content, Bitmap).bitmapData);
				
			});
			loader.load (new URLRequest (path.get (id)));
			
		} else {*/
			
			handler (getFont (id));
			
		//}
		
		#else
		
		handler (getFont (id));
		
		#end
		
	}
	
	
	public override function loadMusic (id:String, handler:Sound -> Void):Void {
		
		#if (flash || js)
		
		/*if (path.exists (id)) {
			
			var loader = new Loader ();
			loader.contentLoaderInfo.addEventListener (Event.COMPLETE, function (event) {
				
				handler (cast (event.currentTarget.content, Bitmap).bitmapData);
				
			});
			loader.load (new URLRequest (path.get (id)));
			
		} else {*/
			
			handler (getMusic (id));
			
		//}
		
		#else
		
		handler (getMusic (id));
		
		#end
		
	}
	
	
	public override function loadSound (id:String, handler:Sound -> Void):Void {
		
		#if (flash || js)
		
		/*if (path.exists (id)) {
			
			var loader = new Loader ();
			loader.contentLoaderInfo.addEventListener (Event.COMPLETE, function (event) {
				
				handler (cast (event.currentTarget.content, Bitmap).bitmapData);
				
			});
			loader.load (new URLRequest (path.get (id)));
			
		} else {*/
			
			handler (getSound (id));
			
		//}
		
		#else
		
		handler (getSound (id));
		
		#end
		
	}
	
	
}


#if pixi
#elseif flash

class __ASSET__assets_alt_tiles_png extends flash.display.BitmapData { public function new () { super (0, 0); } }
class __ASSET__assets_auto_tiles_png extends flash.display.BitmapData { public function new () { super (0, 0); } }
class __ASSET__assets_ball_png extends flash.display.BitmapData { public function new () { super (0, 0); } }
class __ASSET__assets_blue_player_png extends flash.display.BitmapData { public function new () { super (0, 0); } }
class __ASSET__assets_default_alt_txt extends flash.utils.ByteArray { }
class __ASSET__assets_default_auto_txt extends flash.utils.ByteArray { }
class __ASSET__assets_default_empty_txt extends flash.utils.ByteArray { }
class __ASSET__assets_dragon_body_png extends flash.display.BitmapData { public function new () { super (0, 0); } }
class __ASSET__assets_dragon_head_png extends flash.display.BitmapData { public function new () { super (0, 0); } }
class __ASSET__assets_dragonhead_png extends flash.display.BitmapData { public function new () { super (0, 0); } }
class __ASSET__assets_empty_tiles_png extends flash.display.BitmapData { public function new () { super (0, 0); } }
class __ASSET__assets_fall_cattail1_png extends flash.display.BitmapData { public function new () { super (0, 0); } }
class __ASSET__assets_fall_cattail2_png extends flash.display.BitmapData { public function new () { super (0, 0); } }
class __ASSET__assets_fall_cattail_shadow_png extends flash.display.BitmapData { public function new () { super (0, 0); } }
class __ASSET__assets_fall_cattail_shadow_still_png extends flash.display.BitmapData { public function new () { super (0, 0); } }
class __ASSET__assets_fall_cloud_png extends flash.display.BitmapData { public function new () { super (0, 0); } }
class __ASSET__assets_fall_cloud_big_png extends flash.display.BitmapData { public function new () { super (0, 0); } }
class __ASSET__assets_fall_fall_map1_txt extends flash.utils.ByteArray { }
class __ASSET__assets_fall_fall_map1_old_txt extends flash.utils.ByteArray { }
class __ASSET__assets_fall_fall_tiles_png extends flash.display.BitmapData { public function new () { super (0, 0); } }
class __ASSET__assets_fall_fall_tiles_psd extends flash.utils.ByteArray { }
class __ASSET__assets_fall_fall_tiles_new_psd extends flash.utils.ByteArray { }
class __ASSET__assets_fall_frog_png extends flash.display.BitmapData { public function new () { super (0, 0); } }
class __ASSET__assets_fall_maps_fall_map extends flash.utils.ByteArray { }
class __ASSET__assets_fall_maps_fall_map_bak extends flash.utils.ByteArray { }
class __ASSET__assets_fall_maps_fall_map1 extends flash.utils.ByteArray { }
class __ASSET__assets_fall_maps_fall_map1_bak extends flash.utils.ByteArray { }
class __ASSET__assets_fall_maps_fall_map1_txt extends flash.utils.ByteArray { }
class __ASSET__assets_fall_maps_mapbase_as extends flash.utils.ByteArray { }
class __ASSET__assets_fall_maps_mapcsv_fall_swamp_newlayer_txt extends flash.utils.ByteArray { }
class __ASSET__assets_fall_maps_mapfall_swamp_as extends flash.utils.ByteArray { }
class __ASSET__assets_fall_old_fall_tiles_png extends flash.display.BitmapData { public function new () { super (0, 0); } }
class __ASSET__assets_fall_old_frog_png extends flash.display.BitmapData { public function new () { super (0, 0); } }
class __ASSET__assets_fall_old_turtle_png extends flash.display.BitmapData { public function new () { super (0, 0); } }
class __ASSET__assets_fall_old_turtle_backup_png extends flash.display.BitmapData { public function new () { super (0, 0); } }
class __ASSET__assets_fall_rain1_png extends flash.display.BitmapData { public function new () { super (0, 0); } }
class __ASSET__assets_fall_rain2_png extends flash.display.BitmapData { public function new () { super (0, 0); } }
class __ASSET__assets_fall_rain_splash_png extends flash.display.BitmapData { public function new () { super (0, 0); } }
class __ASSET__assets_fall_skunk_png extends flash.display.BitmapData { public function new () { super (0, 0); } }
class __ASSET__assets_fall_skunk_shadow_psd extends flash.utils.ByteArray { }
class __ASSET__assets_fall_turtle_png extends flash.display.BitmapData { public function new () { super (0, 0); } }
class __ASSET__assets_fall_turtle_backup_png extends flash.display.BitmapData { public function new () { super (0, 0); } }
class __ASSET__assets_fall_turtle_shadow_psd extends flash.utils.ByteArray { }
class __ASSET__assets_fall_water_water_anim1_png extends flash.display.BitmapData { public function new () { super (0, 0); } }
class __ASSET__assets_fall_water_water_anim_ends_png extends flash.display.BitmapData { public function new () { super (0, 0); } }
class __ASSET__assets_fall_water_water_anim_lf_rt_png extends flash.display.BitmapData { public function new () { super (0, 0); } }
class __ASSET__assets_fez_animals_psb extends flash.utils.ByteArray { }
class __ASSET__assets_fox_png extends flash.display.BitmapData { public function new () { super (0, 0); } }
class __ASSET__assets_fox_psb extends flash.utils.ByteArray { }
class __ASSET__assets_frog_png extends flash.display.BitmapData { public function new () { super (0, 0); } }
class __ASSET__assets_frog_psb extends flash.utils.ByteArray { }
class __ASSET__assets_getter_png extends flash.display.BitmapData { public function new () { super (0, 0); } }
class __ASSET__assets_ground_png extends flash.display.BitmapData { public function new () { super (0, 0); } }
class __ASSET__assets_ground_edges_png extends flash.display.BitmapData { public function new () { super (0, 0); } }
class __ASSET__assets_ground_full_png extends flash.display.BitmapData { public function new () { super (0, 0); } }
class __ASSET__assets_ground_full2_png extends flash.display.BitmapData { public function new () { super (0, 0); } }
class __ASSET__assets_icon_png extends flash.display.BitmapData { public function new () { super (0, 0); } }
class __ASSET__assets_icon_2x_png extends flash.display.BitmapData { public function new () { super (0, 0); } }
class __ASSET__assets_joystick_png extends flash.display.BitmapData { public function new () { super (0, 0); } }
class __ASSET__assets_joystick2_png extends flash.display.BitmapData { public function new () { super (0, 0); } }
class __ASSET__assets_joystick_ring_big_png extends flash.display.BitmapData { public function new () { super (0, 0); } }
class __ASSET__assets_joystick_ring_med_png extends flash.display.BitmapData { public function new () { super (0, 0); } }
class __ASSET__assets_joystick_ring_small_png extends flash.display.BitmapData { public function new () { super (0, 0); } }
class __ASSET__assets_levels_png extends flash.display.BitmapData { public function new () { super (0, 0); } }
class __ASSET__assets_levels_psd extends flash.utils.ByteArray { }
class __ASSET__assets_more_button_png extends flash.display.BitmapData { public function new () { super (0, 0); } }
class __ASSET__assets_music_png extends flash.display.BitmapData { public function new () { super (0, 0); } }
class __ASSET__assets_net_png extends flash.display.BitmapData { public function new () { super (0, 0); } }
class __ASSET__assets_p1_png extends flash.display.BitmapData { public function new () { super (0, 0); } }
class __ASSET__assets_red_player_png extends flash.display.BitmapData { public function new () { super (0, 0); } }
class __ASSET__assets_simple_tile_png extends flash.display.BitmapData { public function new () { super (0, 0); } }
class __ASSET__assets_skunk_png extends flash.display.BitmapData { public function new () { super (0, 0); } }
class __ASSET__assets_skunk_psb extends flash.utils.ByteArray { }
class __ASSET__assets_skunk2_png extends flash.display.BitmapData { public function new () { super (0, 0); } }
class __ASSET__assets_spaceman_png extends flash.display.BitmapData { public function new () { super (0, 0); } }
class __ASSET__assets_spring_bee_png extends flash.display.BitmapData { public function new () { super (0, 0); } }
class __ASSET__assets_spring_bee2_png extends flash.display.BitmapData { public function new () { super (0, 0); } }
class __ASSET__assets_spring_bunny_png extends flash.display.BitmapData { public function new () { super (0, 0); } }
class __ASSET__assets_spring_bunny2_png extends flash.display.BitmapData { public function new () { super (0, 0); } }
class __ASSET__assets_spring_bunny_shadow_psd extends flash.utils.ByteArray { }
class __ASSET__assets_spring_cherry_petal_png extends flash.display.BitmapData { public function new () { super (0, 0); } }
class __ASSET__assets_spring_cherry_tree_png extends flash.display.BitmapData { public function new () { super (0, 0); } }
class __ASSET__assets_spring_cherry_tree_big_png extends flash.display.BitmapData { public function new () { super (0, 0); } }
class __ASSET__assets_spring_cherry_tree_shadow_png extends flash.display.BitmapData { public function new () { super (0, 0); } }
class __ASSET__assets_spring_default_alt_txt extends flash.utils.ByteArray { }
class __ASSET__assets_spring_pollen_png extends flash.display.BitmapData { public function new () { super (0, 0); } }
class __ASSET__assets_spring_slopemap_txt extends flash.utils.ByteArray { }
class __ASSET__assets_spring_spring_map1_txt extends flash.utils.ByteArray { }
class __ASSET__assets_spring_spring_tiles_png extends flash.display.BitmapData { public function new () { super (0, 0); } }
class __ASSET__assets_spring_spring_tiles2_png extends flash.display.BitmapData { public function new () { super (0, 0); } }
class __ASSET__assets_spring_spring_tiles3_png extends flash.display.BitmapData { public function new () { super (0, 0); } }
class __ASSET__assets_spring_springset_png extends flash.display.BitmapData { public function new () { super (0, 0); } }
class __ASSET__assets_spring_test_mapbase_as extends flash.utils.ByteArray { }
class __ASSET__assets_spring_test_mapcsv_spring_map1_newlayer_txt extends flash.utils.ByteArray { }
class __ASSET__assets_spring_test_mapspring_map1_as extends flash.utils.ByteArray { }
class __ASSET__assets_spring_tree_shadow_png extends flash.display.BitmapData { public function new () { super (0, 0); } }
class __ASSET__assets_star_png extends flash.display.BitmapData { public function new () { super (0, 0); } }
class __ASSET__assets_summer_bird_png extends flash.display.BitmapData { public function new () { super (0, 0); } }
class __ASSET__assets_summer_bird_shadow_psd extends flash.utils.ByteArray { }
class __ASSET__assets_summer_bird_shadow2_psd extends flash.utils.ByteArray { }
class __ASSET__assets_summer_inner_tube_png extends flash.display.BitmapData { public function new () { super (0, 0); } }
class __ASSET__assets_summer_inner_tube1_png extends flash.display.BitmapData { public function new () { super (0, 0); } }
class __ASSET__assets_summer_inner_tube2_png extends flash.display.BitmapData { public function new () { super (0, 0); } }
class __ASSET__assets_summer_inner_tube_new_psd extends flash.utils.ByteArray { }
class __ASSET__assets_summer_maps_mapbase_as extends flash.utils.ByteArray { }
class __ASSET__assets_summer_maps_mapsummer_map1_as extends flash.utils.ByteArray { }
class __ASSET__assets_summer_maps_summer1 extends flash.utils.ByteArray { }
class __ASSET__assets_summer_maps_summer1_bak extends flash.utils.ByteArray { }
class __ASSET__assets_summer_monkey_png extends flash.display.BitmapData { public function new () { super (0, 0); } }
class __ASSET__assets_summer_monkey_psd extends flash.utils.ByteArray { }
class __ASSET__assets_summer_old_rays1_png extends flash.display.BitmapData { public function new () { super (0, 0); } }
class __ASSET__assets_summer_old_rays2_png extends flash.display.BitmapData { public function new () { super (0, 0); } }
class __ASSET__assets_summer_old_summer_map1_txt extends flash.utils.ByteArray { }
class __ASSET__assets_summer_old_summer_map1_waves_txt extends flash.utils.ByteArray { }
class __ASSET__assets_summer_old_summer_map2_txt extends flash.utils.ByteArray { }
class __ASSET__assets_summer_old_summer_tiles_png extends flash.display.BitmapData { public function new () { super (0, 0); } }
class __ASSET__assets_summer_old_wave_png extends flash.display.BitmapData { public function new () { super (0, 0); } }
class __ASSET__assets_summer_old_wave_corner_bl_png extends flash.display.BitmapData { public function new () { super (0, 0); } }
class __ASSET__assets_summer_palm_png extends flash.display.BitmapData { public function new () { super (0, 0); } }
class __ASSET__assets_summer_palm2_png extends flash.display.BitmapData { public function new () { super (0, 0); } }
class __ASSET__assets_summer_palm_shadow_png extends flash.display.BitmapData { public function new () { super (0, 0); } }
class __ASSET__assets_summer_rays1_png extends flash.display.BitmapData { public function new () { super (0, 0); } }
class __ASSET__assets_summer_rays2_png extends flash.display.BitmapData { public function new () { super (0, 0); } }
class __ASSET__assets_summer_shimmer1_png extends flash.display.BitmapData { public function new () { super (0, 0); } }
class __ASSET__assets_summer_shimmer2_png extends flash.display.BitmapData { public function new () { super (0, 0); } }
class __ASSET__assets_summer_shimmer3_png extends flash.display.BitmapData { public function new () { super (0, 0); } }
class __ASSET__assets_summer_small_monkey_shadow_psd extends flash.utils.ByteArray { }
class __ASSET__assets_summer_small_monkey_png extends flash.display.BitmapData { public function new () { super (0, 0); } }
class __ASSET__assets_summer_summer_map1_txt extends flash.utils.ByteArray { }
class __ASSET__assets_summer_summer_tiles_png extends flash.display.BitmapData { public function new () { super (0, 0); } }
class __ASSET__assets_summer_tiles_psd extends flash.utils.ByteArray { }
class __ASSET__assets_summer_wave_png extends flash.display.BitmapData { public function new () { super (0, 0); } }
class __ASSET__assets_summer_wave_psd extends flash.utils.ByteArray { }
class __ASSET__assets_summer_wave_blue_png extends flash.display.BitmapData { public function new () { super (0, 0); } }
class __ASSET__assets_summer_wave_blue2_png extends flash.display.BitmapData { public function new () { super (0, 0); } }
class __ASSET__assets_summer_wave_blue2_psd extends flash.utils.ByteArray { }
class __ASSET__assets_summer_wave_blue_og_png extends flash.display.BitmapData { public function new () { super (0, 0); } }
class __ASSET__assets_summer_wave_corner_dn_png extends flash.display.BitmapData { public function new () { super (0, 0); } }
class __ASSET__assets_summer_wave_corner_up_png extends flash.display.BitmapData { public function new () { super (0, 0); } }
class __ASSET__assets_summer_wave_inner_dn_png extends flash.display.BitmapData { public function new () { super (0, 0); } }
class __ASSET__assets_summer_wave_inner_up_png extends flash.display.BitmapData { public function new () { super (0, 0); } }
class __ASSET__assets_summer_waves_all_psd extends flash.utils.ByteArray { }
class __ASSET__assets_tree_green_png extends flash.display.BitmapData { public function new () { super (0, 0); } }
class __ASSET__assets_tree_orange_png extends flash.display.BitmapData { public function new () { super (0, 0); } }
class __ASSET__assets_walls_png extends flash.display.BitmapData { public function new () { super (0, 0); } }
class __ASSET__flixel_img_debugger_buttons_console_png extends flash.display.BitmapData { public function new () { super (0, 0); } }
class __ASSET__flixel_img_debugger_buttons_logdebug_png extends flash.display.BitmapData { public function new () { super (0, 0); } }
class __ASSET__flixel_img_debugger_buttons_open_png extends flash.display.BitmapData { public function new () { super (0, 0); } }
class __ASSET__flixel_img_debugger_buttons_pause_png extends flash.display.BitmapData { public function new () { super (0, 0); } }
class __ASSET__flixel_img_debugger_buttons_play_png extends flash.display.BitmapData { public function new () { super (0, 0); } }
class __ASSET__flixel_img_debugger_buttons_record_off_png extends flash.display.BitmapData { public function new () { super (0, 0); } }
class __ASSET__flixel_img_debugger_buttons_record_on_png extends flash.display.BitmapData { public function new () { super (0, 0); } }
class __ASSET__flixel_img_debugger_buttons_restart_png extends flash.display.BitmapData { public function new () { super (0, 0); } }
class __ASSET__flixel_img_debugger_buttons_statsdebug_png extends flash.display.BitmapData { public function new () { super (0, 0); } }
class __ASSET__flixel_img_debugger_buttons_step_png extends flash.display.BitmapData { public function new () { super (0, 0); } }
class __ASSET__flixel_img_debugger_buttons_stop_png extends flash.display.BitmapData { public function new () { super (0, 0); } }
class __ASSET__flixel_img_debugger_buttons_visualdebug_png extends flash.display.BitmapData { public function new () { super (0, 0); } }
class __ASSET__flixel_img_debugger_buttons_watchdebug_png extends flash.display.BitmapData { public function new () { super (0, 0); } }
class __ASSET__flixel_img_debugger_flixel_png extends flash.display.BitmapData { public function new () { super (0, 0); } }
class __ASSET__flixel_img_debugger_windowhandle_png extends flash.display.BitmapData { public function new () { super (0, 0); } }
class __ASSET__flixel_img_logo_default_png extends flash.display.BitmapData { public function new () { super (0, 0); } }
class __ASSET__flixel_img_logo_haxeflixel_svg extends flash.utils.ByteArray { }
class __ASSET__flixel_img_logo_logo_png extends flash.display.BitmapData { public function new () { super (0, 0); } }
class __ASSET__flixel_img_preloader_corners_png extends flash.display.BitmapData { public function new () { super (0, 0); } }
class __ASSET__flixel_img_preloader_light_png extends flash.display.BitmapData { public function new () { super (0, 0); } }
class __ASSET__flixel_img_tile_autotiles_png extends flash.display.BitmapData { public function new () { super (0, 0); } }
class __ASSET__flixel_img_tile_autotiles_alt_png extends flash.display.BitmapData { public function new () { super (0, 0); } }
class __ASSET__flixel_img_ui_analog_base_png extends flash.display.BitmapData { public function new () { super (0, 0); } }
class __ASSET__flixel_img_ui_analog_thumb_png extends flash.display.BitmapData { public function new () { super (0, 0); } }
class __ASSET__flixel_img_ui_button_png extends flash.display.BitmapData { public function new () { super (0, 0); } }
class __ASSET__flixel_img_ui_cursor_png extends flash.display.BitmapData { public function new () { super (0, 0); } }
class __ASSET__flixel_img_ui_fontdata11pt_png extends flash.display.BitmapData { public function new () { super (0, 0); } }
class __ASSET__flixel_img_ui_virtualpad_a_png extends flash.display.BitmapData { public function new () { super (0, 0); } }
class __ASSET__flixel_img_ui_virtualpad_b_png extends flash.display.BitmapData { public function new () { super (0, 0); } }
class __ASSET__flixel_img_ui_virtualpad_c_png extends flash.display.BitmapData { public function new () { super (0, 0); } }
class __ASSET__flixel_img_ui_virtualpad_down_png extends flash.display.BitmapData { public function new () { super (0, 0); } }
class __ASSET__flixel_img_ui_virtualpad_left_png extends flash.display.BitmapData { public function new () { super (0, 0); } }
class __ASSET__flixel_img_ui_virtualpad_right_png extends flash.display.BitmapData { public function new () { super (0, 0); } }
class __ASSET__flixel_img_ui_virtualpad_up_png extends flash.display.BitmapData { public function new () { super (0, 0); } }
class __ASSET__flixel_img_ui_virtualpad_x_png extends flash.display.BitmapData { public function new () { super (0, 0); } }
class __ASSET__flixel_img_ui_virtualpad_y_png extends flash.display.BitmapData { public function new () { super (0, 0); } }
class __ASSET__flixel_snd_beep_wav extends flash.media.Sound { }
class __ASSET__flixel_snd_flixel_wav extends flash.media.Sound { }


#elseif html5


























































































































































































#end