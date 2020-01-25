#define TEXTURE \RD501_Helmets\_textures\airborne

#define NEW_501_AB_HELM(classname,displayname,texture)\
	class macro_new_helmet(airborne,classname): macro_new_helmet(airborne,base)\
	{\
		scope = 2;\
		displayName = Clone airborne helmet (##displayname##);\
		hiddenSelectionsTextures[] = {TEXTURE##\##texture};\
	};