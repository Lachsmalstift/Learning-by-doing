unit SchleifenU;

{$mode objfpc}{$H+}

interface

uses
  Classes, SysUtils, FileUtil, Forms, Controls, Graphics, Dialogs, StdCtrls;

type

  { TForm1 }

  TForm1 = class(TForm)
    Button1: TButton;
    Button2: TButton;
    Button3: TButton;
    Memo1: TMemo;
    procedure Button1Click(Sender: TObject);
    procedure Button2Click(Sender: TObject);
    procedure Button3Click(Sender: TObject);
    procedure FormCreate(Sender: TObject);
  private

  public

  end;

var
  Form1: TForm1;
  i,a,b:Integer;

implementation

{$R *.lfm}

{ TForm1 }

procedure TForm1.Button1Click(Sender: TObject);
begin
  memo1.Clear;
  For i:=1 to 10 do
  Begin
    a:=Random(100);
    Memo1.Append(IntToStr(a));
  end;
end;

procedure TForm1.Button2Click(Sender: TObject);
begin
  memo1.Clear;
  i:=0;
  While i<10 do
  Begin
    a:=Random(100);
    Memo1.Append(IntToStr(a));
    i:=i+1;
  end;
end;

procedure TForm1.Button3Click(Sender: TObject);
begin
  memo1.Clear;
  i:=0;
  Repeat
    a:=Random(100);
    Memo1.Append(IntToStr(a));
    i:=i+1;
  until i=10;
end;

procedure TForm1.FormCreate(Sender: TObject);
begin
  Randomize;
end;

end.

