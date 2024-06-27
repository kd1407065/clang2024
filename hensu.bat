@echo off
rem 以降のコマンドの出力を抑制する

set str=神戸市
set str2=中央区

set num=10
set num2=8

rem 神戸市中央区と出力
echo %str%%str2%

rem 
set/a num3=num*num2
echo %num3%