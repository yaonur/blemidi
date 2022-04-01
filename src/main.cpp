#include <midi_Defs.h>
#include <midi_Settings.h>
#include <MIDI.h>
#include <midi_Namespace.h>
#include <midi_Message.h>
#include <BLEMidi.h>

MIDI_CREATE_DEFAULT_INSTANCE();
int p1 = 33;
int p2 = 25;
int p3 = 26;
int p4 = 27;
int p5 = 14;
int c1 = 5;
int c2 = 18;
int c3 = 19;
int c4 = 35;
int c5 = 32;
int toe = 5;
int is_pushed = 0;
int program_change_state = 1;
int pot = 0;
int pot_buffer = 0;

void setup()
{
	Serial.begin(115200);
	// Serial.begin(9600);
	BLEMidiServer.begin("espmcuMidi");
	MIDI.begin(MIDI_CHANNEL_OFF);
	pinMode(p1, INPUT_PULLUP);
	pinMode(p2, INPUT_PULLUP);
	// pinMode(p3, INPUT_PULLUP);
	pinMode(p4, INPUT_PULLUP);
	pinMode(p5, INPUT_PULLUP);
	// pinMode(c1, INPUT_PULLUP);
	// pinMode(c2, INPUT_PULLUP);
	// pinMode(c3, INPUT_PULLUP);
	// pinMode(c4, INPUT_PULLUP);
	// pinMode(c5, INPUT_PULLUP);
	// pinMode(toe, INPUT_PULLUP);
}

