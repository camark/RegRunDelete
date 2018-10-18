object FormLinkArrow: TFormLinkArrow
  Left = 0
  Top = 0
  Caption = 'Link Arrow'
  ClientHeight = 406
  ClientWidth = 609
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'Tahoma'
  Font.Style = []
  FormStyle = fsMDIChild
  OldCreateOrder = False
  Visible = True
  OnClose = FormClose
  PixelsPerInch = 96
  TextHeight = 13
  object btn1: TButton
    Left = 80
    Top = 32
    Width = 281
    Height = 41
    Caption = 'Make Shortcut Arrow Disappear'
    TabOrder = 0
    OnClick = btn1Click
  end
end
