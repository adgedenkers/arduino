Arduino: 1.8.13 (Mac OS X), Board: "Arduino Uno"

/Applications/Arduino.app/Contents/Java/arduino-builder -dump-prefs -logger=machine -hardware /Applications/Arduino.app/Contents/Java/hardware -hardware /Users/adge/Library/Arduino15/packages -tools /Applications/Arduino.app/Contents/Java/tools-builder -tools /Applications/Arduino.app/Contents/Java/hardware/tools/avr -tools /Users/adge/Library/Arduino15/packages -built-in-libraries /Applications/Arduino.app/Contents/Java/libraries -libraries /Users/adge/dev/arduino/libraries -fqbn=arduino:avr:uno -vid-pid=2341_0043 -ide-version=10813 -build-path /var/folders/h4/9cm6hhm96c7dfknqjk_dsvl40000gn/T/arduino_build_567791 -warnings=none -build-cache /var/folders/h4/9cm6hhm96c7dfknqjk_dsvl40000gn/T/arduino_cache_768434 -prefs=build.warn_data_percentage=75 -prefs=runtime.tools.avr-gcc.path=/Applications/Arduino.app/Contents/Java/hardware/tools/avr -prefs=runtime.tools.avr-gcc-7.3.0-atmel3.6.1-arduino7.path=/Applications/Arduino.app/Contents/Java/hardware/tools/avr -prefs=runtime.tools.avrdude.path=/Users/adge/Library/Arduino15/packages/arduino/tools/avrdude/6.3.0-arduino17 -prefs=runtime.tools.avrdude-6.3.0-arduino17.path=/Users/adge/Library/Arduino15/packages/arduino/tools/avrdude/6.3.0-arduino17 -prefs=runtime.tools.arduinoOTA.path=/Users/adge/Library/Arduino15/packages/arduino/tools/arduinoOTA/1.3.0 -prefs=runtime.tools.arduinoOTA-1.3.0.path=/Users/adge/Library/Arduino15/packages/arduino/tools/arduinoOTA/1.3.0 -verbose /Users/adge/dev/arduino/cart_v0.3/cart/cart.ino
/Applications/Arduino.app/Contents/Java/arduino-builder -compile -logger=machine -hardware /Applications/Arduino.app/Contents/Java/hardware -hardware /Users/adge/Library/Arduino15/packages -tools /Applications/Arduino.app/Contents/Java/tools-builder -tools /Applications/Arduino.app/Contents/Java/hardware/tools/avr -tools /Users/adge/Library/Arduino15/packages -built-in-libraries /Applications/Arduino.app/Contents/Java/libraries -libraries /Users/adge/dev/arduino/libraries -fqbn=arduino:avr:uno -vid-pid=2341_0043 -ide-version=10813 -build-path /var/folders/h4/9cm6hhm96c7dfknqjk_dsvl40000gn/T/arduino_build_567791 -warnings=none -build-cache /var/folders/h4/9cm6hhm96c7dfknqjk_dsvl40000gn/T/arduino_cache_768434 -prefs=build.warn_data_percentage=75 -prefs=runtime.tools.avr-gcc.path=/Applications/Arduino.app/Contents/Java/hardware/tools/avr -prefs=runtime.tools.avr-gcc-7.3.0-atmel3.6.1-arduino7.path=/Applications/Arduino.app/Contents/Java/hardware/tools/avr -prefs=runtime.tools.avrdude.path=/Users/adge/Library/Arduino15/packages/arduino/tools/avrdude/6.3.0-arduino17 -prefs=runtime.tools.avrdude-6.3.0-arduino17.path=/Users/adge/Library/Arduino15/packages/arduino/tools/avrdude/6.3.0-arduino17 -prefs=runtime.tools.arduinoOTA.path=/Users/adge/Library/Arduino15/packages/arduino/tools/arduinoOTA/1.3.0 -prefs=runtime.tools.arduinoOTA-1.3.0.path=/Users/adge/Library/Arduino15/packages/arduino/tools/arduinoOTA/1.3.0 -verbose /Users/adge/dev/arduino/cart_v0.3/cart/cart.ino
Using board 'uno' from platform in folder: /Applications/Arduino.app/Contents/Java/hardware/arduino/avr
Using core 'arduino' from platform in folder: /Applications/Arduino.app/Contents/Java/hardware/arduino/avr
Detecting libraries used...
/Applications/Arduino.app/Contents/Java/hardware/tools/avr/bin/avr-g++ -c -g -Os -w -std=gnu++11 -fpermissive -fno-exceptions -ffunction-sections -fdata-sections -fno-threadsafe-statics -Wno-error=narrowing -flto -w -x c++ -E -CC -mmcu=atmega328p -DF_CPU=16000000L -DARDUINO=10813 -DARDUINO_AVR_UNO -DARDUINO_ARCH_AVR -I/Applications/Arduino.app/Contents/Java/hardware/arduino/avr/cores/arduino -I/Applications/Arduino.app/Contents/Java/hardware/arduino/avr/variants/standard /var/folders/h4/9cm6hhm96c7dfknqjk_dsvl40000gn/T/arduino_build_567791/sketch/cart.ino.cpp -o /dev/null -DARDUINO_LIB_DISCOVERY_PHASE
Alternatives for Servo.h: [Servo@1.1.6 Servo@1.1.7]
ResolveLibrary(Servo.h)
  -> candidates: [Servo@1.1.6 Servo@1.1.7]
