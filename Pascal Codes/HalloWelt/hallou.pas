unit HalloU;

{$mode objfpc}{$H+}

interface

uses
  Classes, SysUtils, FileUtil, Forms, Controls, Graphics, Dialogs, StdCtrls;

type

  { TForm1 }

  TForm1 = class(TForm)
    BHallo: TButton;
    procedure BHalloClick(Sender: TObject);
  private

  public

  end;

var
  Form1: TForm1;

implementation

{$R *.lfm}

{ TForm1 }

procedure TForm1.BHalloClick(Sender: TObject);
begin
  if BHallo.Caption='Hallo Welt' then BHallo.Caption:='Selber Hallo'
    else BHallo.Caption:='Hallo Welt';
end;

end.

