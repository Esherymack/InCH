[Variables]

							;Global

;Colors

BackgroundColor=22,22,24,255

PrimaryColor=89,89,91,255
PrimaryColorDark=69,69,71,255

SecondaryColor=69,69,71,255
SecondaryColorDark=56,56,58,255

; Maximally contrasting colors

CC1=#SecondaryColor#
CC2=#SecondaryColorDark#
CC3=170,179,182,255
CC4=230,241,245,255
CC5=#PrimaryColor#

LowColor=#PrimaryColor#
MidColor=#CC3#
HighColor=#CC4#

;Fonts

MonoFont=Raleway Thin
PrimaryFont=Raleway
SecondaryFont=Raleway

; Misc

SkinWidth=300
SkinPadding=5
GaugeRotationAngle=240
HistogramHeight=100
LineGraphWidth=.1

							;Skin-specific

;Clock
Locale=en-EN
  ; Default to ISO-8601 HH:MM:SS
ClockFormat=%T
MinClockFormat=%H.%M.%S
LongDateFormat=%e %B, %Y
MinDateFormat=%D
TimeColor=#PrimaryColor#
DateColor=#PrimaryColor#
DayColor=#PrimaryColor#

;Counts
DayCtColor=#SecondaryColor#
WeekCtColor=#SecondaryColor#
;Controls both counts' colors when they're assigned as one
CountColor=#SecondaryColor#

;Uptime
UptimeColor=#CC3#

;PrimaryGauge
CPUColor=#PrimaryColor#
RAMColor=#SecondaryColor#
PrimaryGaugeColor=22,22,24,255
PrimaryGaugeFillColor=22,22,24,255
PrimaryTickColor=255,255,255,255

; Bad things will probably happen if the gauge isn't perfectly square
PrimaryWidth=160
PrimaryHeight=#PrimaryWidth#
; Width of the gauge face, in device-independent pixels
PrimaryEdgeWidth=1.5
PrimaryInnerEdgeWidth=2

PrimaryInnerEdgeRadius=(#PrimaryArcStart#-#PrimaryInnerEdgeWidth#/2)

; Width of the RAM arc
PrimaryArcWidth=(#PrimaryEdgeWidth#*#PrimaryTickScale#*2.5)
; Starting radius of the RAM arc, as calculated from the gauge internal radius and above variable - don't modify formula
PrimaryArcStart=(#PrimaryWidth#/2-#PrimaryEdgeWidth#/2-#PrimaryArcWidth#)

; Size of the ticks as a scalar multiple of the gauge stroke
PrimaryTickScale=5
; Arc length of the gaps as a scalar multiple of the tick arc length (i.e. tick-lengths per gap)
PrimaryTickGapScale=8

; Number of ticks on the face
PrimaryTicks=11
; arc length = 14 ticks' + 13 gaps' length
; 2 * pi * r * 240/360 = (14x + 13y) * stroke
; 4pi/3 * r = (14x + 26x) * stroke where gap length = 2 * tick length
; 4pi/(3 * stroke) * r = 40x
; x = (4pi * r)/(3 * stroke) / 40
; generally, x = (theta * pi * r)/(180*stroke) / (c + k(c-1)) where c is the number of ticks desired and k is the gap scalar and theta is the angle of rotation
PrimaryTickWidth=(#GaugeRotationAngle#*PI*(#PrimaryTickRadius#)/(180*#PrimaryEdgeWidth#*#PrimaryTickScale#)/(#PrimaryTicks# + #PrimaryTickGapScale#*(#PrimaryTicks#-1)))

; Arc length of gap between ticks - don't modify formula
PrimaryTickGap=(#PrimaryTickGapScale#*#PrimaryTickWidth#)

; Half the height of a tick plus half the width of the gauge face - this number is the radial distance the ticks have to be offset if against the gauge face
;PrimaryTickOffset=(#PrimaryEdgeWidth#/2+#PrimaryEdgeWidth#/2*#PrimaryTickScale#)

; Half the height of a tick - this number is the radial distance the ticks have to be offset if free-floating
PrimaryTickOffset=(#PrimaryEdgeWidth#/2*#PrimaryTickScale#)

; Half the width of the gauge minus tick offset - this justifies the ticks against the gauge face when used in conjunction with the first tick offset option above
;PrimaryTickRadius=(#PrimaryWidth#/2-#PrimaryTickOffset#)

; Radius of the inside of the RAM arc minus tick offset - this justifies the ticks against the inside of the RAM arc when used in conjunction with the second tick offset option above
PrimaryTickRadius=(#PrimaryArcStart#+#PrimaryTickOffset#)

PrimaryTickCap=Flat

; Indicators
  ; Power
ACColor=#PrimaryColor#
BatteryNominalColor=#LowColor#
BatteryMidColor=#MidColor#
BatteryCriticalColor=#HighColor#
BatteryLifetimeFormat=%H:%M

  ; Wifi


;CoreTemp
CoreNominalColor=#LowColor#
CoreMediumColor=#MidColor#
CoreHighColor=#HighColor#
CoreTempGaugeFillColor=22,22,24,255
CoreTempGaugeColor=33,28,25,255
CoreTempGaugeWidth=68
CoreTempGaugeHeight=#CoreTempGaugeWidth#
CoreTempGaugePadding=2

;CoreLoad
Core0Color=#CC1#
Core1Color=#CC2#
Core2Color=#CC3#
Core3Color=#CC4#

;Drives/Network
Drive1Color=#PrimaryColor#
Drive1ColorBkg=#PrimaryColorDark#
Drive2Color=#SecondaryColor#
Drive2ColorBkg=#SecondaryColorDark#
MixColor=#CC3#
DLColor=#CC2#
ULColor=#CC5#
LANColor=#PrimaryColor#

; Number of network samples to average over - 1 = no smoothing
NetSmoothing=5

;Audio Status
AudioColor=#PrimaryColor#
AudioColorBkg=#PrimaryColorDark#

;Visualizer
VisualizerBkg=22,22,24,255
VisualizerPort=Output
VisualizerAltPort=Input

RMSAttack=300
RMSDecay=750

FFTSensitivity=55
FFTSize=512
FFTAttack=30
FFTDecay=300

VisualizerCellHeight=7
VisualizerCellRadius=3
VisualizerWidth=12
FFTWidth=20
FFTHeight=132

;Spotify
SongColor=#PrimaryColor#
ArtistColor=#SecondaryColor#
AlbumColor=#CC3#
ControlsColor=#PrimaryColor#
ControlsColorBkg=#PrimaryColorDark#
