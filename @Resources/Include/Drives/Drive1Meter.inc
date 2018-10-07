[MeterName1]
Meter=String
MeasureName=MeasureDiskLabel1
MeterStyle=StyleSmallerText
X=#SkinPadding#
Y=([MeterActivityLine:Y]+[MeterActivityLine:H]+10)
FontColor=#Drive1Color#
Text=#Drive1# (%1)
LeftMouseUpAction=#Drive1#\
DynamicVariables=1

[MeterActivity1]
Meter=String
MeasureName=MeasureDiskRate1Scalar
MeterStyle=StyleSmallerText
X=#SkinPadding#
Y=0R
ClipString=2
FontColor=#Drive1Color#
AutoScale=1k
Postfix=B/s
LeftMouseUpAction=#Drive1#\

[MeterSpace1]
Meter=String
MeasureName=MeasureDiskUnused1
MeasureName2=MeasureDiskTotal1
MeterStyle=StyleSmallerText
X=0r
Y=0R
AutoScale=1k
FontColor=#Drive1Color#
Text=%1B/%2B
LeftMouseUpAction=#Drive1#\

;[MeterUsedDriveBar1]
;MeasureName=MeasureDiskCapacity1
;Meter=Bar
;X=5R
;Y=2r
;W=200
;H=12
;BarColor=#Drive1Color#
;SolidColor=#Drive1ColorBkg#
;BarOrientation=Horizontal
;LeftMouseUpAction=#Drive1#\

[MeterTotalDrive1]
MeasureName=MeasureDiskTotal1
Meter=Roundline
X=(125+[MeterName1:X])
Y=-15r
StartAngle=4.712
RotationAngle=6.283
LineLength=13
LineColor=#Drive1ColorBkg#
Solid=1
AntiAlias=1
LeftMouseUpAction=#Drive1#\

[MeterFreeDrive1]
MeasureName=MeasureDiskUnused1
Meter=Roundline
X=0r
Y=0r
StartAngle=4.712
RotationAngle=-6.283
LineLength=13
LineColor=#Drive1Color#
Solid=1
AntiAlias=1
LeftMouseUpAction=#Drive1#\