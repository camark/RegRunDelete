object FrmSoftUninstall: TFrmSoftUninstall
  Left = 0
  Top = 0
  Caption = #36719#20214#32500#25252
  ClientHeight = 498
  ClientWidth = 739
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'Tahoma'
  Font.Style = []
  OldCreateOrder = False
  PixelsPerInch = 96
  TextHeight = 13
  object Splitter1: TSplitter
    Left = 0
    Top = 217
    Width = 739
    Height = 3
    Cursor = crVSplit
    Align = alTop
    ExplicitWidth = 281
  end
  object Panel1: TPanel
    Left = 0
    Top = 0
    Width = 739
    Height = 217
    Align = alTop
    Caption = 'Panel1'
    TabOrder = 0
    object ToolBar1: TToolBar
      Left = 1
      Top = 1
      Width = 737
      Height = 29
      ButtonHeight = 21
      ButtonWidth = 31
      Caption = 'ToolBar1'
      ShowCaptions = True
      TabOrder = 0
      object ToolButton1: TToolButton
        Left = 0
        Top = 0
        Caption = #21368#36733
        ImageIndex = 0
      end
      object ToolButton2: TToolButton
        Left = 31
        Top = 0
        Caption = #20462#25913
        ImageIndex = 1
      end
      object ToolButton3: TToolButton
        Left = 62
        Top = 0
        Caption = #20462#22797
        ImageIndex = 2
      end
    end
    object lvUsers: TListView
      Left = 1
      Top = 30
      Width = 737
      Height = 186
      Align = alClient
      Columns = <
        item
          Caption = #36719#20214#21517#31216
          Width = 150
        end
        item
          Caption = #29256#26412
          Width = 150
        end
        item
          Caption = #21378#21830
          Width = 150
        end
        item
          Caption = #26085#26399
          Width = 100
        end
        item
          Caption = #23433#35013#36335#24452
          Width = 150
        end>
      TabOrder = 1
      ViewStyle = vsReport
      ExplicitLeft = 24
      ExplicitTop = 80
      ExplicitWidth = 250
      ExplicitHeight = 150
    end
  end
  object Panel2: TPanel
    Left = 0
    Top = 220
    Width = 739
    Height = 278
    Align = alClient
    Caption = 'Panel1'
    TabOrder = 1
    ExplicitTop = 8
    ExplicitHeight = 217
    object ToolBar2: TToolBar
      Left = 1
      Top = 1
      Width = 737
      Height = 29
      ButtonHeight = 21
      ButtonWidth = 31
      Caption = 'ToolBar1'
      ShowCaptions = True
      TabOrder = 0
      object ToolButton4: TToolButton
        Left = 0
        Top = 0
        Caption = #21368#36733
        ImageIndex = 0
      end
      object ToolButton5: TToolButton
        Left = 31
        Top = 0
        Caption = #20462#25913
        ImageIndex = 1
      end
      object ToolButton6: TToolButton
        Left = 62
        Top = 0
        Caption = #20462#22797
        ImageIndex = 2
      end
    end
    object ListView1: TListView
      Left = 1
      Top = 30
      Width = 737
      Height = 247
      Align = alClient
      Columns = <
        item
          Caption = #36719#20214#21517#31216
          Width = 150
        end
        item
          Caption = #29256#26412
          Width = 150
        end
        item
          Caption = #21378#21830
          Width = 150
        end
        item
          Caption = #26085#26399
          Width = 100
        end
        item
          Caption = #23433#35013#36335#24452
          Width = 150
        end>
      TabOrder = 1
      ViewStyle = vsReport
      ExplicitHeight = 186
    end
  end
end