/Applications/Arduino.app/Contents/Java/hardware/tools/avr/bin/avr-g++ -c -g -Os -w -std=gnu++11 -fpermissive -fno-exceptions -ffunction-sections -fdata-sections -fno-threadsafe-statics -Wno-error=narrowing -flto -w -x c++ -E -CC -mmcu=atmega328p -DF_CPU=16000000L -DARDUINO=10813 -DARDUINO_AVR_UNO -DARDUINO_ARCH_AVR -I/Applications/Arduino.app/Contents/Java/hardware/arduino/avr/cores/arduino -I/Applications/Arduino.app/Contents/Java/hardware/arduino/avr/variants/standard -I/Users/adge/dev/arduino/libraries/Servo/src /var/folders/h4/9cm6hhm96c7dfknqjk_dsvl40000gn/T/arduino_build_567791/sketch/cart.ino.cpp -o /dev/null -DARDUINO_LIB_DISCOVERY_PHASE
Using cached library dependencies for file: /Users/adge/dev/arduino/libraries/Servo/src/avr/Servo.cpp
Using cached library dependencies for file: /Users/adge/dev/arduino/libraries/Servo/src/mbed/Servo.cpp
Using cached library dependencies for file: /Users/adge/dev/arduino/libraries/Servo/src/megaavr/Servo.cpp
Using cached library dependencies for file: /Users/adge/dev/arduino/libraries/Servo/src/nrf52/Servo.cpp
Using cached library dependencies for file: /Users/adge/dev/arduino/libraries/Servo/src/sam/Servo.cpp
Using cached library dependencies for file: /Users/adge/dev/arduino/libraries/Servo/src/samd/Servo.cpp
Using cached library dependencies for file: /Users/adge/dev/arduino/libraries/Servo/src/stm32f4/Servo.cpp
Generating function prototypes...
/Applications/Arduino.app/Contents/Java/hardware/tools/avr/bin/avr-g++ -c -g -Os -w -std=gnu++11 -fpermissive -fno-exceptions -ffunction-sections -fdata-sections -fno-threadsafe-statics -Wno-error=narrowing -flto -w -x c++ -E -CC -mmcu=atmega328p -DF_CPU=16000000L -DARDUINO=10813 -DARDUINO_AVR_UNO -DARDUINO_ARCH_AVR -I/Applications/Arduino.app/Contents/Java/hardware/arduino/avr/cores/arduino -I/Applications/Arduino.app/Contents/Java/hardware/arduino/avr/variants/standard -I/Users/adge/dev/arduino/libraries/Servo/src /var/folders/h4/9cm6hhm96c7dfknqjk_dsvl40000gn/T/arduino_build_567791/sketch/cart.ino.cpp -o /var/folders/h4/9cm6hhm96c7dfknqjk_dsvl40000gn/T/arduino_build_567791/preproc/ctags_target_for_gcc_minus_e.cpp -DARDUINO_LIB_DISCOVERY_PHASE
/Applications/Arduino.app/Contents/Java/tools-builder/ctags/5.8-arduino11/ctags -u --language-force=c++ -f - --c++-kinds=svpf --fields=KSTtzns --line-directives /var/folders/h4/9cm6hhm96c7dfknqjk_dsvl40000gn/T/arduino_build_567791/preproc/ctags_target_for_gcc_minus_e.cpp
Compiling sketch...
/Applications/Arduino.app/Contents/Java/hardware/tools/avr/bin/avr-g++ -c -g -Os -w -std=gnu++11 -fpermissive -fno-exceptions -ffunction-sections -fdata-sections -fno-threadsafe-statics -Wno-error=narrowing -MMD -flto -mmcu=atmega328p -DF_CPU=16000000L -DARDUINO=10813 -DARDUINO_AVR_UNO -DARDUINO_ARCH_AVR -I/Applications/Arduino.app/Contents/Java/hardware/arduino/avr/cores/arduino -I/Applications/Arduino.app/Contents/Java/hardware/arduino/avr/variants/standard -I/Users/adge/dev/arduino/libraries/Servo/src /var/folders/h4/9cm6hhm96c7dfknqjk_dsvl40000gn/T/arduino_build_567791/sketch/cart.ino.cpp -o /var/folders/h4/9cm6hhm96c7dfknqjk_dsvl40000gn/T/arduino_build_567791/sketch/cart.ino.cpp.o
avrdude: stk500_recv(): programmer is not responding
avrdude: stk500_getsync() attempt 10 of 10: not in sync: resp=0x00
Compiling libraries...
Compiling library "Servo"
Using previously compiled file: /var/folders/h4/9cm6hhm96c7dfknqjk_dsvl40000gn/T/arduino_build_567791/libraries/Servo/avr/Servo.cpp.o
Using previously compiled file: /var/folders/h4/9cm6hhm96c7dfknqjk_dsvl40000gn/T/arduino_build_567791/libraries/Servo/mbed/Servo.cpp.o
Using previously compiled file: /var/folders/h4/9cm6hhm96c7dfknqjk_dsvl40000gn/T/arduino_build_567791/libraries/Servo/megaavr/Servo.cpp.o
Using previously compiled file: /var/folders/h4/9cm6hhm96c7dfknqjk_dsvl40000gn/T/arduino_build_567791/libraries/Servo/nrf52/Servo.cpp.o
Using previously compiled file: /var/folders/h4/9cm6hhm96c7dfknqjk_dsvl40000gn/T/arduino_build_567791/libraries/Servo/sam/Servo.cpp.o
Using previously compiled file: /var/folders/h4/9cm6hhm96c7dfknqjk_dsvl40000gn/T/arduino_build_567791/libraries/Servo/samd/Servo.cpp.o
Using previously compiled file: /var/folders/h4/9cm6hhm96c7dfknqjk_dsvl40000gn/T/arduino_build_567791/libraries/Servo/stm32f4/Servo.cpp.o
Compiling core...
Using precompiled core: /var/folders/h4/9cm6hhm96c7dfknqjk_dsvl40000gn/T/arduino_cache_768434/core/core_arduino_avr_uno_51f02b7210b938436b779d1c032618e1.a
Linking everything together...
/Applications/Arduino.app/Contents/Java/hardware/tools/avr/bin/avr-gcc -w -Os -g -flto -fuse-linker-plugin -Wl,--gc-sections -mmcu=atmega328p -o /var/folders/h4/9cm6hhm96c7dfknqjk_dsvl40000gn/T/arduino_build_567791/cart.ino.elf /var/folders/h4/9cm6hhm96c7dfknqjk_dsvl40000gn/T/arduino_build_567791/sketch/cart.ino.cpp.o /var/folders/h4/9cm6hhm96c7dfknqjk_dsvl40000gn/T/arduino_build_567791/libraries/Servo/avr/Servo.cpp.o /var/folders/h4/9cm6hhm96c7dfknqjk_dsvl40000gn/T/arduino_build_567791/libraries/Servo/mbed/Servo.cpp.o /var/folders/h4/9cm6hhm96c7dfknqjk_dsvl40000gn/T/arduino_build_567791/libraries/Servo/megaavr/Servo.cpp.o /var/folders/h4/9cm6hhm96c7dfknqjk_dsvl40000gn/T/arduino_build_567791/libraries/Servo/nrf52/Servo.cpp.o /var/folders/h4/9cm6hhm96c7dfknqjk_dsvl40000gn/T/arduino_build_567791/libraries/Servo/sam/Servo.cpp.o /var/folders/h4/9cm6hhm96c7dfknqjk_dsvl40000gn/T/arduino_build_567791/libraries/Servo/samd/Servo.cpp.o /var/folders/h4/9cm6hhm96c7dfknqjk_dsvl40000gn/T/arduino_build_567791/libraries/Servo/stm32f4/Servo.cpp.o /var/folders/h4/9cm6hhm96c7dfknqjk_dsvl40000gn/T/arduino_build_567791/../arduino_cache_768434/core/core_arduino_avr_uno_51f02b7210b938436b779d1c032618e1.a -L/var/folders/h4/9cm6hhm96c7dfknqjk_dsvl40000gn/T/arduino_build_567791 -lm
/Applications/Arduino.app/Contents/Java/hardware/tools/avr/bin/avr-objcopy -O ihex -j .eeprom --set-section-flags=.eeprom=alloc,load --no-change-warnings --change-section-lma .eeprom=0 /var/folders/h4/9cm6hhm96c7dfknqjk_dsvl40000gn/T/arduino_build_567791/cart.ino.elf /var/folders/h4/9cm6hhm96c7dfknqjk_dsvl40000gn/T/arduino_build_567791/cart.ino.eep
/Applications/Arduino.app/Contents/Java/hardware/tools/avr/bin/avr-objcopy -O ihex -R .eeprom /var/folders/h4/9cm6hhm96c7dfknqjk_dsvl40000gn/T/arduino_build_567791/cart.ino.elf /var/folders/h4/9cm6hhm96c7dfknqjk_dsvl40000gn/T/arduino_build_567791/cart.ino.hex
Multiple libraries were found for "Servo.h"
 Used: /Users/adge/dev/arduino/libraries/Servo
 Not used: /Applications/Arduino.app/Contents/Java/libraries/Servo

