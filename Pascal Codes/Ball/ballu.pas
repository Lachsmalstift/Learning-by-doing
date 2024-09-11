unit BallU;

{$mode objfpc}{$H+}

interface

uses
  Classes, SysUtils, FileUtil, Forms, Controls, Graphics, Dialogs, ExtCtrls;

type

  { TForm1 }

  TForm1 = class(TForm)
    SBall1: TShape;
    SBall2: TShape;
    TBall: TTimer;
    TBall2: TTimer;
    procedure FormCreate(Sender: TObject);
    procedure TBall2Timer(Sender: TObject);
    procedure TBallTimer(Sender: TObject);
  private

  public

  end;

var
  Form1: TForm1;
  d1x, d1y, d2x, d2y:integer;

implementation

{$R *.lfm}

{ TForm1 }

procedure TForm1.TBallTimer(Sender: TObject);
begin
  SBall1.Left:=SBall1.Left+d1x;
  if SBall1.Left>Form1.Width - SBall1.Width then d1x:=-d1x;
  if SBall1.Left<0 then d1x:=-d1x;
  SBall1.Top:=SBall1.Top+d1y;
  if SBall1.Top>Form1.Height - SBall1.Width then d1y:=-d1y;
  if SBall1.Top<0 then d1y:=-d1y;
end;

procedure TForm1.TBall2Timer(Sender: TObject);
begin
  SBall2.Left:=SBall2.Left+d2x;
  if SBall2.Left>Form1.Width - SBall2.Width then d2x:=-d2x;
  if SBall2.Left<0 then d2x:=-d2x;
  SBall2.Top:=SBall2.Top+d2y;
  if SBall2.Top>Form1.Height - SBall2.Width then d2y:=-d2y;
  if SBall2.Top<0 then d2y:=-d2y;
end;

procedure TForm1.FormCreate(Sender: TObject);
begin
  d1x:=-2;
  d1y:=2;
  d2x:=3;
  d2y:=2;
end;

end.