void loop()
{
	// tor toe toe tor tor toe toe//////////////////////////  toeeeeee
	// if (digitalRead(toe) == LOW && is_pushed == 0)
	// {
	// 	is_pushed = 11;
	// 	program_change_state = 11;
	// 	MIDI.sendControlChange(31, 127, 1);
	// 	if (BLEMidiServer.isConnected())
	// 	{
	// 		BLEMidiServer.controlChange(1, 31, 127);
	// 	}
	// 	delay(10);
	// 	Serial.println("toe on");
	// }
	// else if (!digitalRead(toe) == LOW && is_pushed == 11)
	// {
	// 	is_pushed = 0;
	// 	MIDI.sendControlChange(31, 0, 1);
	// 	delay(10);
	// 	Serial.println("toe off");
	// }
	// //////////////////////////////////////////////

	// pot = analogRead(15);
	// // Serial.println(pot);
	// pot = map(pot, 0, 4095, 0, 127);
	// pot = constrain(pot, 0, 127);
	// if (abs(pot - pot_buffer > 8))
	// {
	// 	Serial.println(pot);
	// 	MIDI.sendControlChange(49, pot, 1);
	// 	if (BLEMidiServer.isConnected())
	// 	{

	// 		BLEMidiServer.controlChange(1, 49, pot);
	// 	}
	// 	pot_buffer = pot;
	// 	delay(5);
	// }

	// p1//////////////////////////////////////////////////////
	if (digitalRead(p1) == LOW && is_pushed == 0)
	{
		Serial.println("p1 on");
		if (program_change_state == 1)
		{
			MIDI.sendControlChange(85, 127, 1);
			if (BLEMidiServer.isConnected())
			{
				BLEMidiServer.controlChange(1, 85, 127);
			}
		}
		else
		{

			MIDI.sendProgramChange(1, 1);
			if (BLEMidiServer.isConnected())
			{
				BLEMidiServer.programChange(1, 1);
			}
		}
		is_pushed = 1;
		program_change_state = 1;
		delay(100);
	}
	else if (!digitalRead(p1) == LOW && is_pushed == 1)
	{

		Serial.println(("p1 off"));
		is_pushed = 0;
		delay(100);
	}
	// p2///////////////////////////////////////////////////
	if (digitalRead(p2) == LOW && is_pushed == 0)
	{
		Serial.println("p2 on");
		if (program_change_state == 2)
		{
			MIDI.sendControlChange(85, 127, 1);
			if (BLEMidiServer.isConnected())
			{
				BLEMidiServer.controlChange(1, 85, 127);
			}
		}
		else
		{

			MIDI.sendProgramChange(2, 1);
			if (BLEMidiServer.isConnected())
			{
				BLEMidiServer.programChange(1, 2);
			}
		}
		is_pushed = 2;
		program_change_state = 2;
		delay(100);
	}
	else if (!digitalRead(p2) == LOW && is_pushed == 2)
	{
		is_pushed = 0;
		delay(100);
	}
	// // p3/////////////////////////////////////
	// if (digitalRead(p3) == LOW && is_pushed == 0)
	// {
	// 	Serial.println("p3 on");
	// 	if (program_change_state == 3)
	// 	{
	// 		MIDI.sendControlChange(85, 127, 1);
	// 		if (BLEMidiServer.isConnected())
	// 		{
	// 			BLEMidiServer.controlChange(1, 85, 127);
	// 		}
	// 	}
	// 	else
	// 	{

	// 		MIDI.sendProgramChange(3, 1);
	// 		if (BLEMidiServer.isConnected())
	// 		{
	// 			BLEMidiServer.programChange(1, 3);
	// 		}
	// 	}
	// 	is_pushed = 3;
	// 	program_change_state = 3;
	// 	delay(100);
	// }
	// else if (!digitalRead(p3) == LOW && is_pushed == 3)
	// {
	// 	is_pushed = 0;
	// 	delay(100);
	// }
	// p4//////////////////////////////////
	if (digitalRead(p4) == LOW && is_pushed == 0)
	{
		Serial.println("p4 on");
		if (program_change_state == 4)
		{
			MIDI.sendControlChange(85, 127, 1);
			if (BLEMidiServer.isConnected())
			{
				BLEMidiServer.controlChange(1, 85, 127);
			}
		}
		else
		{

			MIDI.sendProgramChange(4, 1);
			if (BLEMidiServer.isConnected())
			{
				BLEMidiServer.programChange(1, 4);
			}
		}
		is_pushed = 4;
		program_change_state = 4;
		delay(100);
	}
	else if (!digitalRead(p4) == LOW && is_pushed == 4)
	{
		is_pushed = 0;
		delay(100);
	}
	// p5//////////////////////////////////
	if (digitalRead(p5) == LOW && is_pushed == 0)
	{
		Serial.println("p5 on");
		if (program_change_state == 5)
		{
			MIDI.sendControlChange(85, 127, 1);
			if (BLEMidiServer.isConnected())
			{
				BLEMidiServer.controlChange(1, 85, 127);
			}
		}
		else
		{
			MIDI.sendProgramChange(5, 1);
			if (BLEMidiServer.isConnected())
			{
				BLEMidiServer.programChange(1, 5);
			}
		}

		is_pushed = 5;
		program_change_state = 5;
		delay(100);
	}
	else if (!digitalRead(p5) == LOW && is_pushed == 5)
	{
		is_pushed = 0;
		delay(100);
	}
	// // c1////////////////////////////////// this is for tap tempo
	// if (digitalRead(c1) == LOW && is_pushed == 0)
	// {
	// 	Serial.println("p6 on");
	// 	if (program_change_state == 6)
	// 	{
	// 		MIDI.sendControlChange(64, 127, 1);
	// 		if (BLEMidiServer.isConnected())
	// 		{
	// 			BLEMidiServer.controlChange(1, 64, 127);
	// 		}
	// 	}
	// 	else
	// 	{
	// 		MIDI.sendProgramChange(6, 1);
	// 		if (BLEMidiServer.isConnected())
	// 		{
	// 			BLEMidiServer.controlChange(1, 83, 127);
	// 		}
	// 	}
	// 	is_pushed = 6;
	// 	program_change_state = 6;
	// 	delay(100);
	// }
	// else if (!digitalRead(c1) == LOW && is_pushed == 6)
	// {
	// 	is_pushed = 0;
	// 	delay(100);
	// }
	// // c2//////////////////////////
	// if (digitalRead(c2) == LOW && is_pushed == 0)
	// {
	// 	Serial.println("p7 on");
	// 	if (program_change_state == 7)
	// 	{
	// 		MIDI.sendControlChange(85, 127, 1);
	// 		if (BLEMidiServer.isConnected())
	// 		{
	// 			BLEMidiServer.controlChange(1, 64, 127);
	// 		}
	// 	}
	// 	else
	// 	{
	// 		MIDI.sendProgramChange(7, 1);
	// 		if (BLEMidiServer.isConnected())
	// 		{
	// 			BLEMidiServer.controlChange(1, 84, 127);
	// 		}
	// 	}

	// 	is_pushed = 7;
	// 	program_change_state = 7;
	// 	delay(100);
	// }
	// else if (!digitalRead(c2) == LOW && is_pushed == 7)
	// {
	// 	is_pushed = 0;
	// 	delay(100);
	// }
	// // c3//////////////////////////  this is for tap tempo
	// if (digitalRead(c3) == LOW && is_pushed == 0)
	// {
	// 	Serial.println("p8 on");
	// 	MIDI.sendControlChange(64, 127, 1);
	// 	if (program_change_state == 8)
	// 	{
	// 		MIDI.sendControlChange(85, 127, 1);
	// 		if (BLEMidiServer.isConnected())
	// 		{
	// 			BLEMidiServer.controlChange(1, 64, 127);
	// 		}
	// 	}
	// 	else
	// 	{
	// 		MIDI.sendProgramChange(7, 1);
	// 		if (BLEMidiServer.isConnected())
	// 		{
	// 			BLEMidiServer.controlChange(1, 88, 127);
	// 		}
	// 	}
	// 	is_pushed = 8;
	// 	program_change_state = 8;
	// 	delay(10);
	// 	// Serial.println(digitalRead(c3)==LOW);
	// 	return;
	// }
	// else if (!digitalRead(c3) == LOW && is_pushed == 8)
	// {
	// 	is_pushed = 0;
	// 	MIDI.sendControlChange(64, 0, 1);
	// 	delay(10);
	// 	// Serial.println(digitalRead(c3)==LOW);
	// 	return;
	// }
	// // c4//////////////////////////  c
	// if (digitalRead(c4) == LOW && is_pushed == 0)
	// {
	// 	Serial.println("p9 on");
	// 	MIDI.sendControlChange(64, 127, 1);
	// 	if (program_change_state == 8)
	// 	{
	// 		MIDI.sendControlChange(85, 127, 1);
	// 		if (BLEMidiServer.isConnected())
	// 		{
	// 			BLEMidiServer.controlChange(1, 64, 127);
	// 		}
	// 	}
	// 	else
	// 	{
	// 		MIDI.sendProgramChange(7, 1);
	// 		if (BLEMidiServer.isConnected())
	// 		{
	// 			BLEMidiServer.controlChange(1, 86, 127);
	// 		}
	// 	}
	// 	is_pushed = 8;
	// 	program_change_state = 9;
	// 	delay(10);
	// 	// Serial.println(digitalRead(c3)==LOW);
	// 	return;
	// }
	// else if (!digitalRead(c4) == LOW && is_pushed == 9)
	// {
	// 	is_pushed = 0;
	// 	MIDI.sendControlChange(64, 0, 1);
	// 	delay(10);
	// 	// Serial.println(digitalRead(c3)==LOW);
	// 	return;
	// }
	// // c5//////////////////////////  this is for tap tempo
	// if (digitalRead(c5) == LOW && is_pushed == 0)
	// {
	// 	Serial.println("p10 on");
	// 	is_pushed = 10;
	// 	program_change_state = 9;
	// 	MIDI.sendControlChange(64, 127, 1);
	// 	if (BLEMidiServer.isConnected())
	// 	{
	// 		BLEMidiServer.controlChange(1, 87, 127);
	// 	}
	// 	delay(10);
	// 	// Serial.println(digitalRead(c3)==LOW);
	// 	return;
	// }
	// else if (!digitalRead(c5) == LOW && is_pushed == 10)
	// {
	// 	is_pushed = 0;
	// 	MIDI.sendControlChange(64, 0, 1);
	// 	delay(10);
	// 	// Serial.println(digitalRead(c3)==LOW);
	// 	return;
	// }
}