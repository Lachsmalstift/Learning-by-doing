unit FarbmischerU;

{$mode objfpc}{$H+}

interface

uses
  Classes, SysUtils, FileUtil, Forms, Controls, Graphics, Dialogs, StdCtrls,
  ExtCtrls;

type

  { TForm1 }

  TForm1 = class(TForm)
    Label1: TLabel;
    Label2: TLabel;
    Label3: TLabel;
    SBRot: TScrollBar;
    SBGruen: TScrollBar;
    SBBlau: TScrollBar;
    Shape1: TShape;
    procedure SBBlauChange(Sender: TObject);
    procedure SBGruenChange(Sender: TObject);
    procedure SBRotChange(Sender: TObject);
  private

  public

  end;

var
  Form1: TForm1;

implementation

{$R *.lfm}

{ TForm1 }

procedure TForm1.SBRotChange(Sender: TObject);
begin
  Shape1.Brush.Color:=SBRot.Position+SBgruen.Position*256+SBBlau.Position*256*256;
  Form1.Color:=256*256*256-(SBRot.Position+SBgruen.Position*256+SBBlau.Position*256*256);
end;

procedure TForm1.SBGruenChange(Sender: TObject);
begin
  SBRotchange(sender);
end;

procedure TForm1.SBBlauChange(Sender: TObject);
begin
  SBRotchange(sender);
end;

end.

