# IMGD4000-SimpleAI

This is a simple unreal project built from scratch for presenting how to craft a simple AI character.

I created this project with vs code as default IDE, so if you are using vs code, you can copy all done, and it should work. If you are using different IDE, please copy the stuffs in "config", "contents", and "source" folder. These are the ones that mainly matters.

- /Source/Presentation/SampleCharacter.cpp (.h) Files for sample character
- Content
  - AI: Simple AI controller + implementation
  - AI_sample: undeleted folder for demo. no impact.
  - Raccoon: character meshs/skeletons/anim/ etc
  - RNG: Random Number Generator - A Blueprint Library Function
  - Sample Level: Main Level for demo.
  
How to run:
  Copy the files mentioned and copy them into your new project. *However*, due to some reasons I dont know, the sample level does not have a character in it. So you have to drag it in and set it by you own. 
  - Drag SampleCharacter from C++ directly into your scene
  - click on the character, set parent (capsule component) scale to 5 5 2, then go to mesh, set its scale to 20 20 50
  - click on character, go to details pane, search for "controller", set it to be SampleController
  
  Then play, it should work.
