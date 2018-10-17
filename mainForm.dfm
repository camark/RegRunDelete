object Form1: TForm1
  Left = 0
  Top = 0
  BorderIcons = [biSystemMenu, biMinimize]
  Caption = #27880#20876#34920#33258#21160#36816#34892#21024#38500' V1.0 camark@live.cn'
  ClientHeight = 462
  ClientWidth = 733
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'Tahoma'
  Font.Style = []
  OldCreateOrder = False
  Position = poDesktopCenter
  OnCreate = FormCreate
  PixelsPerInch = 96
  TextHeight = 13
  object ListView1: TListView
    Left = 8
    Top = 8
    Width = 717
    Height = 393
    Columns = <
      item
        Caption = #21517#31216
        Width = 150
      end
      item
        Caption = #31243#24207#36335#24452
        Width = 250
      end
      item
        Caption = #27880#20876#34920#36335#24452
        Width = 250
      end>
    RowSelect = True
    TabOrder = 0
    ViewStyle = vsReport
  end
  object Button1: TButton
    Left = 328
    Top = 416
    Width = 75
    Height = 25
    Caption = #21024#38500
    TabOrder = 1
    OnClick = Button1Click
  end
  object btn1: TBitBtn
    Left = 608
    Top = 416
    Width = 75
    Height = 25
    Kind = bkClose
    NumGlyphs = 2
    TabOrder = 2
    OnClick = btn1Click
  end
end
