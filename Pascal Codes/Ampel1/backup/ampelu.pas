unit AmpelU;

{$mode objfpc}{$H+}

interface

uses
  Classes, SysUtils, FileUtil, Forms, Controls, Graphics, Dialogs, ExtCtrls,
  StdCtrls;

type

  { TForm1 }

  TForm1 = class(TForm)
    BSchalten: TButton;
    PAmpel1: TPanel;
    SGelb1: TShape;
    SGruen1: TShape;
    SRot1: TShape;
    procedure BSchaltenClick(Sender: TObject);
    procedure FormCreate(Sender: TObject);
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
end;

procedure TForm1.BSchaltenClick(Sender: TObject);
begin
  Phase:=Phase+1;
  if phase > 4 then Phase:=1;
  If Phase=1 then SGelb1.Brush.Color:=clYellow;
  If Phase=2 then
    begin
      SGelb1.Brush.Color:=clBlack;
      SRot1.Brush.Color:=clRed;
    end;
  If Phase=3 then SGelb1.Brush.Color:=clYellow;
  If Phase=4 then
    begin
      SGelb1.Brush.Color:=clBlack;
      SRot1.Brush.Color:=clBlack;
      SGruen1.Brush.Color:=clLime;
    end;
end;

end.

