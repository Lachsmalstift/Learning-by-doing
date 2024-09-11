unit AmpelU;

{$mode objfpc}{$H+}

interface

uses
  Classes, SysUtils, FileUtil, Forms, Controls, Graphics, Dialogs, ExtCtrls,
  StdCtrls;

type

  { TForm1 }

  TForm1 = class(TForm)
    Bschalten: TButton;
    PAmpel1: TPanel;
    PAmpel2: TPanel;
    PAmpel3: TPanel;
    PAmpel4: TPanel;
    Panel1: TPanel;
    SGelb1: TShape;
    SGelb2: TShape;
    SGelb3: TShape;
    SGelb4: TShape;
    SGruen1: TShape;
    SGruen2: TShape;
    SGruen3: TShape;
    SGruen4: TShape;
    SRot1: TShape;
    SRot2: TShape;
    SRot3: TShape;
    SRot4: TShape;
    Timer1: TTimer;
    procedure BschaltenClick(Sender: TObject);
    procedure FormCreate(Sender: TObject);
    procedure Timer1Timer(Sender: TObject);
  private

  public

  end;

var
  Form1: TForm1;
  Phase: Integer;

implementation

{$R *.lfm}

{ TForm1 }

procedure TForm1.FormCreate(Sender: TObject);
begin
  Phase:=0;
  SRot1.Brush.Color:=clBlack;
  SGelb1.Brush.Color:=clBlack;
  SGruen1.Brush.Color:=clBlack;
  SRot2.Brush.Color:=clBlack;
  SGelb2.Brush.Color:=clBlack;
  SGruen2.Brush.Color:=clBlack;
  SRot3.Brush.Color:=clBlack;
  SGelb3.Brush.Color:=clBlack;
  SGruen3.Brush.Color:=clBlack;
  SRot4.Brush.Color:=clBlack;
  SGelb4.Brush.Color:=clBlack;
  SGruen4.Brush.Color:=clBlack;
end;

procedure TForm1.Timer1Timer(Sender: TObject);
begin
  BSchalten.Click;
end;

procedure TForm1.BschaltenClick(Sender: TObject);
begin
  Phase:=Phase+1;
  If Phase >9 then Phase:=2;
  If Phase=1 then
    begin
      SGelb1.Brush.Color:=clYellow;
      SGelb2.Brush.Color:=clYellow;
      Timer1.Interval:=2000;
    end;
  If Phase=2 then
    begin
      SRot1.Brush.Color:=clRed;
      SGelb1.Brush.Color:=clBlack;
      SRot2.Brush.Color:=clRed;
      SGelb2.Brush.Color:=clBlack;
      Timer1.Interval:=3000;
    end;
  If Phase=3 then
    begin
      SGelb1.Brush.Color:=clYellow;
      Timer1.Interval:=500;
    end;
  If Phase=4 then
    begin
      SRot1.Brush.Color:=clBlack;
      SGelb1.Brush.Color:=clBlack;
      SGruen1.Brush.Color:=cllime;
      Timer1.Interval:=3000;
    end;
  If Phase=5 then
    begin
      SGelb1.Brush.Color:=clYellow;
      SGruen1.Brush.Color:=clblack;
      Timer1.Interval:=500;
    end;
  If Phase=6 then
    begin
      SRot1.Brush.Color:=clred;
      SGelb1.Brush.Color:=clBlack;
      Timer1.Interval:=3000;
    end;
  If Phase=7 then
    begin
      SGelb2.Brush.Color:=clYellow;
      Timer1.Interval:=500;
    end;
  If Phase=8 then
    begin
      SRot2.Brush.Color:=clBlack;
      SGelb2.Brush.Color:=clBlack;
      SGruen2.Brush.Color:=cllime;
      Timer1.Interval:=3000;
    end;
  If Phase=9 then
    begin
      SGelb2.Brush.Color:=clyellow;
      SGruen2.Brush.Color:=clblack;
      Timer1.Interval:=500;
    end;
  SRot3.Brush.Color:=SRot1.Brush.Color;
  SGelb3.Brush.Color:=SGelb1.Brush.Color;
  SGruen3.Brush.Color:=SGruen1.Brush.Color;
  SRot4.Brush.Color:=SRot2.Brush.Color;
  SGelb4.Brush.Color:=SGelb2.Brush.Color;
  SGruen4.Brush.Color:=SGruen2.Brush.Color;
end;

end.

