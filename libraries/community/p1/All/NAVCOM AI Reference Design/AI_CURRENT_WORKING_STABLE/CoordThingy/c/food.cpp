#include "stdafx.h"
#include "Form1.h"

//INSTANT C++ NOTE: Formerly VB.NET project-level imports:
using namespace System;
using namespace System::Collections;
using namespace System::Collections::Generic;
using namespace System::Data;
using namespace System::Drawing;
using namespace System::Diagnostics;
using namespace System::Windows::Forms;

void WindowsApplication1::DisposeObject(bool disposing)
{
	if (disposing && components != nullptr)
	{
		delete components;
	}
//INSTANT C++ NOTE: There is no call to the base class's Dispose method in C++/CLI:
//	__super.Dispose(disposing)
}

void Form1::InitializeComponent()
{
	System::ComponentModel::ComponentResourceManager ^resources = gcnew System::ComponentModel::ComponentResourceManager(Form1::typeid);
	this->FluffBefore = gcnew System::Windows::Forms::RichTextBox();
	this->FluffAfter = gcnew System::Windows::Forms::RichTextBox();
	this->ActualCoords = gcnew System::Windows::Forms::RichTextBox();
	this->XCoord1 = gcnew System::Windows::Forms::TextBox();
	this->YCoord1 = gcnew System::Windows::Forms::TextBox();
	this->DelButton = gcnew System::Windows::Forms::Button();
	this->ButtonSaveKML = gcnew System::Windows::Forms::Button();
	this->XCoord2 = gcnew System::Windows::Forms::TextBox();
	this->YCoord2 = gcnew System::Windows::Forms::TextBox();
	this->Button4 = gcnew System::Windows::Forms::Button();
	this->YCoord4 = gcnew System::Windows::Forms::TextBox();
	this->YCoord3 = gcnew System::Windows::Forms::TextBox();
	this->XCoord4 = gcnew System::Windows::Forms::TextBox();
	this->XCoord3 = gcnew System::Windows::Forms::TextBox();
	this->LoadedKML = gcnew System::Windows::Forms::RichTextBox();
	this->YDivs = gcnew System::Windows::Forms::TextBox();
	this->XDivs = gcnew System::Windows::Forms::TextBox();
	this->Button1 = gcnew System::Windows::Forms::Button();
	this->TopDistBox = gcnew System::Windows::Forms::TextBox();
	this->LeftDistBox = gcnew System::Windows::Forms::TextBox();
	this->BottomDistBox = gcnew System::Windows::Forms::TextBox();
	this->RightDistBox = gcnew System::Windows::Forms::TextBox();
	this->ClearButton = gcnew System::Windows::Forms::Button();
	this->ButtonSaveAICMD = gcnew System::Windows::Forms::Button();
	this->AICMDFile = gcnew System::Windows::Forms::RichTextBox();
	this->DoYturns = gcnew System::Windows::Forms::CheckBox();
	this->MaxDistance = gcnew System::Windows::Forms::TextBox();
	this->Button2 = gcnew System::Windows::Forms::Button();
	this->PredictedWaypoints = gcnew System::Windows::Forms::TextBox();
	this->AspectRatio = gcnew System::Windows::Forms::TextBox();
	this->Feet = gcnew System::Windows::Forms::RadioButton();
	this->Meters = gcnew System::Windows::Forms::RadioButton();
	this->SuspendLayout();
	//
	//FluffBefore
	//
	this->FluffBefore->Location = System::Drawing::Point(372, 49);
	this->FluffBefore->Name = "FluffBefore";
	this->FluffBefore->Size = System::Drawing::Size(232, 21);
	this->FluffBefore->TabIndex = 0;
	this->FluffBefore->Text = resources->GetString("FluffBefore.Text");
	this->FluffBefore->Visible = false;
	//
	//FluffAfter
	//
	this->FluffAfter->Location = System::Drawing::Point(372, 121);
	this->FluffAfter->Name = "FluffAfter";
	this->FluffAfter->Size = System::Drawing::Size(244, 19);
	this->FluffAfter->TabIndex = 1;
	this->FluffAfter->Text = "" + "\n" + "\t" + "\t" + "\t" + "</coordinates>" + "\n" + "\t" + "\t" + "</LineString>" + "\n" + "\t" + "</Placemark>" + "\n" + "</Document>" + "\n" + "</kml>";
	this->FluffAfter->Visible = false;
	//
	//ActualCoords
	//
	this->ActualCoords->Location = System::Drawing::Point(361, 40);
	this->ActualCoords->Name = "ActualCoords";
	this->ActualCoords->Size = System::Drawing::Size(255, 129);
	this->ActualCoords->TabIndex = 2;
	this->ActualCoords->Text = "";
	//
	//XCoord1
	//
	this->XCoord1->Location = System::Drawing::Point(14, 41);
	this->XCoord1->Name = "XCoord1";
	this->XCoord1->Size = System::Drawing::Size(100, 20);
	this->XCoord1->TabIndex = 3;
	//
	//YCoord1
	//
	this->YCoord1->Location = System::Drawing::Point(14, 67);
	this->YCoord1->Name = "YCoord1";
	this->YCoord1->Size = System::Drawing::Size(100, 20);
	this->YCoord1->TabIndex = 4;
	//
	//DelButton
	//
	this->DelButton->Location = System::Drawing::Point(570, 172);
	this->DelButton->Name = "DelButton";
	this->DelButton->Size = System::Drawing::Size(46, 43);
	this->DelButton->TabIndex = 8;
	this->DelButton->Text = "Delete Last";
	this->DelButton->UseVisualStyleBackColor = true;
	//
	//ButtonSaveKML
	//
	this->ButtonSaveKML->Location = System::Drawing::Point(106, 2);
	this->ButtonSaveKML->Name = "ButtonSaveKML";
	this->ButtonSaveKML->Size = System::Drawing::Size(75, 23);
	this->ButtonSaveKML->TabIndex = 9;
	this->ButtonSaveKML->Text = "Save KML";
	this->ButtonSaveKML->UseVisualStyleBackColor = true;
	//
	//XCoord2
	//
	this->XCoord2->Location = System::Drawing::Point(14, 169);
	this->XCoord2->Name = "XCoord2";
	this->XCoord2->Size = System::Drawing::Size(100, 20);
	this->XCoord2->TabIndex = 3;
	//
	//YCoord2
	//
	this->YCoord2->Location = System::Drawing::Point(14, 195);
	this->YCoord2->Name = "YCoord2";
	this->YCoord2->Size = System::Drawing::Size(100, 20);
	this->YCoord2->TabIndex = 4;
	//
	//Button4
	//
	this->Button4->Location = System::Drawing::Point(14, 2);
	this->Button4->Name = "Button4";
	this->Button4->Size = System::Drawing::Size(86, 23);
	this->Button4->TabIndex = 18;
	this->Button4->Text = "Load Corners";
	this->Button4->UseVisualStyleBackColor = true;
	//
	//YCoord4
	//
	this->YCoord4->Location = System::Drawing::Point(234, 67);
	this->YCoord4->Name = "YCoord4";
	this->YCoord4->Size = System::Drawing::Size(100, 20);
	this->YCoord4->TabIndex = 23;
	//
	//YCoord3
	//
	this->YCoord3->Location = System::Drawing::Point(234, 195);
	this->YCoord3->Name = "YCoord3";
	this->YCoord3->Size = System::Drawing::Size(100, 20);
	this->YCoord3->TabIndex = 24;
	//
	//XCoord4
	//
	this->XCoord4->Location = System::Drawing::Point(234, 41);
	this->XCoord4->Name = "XCoord4";
	this->XCoord4->Size = System::Drawing::Size(100, 20);
	this->XCoord4->TabIndex = 21;
	//
	//XCoord3
	//
	this->XCoord3->Location = System::Drawing::Point(234, 169);
	this->XCoord3->Name = "XCoord3";
	this->XCoord3->Size = System::Drawing::Size(100, 20);
	this->XCoord3->TabIndex = 22;
	//
	//LoadedKML
	//
	this->LoadedKML->Location = System::Drawing::Point(360, 81);
	this->LoadedKML->Name = "LoadedKML";
	this->LoadedKML->Size = System::Drawing::Size(303, 16);
	this->LoadedKML->TabIndex = 29;
	this->LoadedKML->Text = "";
	this->LoadedKML->Visible = false;
	//
	//YDivs
	//
	this->YDivs->Location = System::Drawing::Point(297, 282);
	this->YDivs->Name = "YDivs";
	this->YDivs->ReadOnly = true;
	this->YDivs->Size = System::Drawing::Size(36, 20);
	this->YDivs->TabIndex = 32;
	this->YDivs->Text = "20";
	//
	//XDivs
	//
	this->XDivs->Location = System::Drawing::Point(297, 256);
	this->XDivs->Name = "XDivs";
	this->XDivs->Size = System::Drawing::Size(36, 20);
	this->XDivs->TabIndex = 31;
	this->XDivs->Text = "20";
	//
	//Button1
	//
	this->Button1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
	this->Button1->Enabled = false;
	this->Button1->Font = gcnew System::Drawing::Font("Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, System::Convert::ToByte(0));
	this->Button1->Location = System::Drawing::Point(203, 256);
	this->Button1->Name = "Button1";
	this->Button1->Size = System::Drawing::Size(88, 46);
	this->Button1->TabIndex = 36;
	this->Button1->Text = "Generate Grid";
	this->Button1->UseVisualStyleBackColor = true;
	//
	//TopDistBox
	//
	this->TopDistBox->Location = System::Drawing::Point(141, 41);
	this->TopDistBox->Name = "TopDistBox";
	this->TopDistBox->ReadOnly = true;
	this->TopDistBox->Size = System::Drawing::Size(80, 20);
	this->TopDistBox->TabIndex = 37;
	this->TopDistBox->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
	//
	//LeftDistBox
	//
	this->LeftDistBox->Location = System::Drawing::Point(14, 111);
	this->LeftDistBox->Name = "LeftDistBox";
	this->LeftDistBox->ReadOnly = true;
	this->LeftDistBox->Size = System::Drawing::Size(93, 20);
	this->LeftDistBox->TabIndex = 38;
	this->LeftDistBox->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
	//
	//BottomDistBox
	//
	this->BottomDistBox->Location = System::Drawing::Point(141, 169);
	this->BottomDistBox->Name = "BottomDistBox";
	this->BottomDistBox->ReadOnly = true;
	this->BottomDistBox->Size = System::Drawing::Size(80, 20);
	this->BottomDistBox->TabIndex = 39;
	this->BottomDistBox->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
	//
	//RightDistBox
	//
	this->RightDistBox->Location = System::Drawing::Point(234, 110);
	this->RightDistBox->Name = "RightDistBox";
	this->RightDistBox->ReadOnly = true;
	this->RightDistBox->Size = System::Drawing::Size(93, 20);
	this->RightDistBox->TabIndex = 40;
	this->RightDistBox->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
	//
	//ClearButton
	//
	this->ClearButton->Location = System::Drawing::Point(570, 220);
	this->ClearButton->Name = "ClearButton";
	this->ClearButton->Size = System::Drawing::Size(46, 22);
	this->ClearButton->TabIndex = 41;
	this->ClearButton->Text = "Clear";
	this->ClearButton->UseVisualStyleBackColor = true;
	//
	//ButtonSaveAICMD
	//
	this->ButtonSaveAICMD->Location = System::Drawing::Point(187, 2);
	this->ButtonSaveAICMD->Name = "ButtonSaveAICMD";
	this->ButtonSaveAICMD->Size = System::Drawing::Size(79, 23);
	this->ButtonSaveAICMD->TabIndex = 42;
	this->ButtonSaveAICMD->Text = "Save AICMD";
	this->ButtonSaveAICMD->UseVisualStyleBackColor = true;
	//
	//AICMDFile
	//
	this->AICMDFile->Location = System::Drawing::Point(361, 175);
	this->AICMDFile->Name = "AICMDFile";
	this->AICMDFile->Size = System::Drawing::Size(203, 132);
	this->AICMDFile->TabIndex = 43;
	this->AICMDFile->Text = "";
	//
	//DoYturns
	//
	this->DoYturns->AutoSize = true;
	this->DoYturns->Location = System::Drawing::Point(326, 285);
	this->DoYturns->Name = "DoYturns";
	this->DoYturns->Size = System::Drawing::Size(15, 14);
	this->DoYturns->TabIndex = 44;
	this->DoYturns->UseVisualStyleBackColor = true;
	//
	//MaxDistance
	//
	this->MaxDistance->Location = System::Drawing::Point(87, 258);
	this->MaxDistance->Name = "MaxDistance";
	this->MaxDistance->Size = System::Drawing::Size(48, 20);
	this->MaxDistance->TabIndex = 45;
	this->MaxDistance->Text = "2.0";
	//
	//Button2
	//
	this->Button2->Enabled = false;
	this->Button2->Location = System::Drawing::Point(47, 285);
	this->Button2->Name = "Button2";
	this->Button2->Size = System::Drawing::Size(88, 20);
	this->Button2->TabIndex = 46;
	this->Button2->Text = "Get Divisions";
	this->Button2->UseVisualStyleBackColor = true;
	//
	//PredictedWaypoints
	//
	this->PredictedWaypoints->Location = System::Drawing::Point(285, 220);
	this->PredictedWaypoints->Name = "PredictedWaypoints";
	this->PredictedWaypoints->ReadOnly = true;
	this->PredictedWaypoints->Size = System::Drawing::Size(48, 20);
	this->PredictedWaypoints->TabIndex = 48;
	//
	//AspectRatio
	//
	this->AspectRatio->Location = System::Drawing::Point(83, 220);
	this->AspectRatio->Name = "AspectRatio";
	this->AspectRatio->ReadOnly = true;
	this->AspectRatio->Size = System::Drawing::Size(80, 20);
	this->AspectRatio->TabIndex = 50;
	this->AspectRatio->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
	//
	//Feet
	//
	this->Feet->AutoSize = true;
	this->Feet->Location = System::Drawing::Point(141, 275);
	this->Feet->Name = "Feet";
	this->Feet->Size = System::Drawing::Size(46, 17);
	this->Feet->TabIndex = 56;
	this->Feet->Text = "Feet";
	this->Feet->UseVisualStyleBackColor = true;
	//
	//Meters
	//
	this->Meters->AutoSize = true;
	this->Meters->Checked = true;
	this->Meters->Location = System::Drawing::Point(141, 259);
	this->Meters->Name = "Meters";
	this->Meters->Size = System::Drawing::Size(57, 17);
	this->Meters->TabIndex = 57;
	this->Meters->TabStop = true;
	this->Meters->Text = "Meters";
	this->Meters->UseVisualStyleBackColor = true;
	//
	//Form1
	//
	this->AutoScaleDimensions = System::Drawing::SizeF(safe_cast<float>(6.0), safe_cast<float>(13.0));
	this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
	this->ClientSize = System::Drawing::Size(616, 310);
	this->Controls->Add(this->RightDistBox);
	this->Controls->Add(this->ButtonSaveKML);
	this->Controls->Add(this->Meters);
	this->Controls->Add(this->Feet);
	this->Controls->Add(this->AspectRatio);
	this->Controls->Add(this->PredictedWaypoints);
	this->Controls->Add(this->Button2);
	this->Controls->Add(this->MaxDistance);
	this->Controls->Add(this->AICMDFile);
	this->Controls->Add(this->ButtonSaveAICMD);
	this->Controls->Add(this->ClearButton);
	this->Controls->Add(this->BottomDistBox);
	this->Controls->Add(this->LeftDistBox);
	this->Controls->Add(this->TopDistBox);
	this->Controls->Add(this->Button1);
	this->Controls->Add(this->XDivs);
	this->Controls->Add(this->LoadedKML);
	this->Controls->Add(this->YCoord4);
	this->Controls->Add(this->YCoord3);
	this->Controls->Add(this->XCoord4);
	this->Controls->Add(this->XCoord3);
	this->Controls->Add(this->Button4);
	this->Controls->Add(this->DelButton);
	this->Controls->Add(this->YCoord2);
	this->Controls->Add(this->YCoord1);
	this->Controls->Add(this->XCoord2);
	this->Controls->Add(this->XCoord1);
	this->Controls->Add(this->FluffAfter);
	this->Controls->Add(this->FluffBefore);
	this->Controls->Add(this->ActualCoords);
	this->Controls->Add(this->DoYturns);
	this->Controls->Add(this->YDivs);
	this->Name = "Form1";
	this->Text = "NAVCOM AI Waypoint Generator for Survey Work";
	this->ResumeLayout(false);
	this->PerformLayout();

	//INSTANT C++ NOTE: Converted event handlers:
	__super->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
	DelButton->Click += gcnew System::EventHandler(this, &Form1::DelButton_Click);
	ButtonSaveKML->Click += gcnew System::EventHandler(this, &Form1::Button3_Click);
	Button4->Click += gcnew System::EventHandler(this, &Form1::Button4_Click);
	Button1->Click += gcnew System::EventHandler(this, &Form1::Button1_Click_1);
	ClearButton->Click += gcnew System::EventHandler(this, &Form1::ClearButton_Click);
	ButtonSaveAICMD->Click += gcnew System::EventHandler(this, &Form1::Button5_Click);
	Button2->Click += gcnew System::EventHandler(this, &Form1::Button2_Click);
	XDivs->TextChanged += gcnew System::EventHandler(this, &Form1::XDivs_TextChanged);
	Feet->CheckedChanged += gcnew System::EventHandler(this, &Form1::RadioButton1_CheckedChanged);
	Meters->CheckedChanged += gcnew System::EventHandler(this, &Form1::Meters_CheckedChanged);

}

void Form1::Form1_Load(System::Object ^sender, System::EventArgs ^e)
{
	xx = gcnew array<double>(100001);
	yy = gcnew array<double>(100001);
	MeterMult = 1.0;
}

double Form1::LatMeters(double lat)
{
	return (111132.92) - 559.82 * Math::Cos(2 * lat) + 1.175 * Math::Cos(4 * lat) - 0.0023 * Math::Cos(6 * lat);
}

double Form1::LonMeters(double lat)
{
	// latlen =   111132.92 + -559.82*cos(2x) + 1.175*cos(4x) +  -0.0023*cos(6x)
	// lonlen =   111412.84*cox(x) + -93.5*cos(3x) + 0.118*cos(5x)
	return (Math::Cos(lat) * 111412.84) - 93.5 * Math::Cos(3 * lat) + 0.118 * Math::Cos(5 * lat);
}

void Form1::WriteCoord(double x, double y)
{
	if (ActualCoords->Text->CompareTo(""))
	{
		ActualCoords->AppendText(System::Environment::NewLine);
	}
	ActualCoords->AppendText(x.ToString());
	ActualCoords->AppendText(",");
	ActualCoords->AppendText(y.ToString());
	ActualCoords->AppendText(",0     ");
	ActualCoords->ScrollToCaret();
	int xxx = System::Convert::ToInt32(Math::Round(x * 60 * 10000)); // in milliminutes for NAVCOM AI use
	int yyy = System::Convert::ToInt32(Math::Round(y * 60 * 10000)); // in milliminutes for NAVCOM AI use
	if (AICMDFile->Text->CompareTo(""))
	{
		AICMDFile->AppendText(System::Environment::NewLine);
	}
	AICMDFile->AppendText("@WW ");
	AICMDFile->AppendText((AICMDFile->Lines->Length + 1)->ToString());
	AICMDFile->AppendText(" ");
	AICMDFile->AppendText(yyy.ToString());
	AICMDFile->AppendText(" ");
	AICMDFile->AppendText(xxx.ToString());
	AICMDFile->ScrollToCaret();
}

void Form1::Button1_Click(System::Object ^sender, System::EventArgs ^e)
{
	if (CheckInputs() == false)
	{
		return;
	}
	WriteCoordPair(x1, y1, x2, y2);
}

void Form1::DelButton_Click(System::Object ^sender, System::EventArgs ^e)
{
	array<System::String^> ^myData = nullptr;
	System::String ^lines = nullptr;
	System::String ^outputString = nullptr;
	lines = ActualCoords->Text;
	myData = lines->Split('\n');
	outputString = System::String::Join("\n", myData, 0, myData->Length - 1);
	ActualCoords->Clear();
	ActualCoords->AppendText(outputString);
	lines = AICMDFile->Text;
	myData = lines->Split('\n');
	outputString = System::String::Join("\n", myData, 0, myData->Length - 1);
	AICMDFile->Clear();
	AICMDFile->AppendText(outputString);
}

void Form1::Button3_Click(System::Object ^sender, System::EventArgs ^e)
{
	SaveFileDialog ^SaveHere = gcnew SaveFileDialog();
	SaveHere->Filter = "KML files (*.kml)|*.kml";
	SaveHere->FilterIndex = 2;
	SaveHere->RestoreDirectory = true;
	if (SaveHere->ShowDialog() == System::Windows::Forms::DialogResult::OK)
	{
		FluffBefore->AppendText(ActualCoords->Text);
		FluffBefore->AppendText(FluffAfter->Text);
		FluffBefore->SaveFile(SaveHere->FileName, RichTextBoxStreamType::PlainText);
		FluffBefore->Undo();
		FluffBefore->Undo();
		ActualCoords->Clear();
	}
}

bool Form1::CheckInputs()
{
	try
	{
		y1 = System::Convert::ToDouble(YCoord1->Text->ToString());
	}
	catch (Exception ^ex)
	{
		YCoord1->Clear();
		return false;
	}

	try
	{
		x1 = System::Convert::ToDouble(XCoord1->Text->ToString());
	}
	catch (Exception ^ex)
	{
		XCoord1->Clear();
		return false;
	}
	try
	{
		y2 = System::Convert::ToDouble(YCoord2->Text->ToString());
	}
	catch (Exception ^ex)
	{
		YCoord2->Clear();
		return false;
	}

	try
	{
		x2 = System::Convert::ToDouble(XCoord2->Text->ToString());
	}
	catch (Exception ^ex)
	{
		XCoord2->Clear();
		return false;
	}
	try
	{
		y3 = System::Convert::ToDouble(YCoord3->Text->ToString());
	}
	catch (Exception ^ex)
	{
		YCoord3->Clear();
		return false;
	}

	try
	{
		x3 = System::Convert::ToDouble(XCoord3->Text->ToString());
	}
	catch (Exception ^ex)
	{
		XCoord3->Clear();
		return false;
	}
	try
	{
		y4 = System::Convert::ToDouble(YCoord4->Text->ToString());
	}
	catch (Exception ^ex)
	{
		YCoord4->Clear();
		return false;
	}
	try
	{
		x4 = System::Convert::ToDouble(XCoord4->Text->ToString());
	}
	catch (Exception ^ex)
	{
		XCoord4->Clear();
		return false;
	}
	return true;
}

double Form1::RoundToDigits(System::Object ^roundme, System::Object ^decimals)
{
	return Math::Round(roundme * ((System::Math::Pow(10, decimals)))) / ((System::Math::Pow(10, decimals)));
}

void Form1::UpdateCoordBoxes()
{
	if (Meters->Checked)
	{
		MeterMult = 1.0;
	}
	if (Feet->Checked)
	{
		MeterMult = 3.2808399;
	}
	XCoord3->Text = x3.ToString();
	XCoord4->Text = x4.ToString();
	YCoord3->Text = y3.ToString();
	YCoord4->Text = y4.ToString();
	XCoord1->Text = x1.ToString();
	XCoord2->Text = x2.ToString();
	YCoord1->Text = y1.ToString();
	YCoord2->Text = y2.ToString();
	TopDistBox->Text = (RoundToDigits(MeterMult * TopDist, 3))->ToString();
	BottomDistBox->Text = (RoundToDigits(MeterMult * BottomDist, 3))->ToString();
	RightDistBox->Text = (RoundToDigits(MeterMult * RightDist, 3))->ToString();
	LeftDistBox->Text = (RoundToDigits(MeterMult * LeftDist, 3))->ToString();
	AspectRatio->Text = (RoundToDigits(AspectR, 3))->ToString() + "  : 1";
}

void Form1::Button4_Click(System::Object ^sender, System::EventArgs ^e)
{
	OpenFileDialog ^SaveHere = gcnew OpenFileDialog(); //SaveFileDialog()
	SaveHere->Filter = "KML files (*.kml)|*.kml";
	SaveHere->FilterIndex = 2;
	SaveHere->RestoreDirectory = true;
	Button1->Enabled = true;
	Button2->Enabled = true;
	if (SaveHere->ShowDialog() == System::Windows::Forms::DialogResult::OK)
	{
		LoadedKML->LoadFile(SaveHere->FileName, RichTextBoxStreamType::PlainText);
	}
	int CoordsAreHere = LoadedKML->Find("<coordinates>") + 13; // length of "<coordinates>"
	int CoordsAreDone = LoadedKML->Find("</coordinates>");
	System::String ^CutTheFat = LoadedKML->Text->ToString()->Substring(CoordsAreHere, (CoordsAreDone - CoordsAreHere));
	array<System::String^> ^Coords = CutTheFat->Split(' ');
	array<double> ^V = {0.0};
	V = gcnew array<double>(21);
	int I = 0;
	array<System::String^> ^CoordStr = nullptr;
	for (I = 0; I <= 3; I++)
	{
		CoordStr = Coords[I]->Split(',');
		V[((I) * 2) + 0] = System::Convert::ToDouble(CoordStr[0]);
		V[((I) * 2) + 1] = System::Convert::ToDouble(CoordStr[1]);
	}
	x1 = V[0]; //Math.Min(V(0), V(6)) 'V(0) ' top left xmin,ymax
	y1 = V[1]; //Math.Max(V(1), V(3)) 'V(1) ' top left xmin,ymax
	x2 = V[2]; //Math.Min(V(2), V(4)) 'V(2) ' bottom left xmin,ymin
	y2 = V[3]; //Math.Min(V(1), V(3)) 'V(3) ' bottom left xmin,ymin
	x3 = V[4]; //Math.Max(V(2), V(4)) 'V(4) ' bottom right xmax, ymin
	y3 = V[5]; //Math.Min(V(5), V(7)) 'V(5) ' bottom right xmax, ymin
	x4 = V[6]; //Math.Max(V(0), V(6)) 'V(6) ' top right xmax, ymax
	y4 = V[7]; //Math.Max(V(5), V(7)) 'V(7) ' top right xmax, ymax
	TopDist = MeterDist(x1, y1, x4, y4);
	LeftDist = MeterDist(x1, y1, x2, y2);
	BottomDist = MeterDist(x2, y2, x3, y3);
	RightDist = MeterDist(x3, y3, x4, y4);
	AspectR = (TopDist + BottomDist) / (LeftDist + RightDist);
	UpdateCoordBoxes();
}

double Form1::Dist(System::Object ^x1, System::Object ^y1, System::Object ^x2, System::Object ^y2)
{
	return Math::Sqrt(((System::Math::Pow((x2 - x1), 2.0))) + ((System::Math::Pow((y2 - y1), 2.0))));
}

System::Object ^Form1::MeterDist(System::Object ^lon1, System::Object ^lat1, System::Object ^lon2, System::Object ^lat2)
{
	double LatAvg = (lat1 + lat2) / 2;
	double FactLon = LonMeters(LatAvg) * (lon1 - lon2);
	double FactLat = LatMeters(LatAvg) * (lat1 - lat2);
	return Math::Sqrt(((System::Math::Pow(FactLon, 2))) + ((System::Math::Pow(FactLat, 2)))) * 1.25;
}

double Form1::Gradient(System::Object ^zeroval, System::Object ^oneval, System::Object ^numerator, System::Object ^denominator)
{
	return ((oneval * numerator / denominator) + (zeroval * (denominator - numerator) / denominator));
}

double Form1::Gradient(System::Object ^zeroval, System::Object ^oneval, System::Object ^numerator)
{
	return ((oneval * numerator) + (zeroval * (1.0 - numerator)));
}

void Form1::Button1_Click_1(System::Object ^sender, System::EventArgs ^e)
{
	Button1->Enabled = ButtonSaveKML->Enabled == ButtonSaveAICMD->Enabled == Button4->Enabled == false;
	int xcount = 0;
	int ycount = 0;
	int offset = 0;
	int bigdiv = 0;
	int smalldiv = 0;
	try
	{
		xdiv = System::Convert::ToInt32(XDivs->Text);
		ydiv = System::Convert::ToInt32(YDivs->Text);
	}
	catch (Exception ^ex)
	{
		XDivs->Text = "10";
		XDivs_TextChanged(nullptr, nullptr);
		xdiv = System::Convert::ToInt32(XDivs->Text);
		ydiv = System::Convert::ToInt32(YDivs->Text);
	}
	double dxdiv = System::Convert::ToDouble(xdiv);
	double dydiv = System::Convert::ToDouble(ydiv);
	offset = 0;
	if (DoYturns->Checked)
	{
		bigdiv = xdiv;
		smalldiv = ydiv;
		for (xcount = 1; xcount <= xdiv; xcount += 2)
		{
			for (ycount = 0; ycount <= (ydiv - 1); ycount++)
			{
				double xquot = System::Convert::ToDouble(xcount) / dxdiv;
				double yquot = System::Convert::ToDouble(ycount) / (dydiv - 1);
				xx[(xcount * ydiv) + ycount] = Gradient(Gradient(x1, x4, xquot), Gradient(x2, x3, xquot), yquot);
				yy[(xcount * ydiv) + ycount] = Gradient(Gradient(y1, y2, yquot), Gradient(y4, y3, yquot), xquot);
				offset = offset + 1;
			}
			offset = offset + 1;
		}
		for (xcount = 0; xcount <= xdiv; xcount += 2)
		{
			for (ycount = 0; ycount <= (ydiv - 1); ycount++)
			{
				double xquot = System::Convert::ToDouble(xcount) / dxdiv;
				double yquot = System::Convert::ToDouble(ycount) / (dydiv - 1);
				xx[(xcount * ydiv) + (ydiv - 1) - ycount] = Gradient(Gradient(x1, x4, xquot), Gradient(x2, x3, xquot), yquot);
				yy[(xcount * ydiv) + (ydiv - 1) - ycount] = Gradient(Gradient(y1, y2, yquot), Gradient(y4, y3, yquot), xquot);
				offset = offset + 1;
			}
			offset = offset + 1;
		}
	}
	else
	{
		bigdiv = ydiv;
		smalldiv = xdiv;
		for (ycount = 1; ycount <= ydiv; ycount += 2)
		{
			for (xcount = 0; xcount <= (xdiv - 1); xcount++)
			{
				double xquot = System::Convert::ToDouble(xcount) / (dxdiv - 1);
				double yquot = System::Convert::ToDouble(ycount) / dydiv;
				xx[(ycount * xdiv) + xcount] = Gradient(Gradient(x1, x4, xquot), Gradient(x2, x3, xquot), yquot);
				yy[(ycount * xdiv) + xcount] = Gradient(Gradient(y1, y2, yquot), Gradient(y4, y3, yquot), xquot);
				offset = offset + 1;
			}
		}
		for (ycount = 0; ycount <= ydiv; ycount += 2)
		{
			for (xcount = 0; xcount <= (xdiv - 1); xcount++)
			{
				double xquot = System::Convert::ToDouble(xcount) / (dxdiv - 1);
				double yquot = System::Convert::ToDouble(ycount) / dydiv;
				xx[(ycount * xdiv) + (xdiv - 1) - xcount] = Gradient(Gradient(x1, x4, xquot), Gradient(x2, x3, xquot), yquot);
				yy[(ycount * xdiv) + (xdiv - 1) - xcount] = Gradient(Gradient(y1, y2, yquot), Gradient(y4, y3, yquot), xquot);
				offset = offset + 1;
			}
		}
	}
	for (ycount = 0; ycount <= (offset - 1); ycount++)
	{
		if (xx[ycount] > 0 & yy[ycount] > 0)
		{
			WriteCoord(xx[ycount], yy[ycount]);
		}
		xx[ycount] = yy[ycount] == 0;
	}
	Button1->Enabled = ButtonSaveKML->Enabled == ButtonSaveAICMD->Enabled == Button4->Enabled == true;
}

void Form1::ClearButton_Click(System::Object ^sender, System::EventArgs ^e)
{
	ActualCoords->Clear();
	AICMDFile->Clear();
}

void Form1::Button5_Click(System::Object ^sender, System::EventArgs ^e)
{
	SaveFileDialog ^SaveHere = gcnew SaveFileDialog();

	SaveHere->Filter = "AICMD files (*.aicmd)|*.aicmd";
	SaveHere->FilterIndex = 2;
	SaveHere->RestoreDirectory = true;

	if (SaveHere->ShowDialog() == System::Windows::Forms::DialogResult::OK)
	{
		AICMDFile->ScrollToCaret();
		AICMDFile->AppendText(System::Environment::NewLine + System::Environment::NewLine);
		AICMDFile->SaveFile(SaveHere->FileName, RichTextBoxStreamType::PlainText);
		AICMDFile->Clear();
	}
}

void Form1::Button2_Click(System::Object ^sender, System::EventArgs ^e)
{
	int AbsoluteMaxDivs = 512; //CInt(Math.Truncate(Math.Sqrt(CDbl(MaxWaypoints.Text) - 1)))
	double bigdist = Math::Max(Math::Max(TopDist, BottomDist), Math::Max(LeftDist, RightDist)) * MeterMult;
	int xd = Math::Min(AbsoluteMaxDivs, System::Convert::ToInt32(bigdist / System::Convert::ToDouble(MaxDistance->Text)));
	XDivs->Text = xd.ToString();
	XDivs_TextChanged(nullptr, nullptr);
	//YDivs.Text = xd.ToString
	if (xd == AbsoluteMaxDivs)
	{
		MaxDistance->Text = (bigdist / AbsoluteMaxDivs)->ToString();
	}
}

void Form1::XDivs_TextChanged(System::Object ^sender, System::EventArgs ^e)
{
	try
	{
		if (System::Convert::ToInt32(XDivs->Text) < System::Convert::ToInt32(YDivs->Text))
		{
			DoYturns->Checked = true;
			YDivs->Text = System::Convert::ToInt32(System::Convert::ToDouble(XDivs->Text) / AspectR)->ToString();
		}
		else
		{
			DoYturns->Checked = false;
			YDivs->Text = System::Convert::ToInt32(System::Convert::ToDouble(XDivs->Text) / AspectR)->ToString();
		}
	}
	catch (Exception ^ex)
	{
		YDivs->Text = "0";
		XDivs->Text = "";
	}
	try
	{
		PredictedWaypoints->Text = ((System::Convert::ToInt32(XDivs->Text) + 1) * (System::Convert::ToInt32(YDivs->Text) + 1));
	}
	catch(...)
	{
	}
}

void Form1::YDivs_TextChanged(System::Object ^sender, System::EventArgs ^e)
{
	try
	{
		if (System::Convert::ToInt32(XDivs->Text) < System::Convert::ToInt32(YDivs->Text))
		{
			DoYturns->Checked = true;
		}
		else
		{
			DoYturns->Checked = false;
		}
	}
	catch (Exception ^ex)
	{
	}
}

void Form1::RadioButton1_CheckedChanged(System::Object ^sender, System::EventArgs ^e)
{
	if (Feet->Checked)
	{
		UpdateCoordBoxes();
	}
}

void Form1::Meters_CheckedChanged(System::Object ^sender, System::EventArgs ^e)
{
	if (Meters->Checked)
	{
		UpdateCoordBoxes();
	}
}