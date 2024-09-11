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
    Image1: TImage;
    Image2: TImage;
    Image3: TImage;
    Image4: TImage;
    PAmpel1: TPanel;
    PAmpel2: TPanel;
    PAmpel3: TPanel;
    PAmpel4: TPanel;
    Panel1: TPanel;
    Panel2: TPanel;
    Panel3: TPanel;
    Panel4: TPanel;
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
    TI1: TTimer;
    TI2: TTimer;
    TI3: TTimer;
    TI4: TTimer;
    procedure BschaltenClick(Sender: TObject);
    procedure FormCreate(Sender: TObject);
    procedure Image1Click(Sender: TObject);
    procedure Image4Click(Sender: TObject);
    procedure TI1Timer(Sender: TObject);
    procedure TI2Timer(Sender: TObject);
    procedure TI3Timer(Sender: TObject);
    procedure TI4Timer(Sender: TObject);
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
  SRot3.Brush.Color:=SRot1.Brush.Color;
  SGelb3.Brush.Color:=SGelb1.Brush.Color;
  SGruen3.Brush.Color:=SGruen1.Brush.Color;
  SRot4.Brush.Color:=SRot2.Brush.Color;
  SGelb4.Brush.Color:=SGelb2.Brush.Color;
  SGruen4.Brush.Color:=SGruen2.Brush.Color;

end;

procedure TForm1.Image1Click(Sender: TObject);
begin

end;

procedure TForm1.Image4Click(Sender: TObject);
begin

end;

procedure TForm1.TI1Timer(Sender: TObject);
begin
  if (Image1.Top<150) or (Image1.Top>165) or (Srot3.Brush.Color=clBlack) then Image1.Top:=image1.Top+2;
  If Image1.Top>Form1.Height*2 then Image1.top:=-image1.Height*2;
end;

procedure TForm1.TI2Timer(Sender: TObject);
begin
  if (Image2.Top<368) or (Image2.Top>380) or (Srot1.Brush.Color=clBlack) then Image2.Top:=image2.Top-2;
  If Image2.Top<-image2.Height*2 then Image2.top:=Form1.Height*2;
end;

procedure TForm1.TI3Timer(Sender: TObject);
begin
  if (Image3.Left<220) or (Image3.Left>230) or (Srot2.Brush.Color=clBlack) then Image3.Left:=image3.Left+2;
  If Image3.Left>Form1.Width+300 then Image3.Left:=-image3.Width*2;
end;

procedure TForm1.TI4Timer(Sender: TObject);
begin
  if (Image4.Left<488) or (Image4.Left>500) or (Srot4.Brush.Color=clBlack) then Image4.Left:=image4.Left-2;
  If Image4.Left<-500 then Image4.Left:=Form1.Width+300;
end;

procedure TForm1.Timer1Timer(Sender: TObject);
begin
  Bschalten.Click;
end;

procedure TForm1.BschaltenClick(Sender: TObject);
begin
  Phase:=Phase+1;
  If Phase >9 then Phase:=2;
  If Phase=1 then
    begin
      SGelb1.Brush.Color:=clYellow;
      SGelb2.Brush.Color:=clYellow;
    end;
  If Phase=2 then
    begin
      SRot1.Brush.Color:=clRed;
      SGelb1.Brush.Color:=clBlack;
      SRot2.Brush.Color:=clRed;
      SGelb2.Brush.Color:=clBlack;
      timer1.Interval:=2000;
    end;
  If Phase=3 then
    begin
      SGelb1.Brush.Color:=clYellow;
      timer1.Interval:=500;
    end;
  If Phase=4 then
    begin
      SRot1.Brush.Color:=clBlack;
      SGelb1.Brush.Color:=clBlack;
      SGruen1.Brush.Color:=cllime;
      timer1.Interval:=2000;
    end;
  If Phase=5 then
    begin
      SGelb1.Brush.Color:=clYellow;
      SGruen1.Brush.Color:=clblack;
      timer1.Interval:=500;
    end;
  If Phase=6 then
    begin
      SRot1.Brush.Color:=clred;
      SGelb1.Brush.Color:=clBlack;
      timer1.Interval:=2000;
    end;
  If Phase=7 then
    begin
      SGelb2.Brush.Color:=clYellow;
      timer1.Interval:=500;
    end;
  If Phase=8 then
    begin
      SRot2.Brush.Color:=clBlack;
      SGelb2.Brush.Color:=clBlack;
      SGruen2.Brush.Color:=cllime;
      timer1.Interval:=2000;
    end;
  If Phase=9 then
    begin
      SGelb2.Brush.Color:=clyellow;
      SGruen2.Brush.Color:=clblack;
      timer1.Interval:=500;
    end;
   SRot3.Brush.Color:=SRot1.Brush.Color;
  SGelb3.Brush.Color:=SGelb1.Brush.Color;
  SGruen3.Brush.Color:=SGruen1.Brush.Color;
  SRot4.Brush.Color:=SRot2.Brush.Color;
  SGelb4.Brush.Color:=SGelb2.Brush.Color;
  SGruen4.Brush.Color:=SGruen2.Brush.Color;
end;

end.

