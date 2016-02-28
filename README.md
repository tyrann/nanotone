# nanotone

Tiny C programs that make music.

## Installation

There is nothing to install. You can compile each file using `gcc -o executable filename.c`. Don't forget to link with `-lm` if the source file includes `<math.h>`
Then depending on your system:
* PulseAudio: `./executable | pacat --format format --rate sampling_rate`
* Alsa: `./executable | aplay`
* Or finally directly into /dev/dsp

## License

GNU General Public License
