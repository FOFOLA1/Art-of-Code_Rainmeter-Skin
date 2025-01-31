[MeterBackground]
Meter=Shape
Shape=Rectangle 2,20,#width#,#height#,15,15 | Fill Color #BGColor# | StrokeWidth 2 | Stroke Color #BDColor#

[MeterHeaderBackground]
Meter=Shape

x=20
y=1
Shape=Rectangle 0,0,((#headerWidth#+1)*7.125+33),20,5 | Extend MyModifiers1
Shape2=Rectangle 0,10,((#headerWidth#+1)*7.125+33),10 | Extend MyModifiers1
Shape3=Combine Shape | Union Shape2
MyModifiers1=Fill Color #BDColor# | StrokeWidth 0 | Stroke Color 0,0,0,0

; Shape=Rectangle 50,0,180,20,5,5 | Fill Color #BDColor# | StrokeWidth 0 | Stroke Color #BDColor#

[meterClose]
Meter=Button
ButtonImage=#@#/Images/closeBtn.png
X=((#headerWidth#+1)*7.125+36)
Y=5.5
ButtonCommand=!DeactivateConfig
ToolTipText=Close