avrdude done.  Thank you.

Problem uploading to board.  See http://www.arduino.cc/en/Guide/Troubleshooting#upload for suggestions.
Using library Servo at version 1.1.7 in folder: /Users/adge/dev/arduino/libraries/Servo 
/Applications/Arduino.app/Contents/Java/hardware/tools/avr/bin/avr-size -A /var/folders/h4/9cm6hhm96c7dfknqjk_dsvl40000gn/T/arduino_build_567791/cart.ino.elf
Sketch uses 3194 bytes (9%) of program storage space. Maximum is 32256 bytes.
Global variables use 231 bytes (11%) of dynamic memory, leaving 1817 bytes for local variables. Maximum is 2048 bytes.
/Users/adge/Library/Arduino15/packages/arduino/tools/avrdude/6.3.0-arduino17/bin/avrdude -C/Users/adge/Library/Arduino15/packages/arduino/tools/avrdude/6.3.0-arduino17/etc/avrdude.conf -v -patmega328p -carduino -P/dev/cu.usbmodem144144211 -b115200 -D -Uflash:w:/var/folders/h4/9cm6hhm96c7dfknqjk_dsvl40000gn/T/arduino_build_567791/cart.ino.hex:i 

avrdude: Version 6.3-20190619
         Copyright (c) 2000-2005 Brian Dean, http://www.bdmicro.com/
         Copyright (c) 2007-2014 Joerg Wunsch

         System wide configuration file is "    "
         User configuration file is "/Users/adge/.avrduderc"

         Using Port                    : /dev/cu.usbmodem144144211
         Using Programmer              : arduino
         Overriding Baud Rate          : 115200
